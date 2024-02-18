#include <iostream>
#include <string>
#include <sstream>
#include "my_lib.h"

long long multiplyChar(std::string n_str)
{
	long long result {1};
	for (int i = 0; i < n_str.size(); i++) 
	{	result *= (n_str[i] - '0');	}
	return result;
}

std::string llToString(long long ll)
{
	std::string number_string;
    std::stringstream strstream;
    strstream << ll;
    strstream >> number_string;
	return number_string;
}

int persistence( long long n )
{
	int result {0};
	std::string number_string = llToString(n);
	long long size_n_str = number_string.size();
	if (size_n_str == 1) return result; // result = 0
	while( size_n_str != 1 )
	{
		// std::cout << number_string << '\n';
		++result;
		n = multiplyChar( number_string );
		number_string = llToString( n );
		size_n_str = number_string.size();
	}
	return result;
}
