// Лаб.1 Чирков Д.И. ВЫЧИСЛЕНИЕ ЗНАЧЕНИЙ ФУНКЦИИ Задание 24

#include <iostream>
#include <math.h>
#include <locale.h> 

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	double x, a;
	int b;


	cout << "Задание на вычисление y\n"; // Блок ввода
	cout << "Введите x-вещественное ";
	cin >> x;
	cout << "\nВведите a-вещественное ";
	cin >> a;
	cout << "\nВведите b-целое ";
	cin >> b;


	if (((a == 0) && (b == 0)) || (a*x <= 0)) // Условие исключает 0^0 или когда значение под корнем <= 0
	{
		cout << "Нет решений";
	}
	else 
	{
		float y;
		y = pow(a*x, b); 
		y = sqrt(sqrt(y));
		y = (y - 3); 
		cout << "\ny = " << y * y * y;
	}
}



