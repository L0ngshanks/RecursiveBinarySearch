#include <iostream>

#include "BinarySearch.h"

int main(int argc, char** argv)
{
	int array[] = { 0,1,2,3,4,5,6,7,8 };
	BinarySearch bs;
	int val = 3;
	int result = bs.BinSearch(array, 0, 8, val);
	std::cout << "Found the Val: " << val << " at location: " << result << std::endl;
	system("pause");
};