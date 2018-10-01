#include "BinarySearch.h"


BinarySearch::BinarySearch()
{
}
BinarySearch::~BinarySearch()
{
}

int BinarySearch::BinSearch(int sorted[], int initial, int last, int value)
{
	int median;
	// determine if Initial is smaller than Last
	if (initial <= last)
	{
		//find the median
		median = (initial + last) / 2;
		//check if value is in median
		//else if value is less than median
		//else (only other place to look) upper region
		if (sorted[median] == value)
			return median;
		else if (value < sorted[median])
			return BinSearch(sorted, initial, median, value);
		else
			return BinSearch(sorted, median + 1, last, value);
	}
	//return zero - item not found
	return 0;
}