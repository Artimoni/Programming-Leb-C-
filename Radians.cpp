#include <iostream>
#include <cmath>; // для числа Пи M_PI

using namespace std;
void main()
{
	const double Pi = 3.141592653589793; // Значение ПИ

	setlocale(LC_ALL, "Rus");    //Добавление символов русского значения
	double degress, min, sec;
	cout << "Введите градусы, минуты, секунды:\n";
	cin >> degress >> min >> sec; // Ввод данных
	double radian;
	radian = (degress + (min + sec / 60) / 60 * fabs(degress) / degress) * Pi / 180;// Данные переводятся в радианы
	cout << radian << endl;
}