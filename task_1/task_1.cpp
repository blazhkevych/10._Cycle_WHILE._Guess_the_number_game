/*
1. С клавиатуры вводится целое число любой разрядности.
Необходимо перевернуть это число, т.е. цифры должны
располагаться в обратном порядке (например, вводим число 1234
– в результате будет 4321).
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода

	int number{ 0 }, new_number{ 0 };

	cout << "Введите целое число любой разрядности: " << endl;
	cin >> number;

	while (number > 0)
	{
		new_number = number % 10;
		number /= 10;
		cout << new_number;
	}

	return 0;
}