#include <iostream>
#include <vector>
#include "my_lib.h"


int sum(std::vector<int> numbers)
{
	if ( numbers.size() == 1 ) return 0;
    int result = 0, highest = 0, lowest = 0, i = 0;
	for ( auto value: numbers )
	{
		++i;
		if ( i == 1 ) 
		{ 
			lowest = value; 
			highest = value;
			result = value;
			continue; 
		}
		result += value;
		if ( value > highest ) highest = value;
		if ( value < lowest ) lowest = value;
	}
	return result - highest - lowest;
}

