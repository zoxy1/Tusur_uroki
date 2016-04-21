// lab5_4
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
using namespace std;

struct sotrudnik
{
string name[50];
int years;
float paycheck;
};
int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
sotrudnik sotr1;
sotr1.name="jhgjh";
sotr1.years=1980;
sotr1.paycheck=50000;
sotrudnik sotr2;
sotrudnik sotr3;
sotrudnik sotr4;
sotrudnik sotr5;

sotr1.name="jhgjh";
sotr1.years=1980;
sotr1.paycheck=50000;

cout<<

}