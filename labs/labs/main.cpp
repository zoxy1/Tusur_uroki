// lab8_1
/* Разработать программу, которая вводит фактические данные из таблицы, представленной ниже, и выводит на экран таблицу.
Ведомость спортивных состязаний:
№ 	Фамилия участника 	Код команды 	Количество балов 	Место в итоге
1 	Баландин 				С 				122 				1
2 	Шишков 					Т 				88 					3
3 	Кравченко 				Д 				104 				2

Примечание: Д − "Динамо", С − "Спартак", Т − "Томь".*/

#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include <string>
using namespace std;

struct uch_struct
{
string Familia;
unsigned char kod;
unsigned int ball;
unsigned int mesto;
};


void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
 
	uch_struct uchastnik[4];
	
	for(int i=1;i<=3;i++)
	{
	cout<<"введите через пробел фамилию "<<i<<"-го участника:";
	cin>>uchastnik[i].Familia;
	cout<<endl<<"введите код команды:";
	cin>>uchastnik[i].kod;
	cout<<endl<<"введите балл команды:";
	cin>>uchastnik[i].ball;
	cout<<endl<<"введите итоговое место команды:";
	cin>>uchastnik[i].mesto;
	cout<<endl;
	}



	system("pause");
}

