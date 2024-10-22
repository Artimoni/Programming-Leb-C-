#include <iostream>
#include <cmath>;
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double a, b, c; //Запрос параметров
	cout << "Введите параметр a, b и c: ";
	cin >> a >> b >> c;
	double x; // находим x вершину
	x = -b / (2 * a);
	double y;
	y = a * pow(x, 2) + b * x + c;
	cout << "Полученные координаты вершины (x,y): " << x << ", " << y;


}
