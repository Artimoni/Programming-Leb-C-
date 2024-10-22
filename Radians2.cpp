#include <cmath>
#include <iostream> //Для числа Пи M_PI


using namespace std;
void main()
{
    const double Pi = 3.141592653589793;
    setlocale(LC_ALL, "Rus"); //Добавление символов русского значения
    double radian;
    cout << "Введите радианную меру:\n";
    cin >> radian; //Ввод радианной меры
    double degreesZ, degreesZ1;
    degreesZ1 = radian * (180 / Pi);
    degreesZ = radian * (180 / Pi) - floor(radian * (180 / Pi));
    double minute;
    minute = degreesZ * 60;
    double minuteZ;
    minuteZ = minute - floor(minute);
    double sec;
    sec = minuteZ * 60;


    cout << "Ответ:" << endl;
    cout << "Градусы: " << degreesZ1 << "\nМинуты: " << minute << "\nСекунды: " << sec << endl;
}










