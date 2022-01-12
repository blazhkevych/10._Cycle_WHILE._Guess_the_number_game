/*
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

	int left{ 0 }, right{ 100 };
	int N = right;

	do
	{
		N /= 2;

		cout << "\n1. Ваше число < " << N
			<< "\n2. Ваше число ==  " << N
			<< "\n3. Ваше число > " << N << endl;
		int user_choice{ 0 };
		cin >> user_choice;

		if (user_choice == less_than_N)
		{
			right = N - 1;
			break;
		}
		else if (user_choice == same_with_N)
		{

		}
		else if (user_choice == bigger_than_N)
		{
			left = N + 1;
			break;
		}



	} while (number != N);

	////int temp = N;
	//do
	//{
	//	N /= 2;
	//	cout << "\n1. Ваше число > " << N
	//		<< "\n2. Ваше число < " << N
	//		<< "\n3. Ваше число ==  " << N << endl;
	//	int user_choice{ 0 };
	//	cin >> user_choice;

	//	switch (user_choice)
	//	{
	//	case Your_number_bigger_than_N:
	//		left = N + 1;
	//		N = (right-left)/2+left;
	//		break;

	//	case Your_number_less_than_N:
	//		right = N - 1;
	//		break;

	//	case Your_number_same_with_N:
	//		if (number == N)
	//			cout << "Ваше число = " << N;
	//		break;
	//	}
	//	//N = temp;
	//} while (number != N);

	return 0;
}