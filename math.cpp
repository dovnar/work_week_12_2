int factorial(int number)
{
	return (number > 0 ? (number * factorial(number - 1)) : 1);
}