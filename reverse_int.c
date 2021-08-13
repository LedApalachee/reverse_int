int reverse_int(int n)
{
	char n_is_negative = 0;
	int result = 0;
	if (n < 0)
	{
		n *= -1;
		n_is_negative = 1;
	}

	while (n / 10)
	{
		result += n % 10;
		result *= 10;
		n /= 10;
	}
	result += n % 10;

	if (n_is_negative) result *= -1;
	return result;
}