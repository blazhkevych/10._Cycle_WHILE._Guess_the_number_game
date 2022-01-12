/*
2. С клавиатуры вводится целое число. Вывести на экран все числа,
на которые введённое число делится без остатка.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода

	double  result{ 0 }, number{ 0 }, n{ 1 };

	cout << "Введите целое число: " << endl;
	cin >> number;
	cout << endl;

	cout << "Все числа, на которые введённое число делится без остатка : " << endl;

	while (n <= number || n == number)
	{
		result = number / n++;

		if (int(result) == result)
		{
			cout << result << endl;
		}
	}

	return 0;
}

/*
10
10/1=10
10/2=5
10/3=3,333333333333333
10/4=2,5
10/5=2
10/6=1,666666666666667
10/7=1,428571428571429
10/8=1,25
10/9=1,111111111111111
10/10=1


*/