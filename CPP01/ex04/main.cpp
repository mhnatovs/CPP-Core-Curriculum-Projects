/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:11:44 by mhnatovs          #+#    #+#             */
/*   Updated: 2026/05/19 16:11:36 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Incorrect input!\n";
		return (1);
	}
	
	if (std::string(argv[2]).empty())
	{
		std::cout << "Error: string cannot be empty!\n";
		return (1);
	}

	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Error opening file." << std::endl;
		return (1);
	}
	
	std::string outName = std::string(argv[1]) + ".replace";
	std::ofstream outFile(outName.c_str());
	if (!outFile.is_open())
	{
		std::cout << "Error creating output file." << std::endl;
		return (1);
	}
	
	std::string line;
	std::string text;
	while (std::getline(file, line))
	{
		text += line;
		if (!file.eof())
			text += "\n";
	}
	replaceStr(text, argv[2], argv[3]);
	outFile << text;
	
	file.close();
	outFile.close();
	return (0);
}
