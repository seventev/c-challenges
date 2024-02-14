/*
Persistent Bugger
Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit.

https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec/train/cpp
*/

#include <iostream>

#include "my_lib.h"

int main()
{
    
	const int SIZE_ARRAY {5};
	long long numbers_for_tests[SIZE_ARRAY] = { 39, 4, 25, 999, 444 };
	for (int i = 0; i < SIZE_ARRAY; i++)
    {
		std::cout << persistence( numbers_for_tests[i] ) << '\n';
	}

	return 0;
}

