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

	int number{ 0 }, new_number{ 0 }, rests{ 0 };

	cout << "Введите целое число любой разрядности: " << endl;
	cin >> number;

	while (number > 0)
	{
		rests = number % 10;
		new_number = new_number * 10 + rests;
		number /= 10;
	}
	cout << new_number << endl;

	return 0;
}