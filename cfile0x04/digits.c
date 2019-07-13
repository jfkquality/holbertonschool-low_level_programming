int digits(int n)
{
	int totalDigits = 0;

	while(n != 0)
	{
		n = n / 10;
		totalDigits ++;
	}
	return (totalDigits);
}
