﻿// lab7_2
/* Составить структурную диаграмму (блок-схему) и напишите программу определения 
значения квадратного корня x=a из положительного числа a , вводимого с клавиатуры, 
с некоторой заданной точностью ε с помощью рекуррентного соотношения xn+1=12(xn+axn) .*/

#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
using namespace std;

		
void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
    double e = 0.0001; // заданная точность
    double a;
	double x0, x1 = 1,tol=0;
    cout << "Введите число:";
    cin >> a;
    do {
        x0 = x1; // запоминаем предыдущее значение
        x1 = 0.5*(x0 + a/x0); 
        tol=x1-x0; //вычисляем разницу между вычисленным в данном цикле и предыдущем цикле 
		if(tol<0) // если разница < 0 домножаем на -1
			{
			tol*=-1;
			}
	} 
	while(tol > e); // разность tol < заданной точности e, то заканчиваем цикл
	cout.precision(40); // устанавливаем точность вывода double до запятой 20 знаков и 20 знаков после запятой
    cout << "Квадратный корень числа при точности е=0.0001 равен:"<<endl<<x1<<endl;
    cout << "sqrt(x) = "<<endl<<sqrt(a) << endl;
   	system("pause");
}

