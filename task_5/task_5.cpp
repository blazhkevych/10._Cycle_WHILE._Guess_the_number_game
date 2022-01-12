﻿/*
5. Написать игру «Угадай число!». Смысл игры в следующем.
Предлагаем пользователю загадать число от 0 до 100 и отгадываем
его следующим способом. На каждой итерации цикла делим
диапазон чисел пополам и записываем результат в переменную N.
Затем предлагаем пользователю три варианта ответа на выбор:
«Ваше число > N», «Ваше число < N» или «Ваше число == N». В
зависимости от того, что указал пользователь, уменьшаем
диапазон. Например, начальный диапазон от 0 до 100. Делим
диапазон пополам и получаем 50. Если пользователь указал, что
его число > 50, то устанавливаем новый диапазон от 51 до 100.
Если пользователь указал, что его число < 50, то устанавливаем
новый диапазон от 0 до 49. На каждой итерации цикла повторяем
эти действия до тех пор, пока пользователь не выберет вариант
«Ваше число == N».
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода

	enum UserChoice
	{
		less_than_N = 1, same_with_N = 2, bigger_than_N = 3
	};

	cout << "Загадайте число от 0 до 100: " << endl;
	int number{ 0 };
	cin >> number;

	int left{ 0 }, right{ 100 }, iteration{ 0 };
	int N = right;

	do
	{
		N = (left + right) / 2; //средина между двумя числами
		cout << "Подскажите, пожалуйста:"
			<< "\n1. Ваше число < " << N
			<< "\n2. Ваше число == " << N
			<< "\n3. Ваше число > " << N << endl;
		int user_choice{ 0 };
		cout << "Вы выбрали вариант № ";
		cin >> user_choice;

		iteration++; //подсчет кол-ва попыток угадать число

		if (user_choice == less_than_N) //если пользователь выбрал меньше
			right = N - 1;
		else if (user_choice == same_with_N) //если пользователь выбрал равно
			break;
		else if (user_choice == bigger_than_N) //если пользователь выбрал больше
			left = N + 1;

	} while (number != N);

	cout << "\nВаше число " << N << ", угадано с " << iteration << " попытки." << endl;

	return 0;
}