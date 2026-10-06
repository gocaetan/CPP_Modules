#include <iostream>
#include <string>
#include <fstream>

std::string replace(std::string text, std::string s1, std::string s2)
{
	std::string result = "";
	size_t pos = 0;
	size_t found;
	if(s1.empty())
		return text;
	found = text.find(s1, pos);
	while(found != std::string::npos)
	{
		result += text.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
		found = text.find(s1, pos);
	}
	result += text.substr(pos);
	return result;
}
int main(int ac, char **av)
{
	if(ac != 4)
	{
		std::cout << "The program must take 3 arguments, ./Sed_is_4_losers [filename] [str1] [str2]" << std::endl;
		return 1;
	}
	std::ifstream input(av[1]);
	if(!input)
	{
		std::cout << "Error opening the file" << std::endl;
		return(1);
	}
	std::string text;
	std::getline(input, text, '\0');
	std::string outputName = av[1] + std::string(".replace");
	std::ofstream output(outputName.c_str());
	if(!output)
	{
		std::cout << "Error writing the file" << std::endl;
		return(1);
	}
	output << replace(text, av[2], av[3]);
}