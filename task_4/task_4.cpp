/*
4. Ввести с клавиатуры число. Проверить, что цифры этого числа
расположены в неубывающем порядке (например, число 11299
соответствует заданию, а число 22044 нет).
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода
	while (true)
	{
		int number{ 0 }, temp{ 0 }, section{ 0 }, a{ 0 }, b{ 0 };

		cout << "Введите число: " << endl;
		cin >> number;

		temp = number; //временное хранилище для числа

		do //подсчитываем кол-во цифр в числе
		{
			number /= 10;
			b++;
		} while (number > 0);

		if (b == 1 || b == 0) //проверка на 0 или 1 число
		{
			cout << "Для задания нужно ввести 2 и более чисел!";
			break;
		}

		number = temp; //возвращаем число на место

		do //проверка числа на соответствие заданию
		{
			temp = number % 10;
			number /= 10;
			section = number % 10;
			if (temp >= section)
				a++;
			else
			{
				cout << "Число не соответствует заданию." << endl;
				break;
			}
			temp = section;
		} while (number > 0);

		if (a == b)
			cout << "Цифры этого числа расположены в неубывающем порядке." << endl;
	}

	return 0;
}