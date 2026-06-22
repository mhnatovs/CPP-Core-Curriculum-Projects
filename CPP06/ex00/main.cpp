#include "ScalarConverter.hpp"
#include <iomanip> 
#include <iostream>

int main(int ac, char**av)
{
    if (ac != 2)
        std::cout << "Input correct value\n";
    
/*ScalarConverter::convert("42");
ScalarConverter::convert("a");
ScalarConverter::convert("4.2f");
ScalarConverter::convert("nan");
• char
• int
• float
• double
спеціальні значення IEEE
float:
nanf
+inff
-inff
double:
nan
+inf
-inf
ScalarConverter::convert("nan");
char: impossible
int: impossible
float: nanf
double: nan
nan не можна перетворити в char або int
pseudo literals
static_cast<>
*/

float f = 114.2f;
std::cout << f << std::endl;
int i = static_cast<int>(f);
std::cout << i << std::endl;
char c = static_cast<char>(i);
std::cout << c << std::endl;
double d = static_cast<double>(f);
std::cout << d << std::endl;
}

// using namespace std;

// int main() {
//   int num1 = 5;
//   int num2 = 2;
//   double sum = static_cast<double>(num1) / num2;

//   cout << fixed << setprecision(1) << sum; // 2.5
//   return 0;
// }