#include "reverse_int.h"
#include <math.h>

int reverse_int(int n)
{
	char is_negative = 0;
	unsigned char digits_count = 1;
	int result = 0;

	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}

	for (int i = 10; n / i; i *= 10)
		++digits_count;

	for (int i = digits_count-1; i >= 0; --i)
		result += (n / (int)pow(10, i) % 10) * (int)pow(10, digits_count-1-i);

	if (is_negative) result *= -1;
	return result;
}