#include <cmatch>
#include <iostream>;
using namespace std;
void main()
{
	const double Pi = 3.141592653589793;
	setlocale(LC_ALL, "Rus");    //Добавляем русские символы в консоль
	int r, a;
	cout << "Введите радиус окружности и сторону правильного треугольника: ";
	cin >> a >> r;
	double Sr = Pi * pow(r, 2);
	double Sa = (pow(a, 2) * sqrt(3)) / 4;
	cout << "Количество кругов: " << floor(Sa / Sr) << endl;
}