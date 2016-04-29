// lab7_2
/* Составить структурную диаграмму (блок-схему) и напишите программу определения 
значения квадратного корня x=a из положительного числа a , вводимого с клавиатуры, 
с некоторой заданной точностью ε с помощью рекуррентного соотношения xn+1=12(xn+axn) .*/

#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
using namespace std;
float koreny(int a,int e)
{
	float x=0;
	
	
		if(e!=0)
		{
			x=0.5*(koreny(a,(e-1))+a/koreny(a,(e-1)));
			return x;
		}
			else 
			{
				return x;
			}
}
		
void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
int e=0;
float a=0,xn=1;
cout<<"Введите точность вычисления корня e: ";
cin>>e;
cout<<"Введите число a: ";
cin>>a;

cout<<"Корень числа "<<a<<" равен:"<<koreny(a,e)<<endl;
system("pause");
}

