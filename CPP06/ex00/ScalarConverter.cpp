#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
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
    int i = 0;
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
    int i = 0;
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
    int i = 0;
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
    int value = std::stoi(data);
    char c = static_cast<char>(value);
    int i = static_cast<int>(value);
    float f = static_cast<float>(value);
    double d = static_cast<double>(value);
}
