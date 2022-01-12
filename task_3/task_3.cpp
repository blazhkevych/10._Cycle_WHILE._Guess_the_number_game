/*
3. Проверить, есть ли во введенном числе одинаковые цифры подряд.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода

	int number{ 0 }, temp{ 0 }, section{ 0 };

	cout << "Введите число: " << endl;
	cin >> number;

	while (number > 9)
	{
		temp = number % 10;
		number /= 10;
		section = number % 10;
		if (temp == section)
			cout << temp << section << endl;
		temp = section;
	}

	return 0;
}