#include <iostream>
#include <locale.h>
#include "math.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	cout << "����� ��������� ����� = ";
	cin >> number;
	cout << "��������� " << number << " = " << factorial(number) << endl;
}