#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");    //Добавляем русские символы в консоль
	int hours, min, sec;
	cout << "Введите часы, минуты, секунды: ";
	cin >> hours >> min >> sec;
	min = min + (sec / 30);
	cout << hours << " часa(ов) " << min << " минут(ы) или ";
	hours = hours + (min / 30);
	cout << hours << " часа(ов) " << endl;



}

