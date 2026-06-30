#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <climits>
#include <cfloat>

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; }
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return (*this); }
ScalarConverter::~ScalarConverter() {}

static bool isChar(const std::string& data)
{
    if (data.length() == 1 && !std::isdigit(static_cast<unsigned char>(data[0])))
        return true;
    return false;
}

static bool isNanLiteral(const std::string& data)
{
    return (data == "nan" || data == "nanf");
}

static bool isInfLiteral(const std::string& data)
{
    return (data == "inf" || data == "+inf" || data == "-inf" ||
            data == "inff"|| data == "+inff"|| data == "-inff");
}

static bool isPseudo(const std::string& data)
{
    return (isNanLiteral(data) || isInfLiteral(data));
}

static bool isInt(const std::string& data)
{
    if (data.empty())
        return false;
    size_t i = 0;
    if (data[i] == '+' || data[i] == '-')
    {
        i++;
        if (i >= data.length())
            return false;
    }
    while (i < data.length())
    {
        if (!std::isdigit(data[i]))
            return false;
        i++;
    }
    return true;
}

static bool isFloat(const std::string& data)
{
    if (data.empty())
        return false;
    int point = 0;
    size_t i = 0;
    bool hasDigit = false;
    if (data[i] == '+' || data[i] == '-')
    {
        i++;
        if (i >= data.length())
            return false;
    }
    while (i < (data.length() - 1))
    {
        if (!std::isdigit(data[i]) && data[i] != '.')
            return false;
        if (data[i] == '.')
        {
            point++;
            if (point > 1)
                return false;
        }
        if (std::isdigit(data[i]))
            hasDigit = true;
        i++;
    }
    if (data[data.length() - 1] != 'f')
        return false;
    if (point != 1 && hasDigit)
        return false;
    return true;
}

static bool isDouble(const std::string& data)
{
    if (data.empty())
        return false;
    bool hasDigit = false;
    int point = 0;
    size_t i = 0;
    if (data[i] == '+' || data[i] == '-')
    {
        i++;
        if (i >= data.length())
            return false;
    }
    while (i < data.length())
    {
        if(!std::isdigit(data[i]) && data[i] != '.')
            return false;
        if (data[i] == '.')
            point++;
        if (std::isdigit(data[i]))
            hasDigit = true;
        i++;
    }
    if (point != 1 && hasDigit)
        return false;
    return true;
}

void ScalarConverter::convert(const std::string& data)
{
    char    c = 0;
    float   f = 0;
    double  d = 0;
    int     i = 0;
    bool    impossible = false;

    if (isChar(data))
    {
        c = data[0];
        i = static_cast<int>(c);
        f = static_cast<float>(c);
        d = static_cast<double>(c);
    }
    else if (isNanLiteral(data))
    {
        d = nan("");
        f = nanf("");
        impossible = true;
    }
    else if (isInfLiteral(data))
    {
        double sign;
        if (data[0] == '-')
            sign = -1.0;
        else
            sign = 1.0;
        d = sign * std::numeric_limits<double>::infinity();
        f = static_cast<float>(d);
        impossible = true;
    }
    else if (isInt(data) || isFloat(data) || isDouble(data))
    {
        d = std::strtod(data.c_str(), NULL);
        f = static_cast<float>(d);
        if (d > INT_MAX || d < INT_MIN)
            impossible = true;
        else
            i = static_cast<int>(d);
        c = static_cast<char>(i);
    }
    else
    {
        std::cout << "Invalid literal." << std::endl;
        return ;
    }
    std::cout << "char: ";
    if (impossible || d < 0 || d > 127)
        std::cout << "impossible" << std::endl;
    else if (i < 32 || i > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << c << "'" << std::endl;
    std::cout << "int: ";
    if (impossible)
        std::cout << "impossible" << std::endl;
    else
        std::cout << i << std::endl;

    // ---- float ----
    std::cout << "float: ";
    if (std::isnan(f))
        std::cout << "nanf" << std::endl;
    else if (std::isinf(f))
        std::cout << (f < 0 ? "-inff" : "+inff") << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;

    // ---- double ----
    std::cout << "double: ";
    if (std::isnan(d))
        std::cout << "nan" << std::endl;
    else if (std::isinf(d))
        std::cout << (d < 0 ? "-inf" : "+inf") << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << d << std::endl;
}

/*

vj
g 00419.661

*/