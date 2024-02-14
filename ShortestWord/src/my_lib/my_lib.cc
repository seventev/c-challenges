#include <iostream>
#include <string>

#include "my_lib.h"

int find_short(std::string str)
{
	if (str.empty()) return 0;
	int i = -1, ii = 0, shortestword = 0, spaces = 0;
	bool init = false;
	while (true){
		++i;
		++ii;
		if (str[i] == 32 && !init)
		{
			ii = 0;
			continue;
		}
		else
		{
			init = true;
		}
		if (i == 0) continue;
		if (str[i - 1] == '\0')
		{
			// std::cout << str[i - 2] << '\n'; // last char
			if ((ii-2) < shortestword) shortestword = ii-2;
			if (ii > 0 && shortestword == 0) shortestword = ii-2;
			break;
		}
		if (str[i] == 32)
		{
			++spaces;
			if ((ii - 1) == 1) return 1;
			if (spaces == 1) shortestword = ii - 1;
			else if ((ii-1) < shortestword) shortestword = ii-1;
			ii = 0;
		}
	}

	return shortestword;
}
