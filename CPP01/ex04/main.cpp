#include "SedIsForLosers.hpp"
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 3)
		std::cout << "Incorrect input!\n";
	
	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Error opening file." << std::endl;
		return (1);
	}
	// std::string line;
	// while (std::getline(file, line))
	// {
	// 	std::cout << line << std::endl;
	// }
	std::ofstream outFile("result.replace");
	outFile << "helvjklo\n";
	file.close();
	outFile.close();
	return (0);
}
