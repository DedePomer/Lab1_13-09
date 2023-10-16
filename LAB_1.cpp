// Лаб.1 Чирков Д.И. ВЫЧИСЛЕНИЕ ЗНАЧЕНИЙ ФУНКЦИИ Задание 24

#include <iostream>
#include <math.h>
#include <locale.h> 

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	double x, a, y;
	int b;



	cout << "Задание на вычисление y\n"; // Блок ввода
	cout << "Введите x-вещественное ";
	cin >> x;
	cout << "\nВведите a-вещественное ";
	cin >> a;
	cout << "\nВведите b-целое ";
	cin >> b;

	if (a * x > 0) // ax>0
	{
		if (b == 0)
		{
			y = 1;
			y = (y - 3);
			cout << "\ny = " << y * y * y;
		}
		else if (b % 4 == 0)
		{
			b = b / 4;
			y = pow(a * x, b);
			y = (y - 3);
			cout << "\ny = " << y * y * y;
		}
		else
		{
			y = pow(a * x, b);
			y = sqrt(sqrt(y));
			y = (y - 3);
			cout << "\ny = " << y * y * y;
		}
	}
	else if (a * x == 0) // ax=0
	{
		if (b == 0)
		{
			y = 1;
			y = (y - 3);
			cout << "\ny = " << y * y * y;
		}
		else if (b < 0)
		{
			cout << "Нет решений";
		}
		else
		{
			y = 0;
			y = (y - 3);
			cout << "\ny = " << y * y * y;
		}
	}
	else // ax<0
	{
		if (b == 0)
		{
			y = pow(a * x, b);
			y = (y - 3);
			cout << "\ny = " << y * y * y;
		}
		else if (b % 4 == 0)
		{
			b = b / 4;
			y = pow(a * x, b);
			y = (y - 3);
			cout << "\ny = " << y * y * y;
		}
		else
		{
			cout << "Нет решений";
		}
	}





	/*if (a*x >= 0)
	{
		if (a*x == 0 && b <= 0) 
		{
			cout << "Нет решений";
		}
		else if (a * x == 0 && b > 0)
		{
			y = pow(a * x, b);
			y = (y - 3);
			cout << "\ny = " << y * y * y;
		}
		else if (b == 0)
		{
			y = pow(a * x, b);
			y = (y - 3);
			cout << "\ny = " << y * y * y;
		}
		else if (b % 4 == 0)
		{
			b = b / 4;
			y = pow(a * x, b);
			y = (y - 3);
			cout << "\ny = " << y * y * y;
		}
		else
		{
			y = pow(a * x, b);
			y = sqrt(sqrt(y));
			y = (y - 3);
			cout << "\ny = " << y * y * y;
		}
	}
	else
	{
		if (b == 0)
		{
			y = pow(a * x, b);
			y = (y - 3);
			cout << "\ny = " << y * y * y;
		}
		else if (b % 4 == 0)
		{
			b = b / 4;
			y = pow(a * x, b);
			y = (y - 3);
			cout << "\ny = " << y * y * y;
		}
		else
		{
			cout << "Нет решений";
		}
	}*/
	
	
}



