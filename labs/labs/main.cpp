// lab7_2
/* Составить структурную диаграмму (блок-схему) и напишите программу определения 
значения квадратного корня x=a из положительного числа a , вводимого с клавиатуры, 
с некоторой заданной точностью ε с помощью рекуррентного соотношения xn+1=12(xn+axn) .*/

#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include <math.h>
using namespace std;

		
void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
    int e = 0.000000001;
    double a;
	double x0, x1 = 1,tol=0;
    int iter = 0;
    cout << "Введите число:";
    cin >> a;
    do {
        x0 = x1;
        x1 = 0.5*(x0 + a/x0);
        ++iter;
		tol=x1-x0;
		if(tol<0)
			{
			tol*=-1;
			}
	} 
	while(tol > e);
    
    cout << "Квадратный корень числа" <<endl<<"равен:"<<x1<<endl;
    cout << "sqrt(x) = " << sqrt(a) << endl;
    cout << "      n = " << iter << endl;

	system("pause");
}

