/* 
https://www.codewars.com/kata/576b93db1129fcf2200001e6/train/cpp

Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

Mind the input validation.
 
*/
#include <iostream>
#include "my_lib.h"

int main()
{
    
	//const int SIZE_VECTOR {5};
	std::cout << sum({ 6, 2, 1, 8, 10 }) << '\n';
	std::cout << sum({ 1, 1, 11, 2, 3 }) << '\n';
	return 0;
}

