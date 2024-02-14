/*
Shortest Word: Simple, given a string of words, return the length of the shortest word(s).
https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/cpp
*/

#include <iostream>

#include "my_lib.h"

int main()
{
	std::cout << find_short("bitcoin take over the world maybe who knows perhaps") << '\n';
	std::cout << find_short("turns out random test cases are easier than writing out basic ones") << '\n';
	std::cout << find_short("lets talk about javascript the best language") << '\n';
	std::cout << find_short("i want to travel the world writing code one day") << '\n';
	std::cout << find_short("Lets all go on holiday somewhere very cold") << '\n';
	std::cout << find_short("Let's travel abroad shall we") << '\n';
	
    return 0;
}

