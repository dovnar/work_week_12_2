#include <iostream>
#include <locale.h>
#include "math.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	cout << "найти фактариал числа = ";
	cin >> number;
	cout << "факториал " << number << " = " << factorial(number) << endl;
}