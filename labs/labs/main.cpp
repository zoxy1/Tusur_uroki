﻿// lab8_1
/* Разработать программу, которая вводит фактические данные из таблицы, представленной ниже, и выводит на экран таблицу.
Ведомость спортивных состязаний:
№ 	Фамилия участника 	Код команды 	Количество балов 	Место в итоге
1 	Баландин 				С 				122 				1
2 	Шишков 					Т 				88 					3
3 	Кравченко 				Д 				104 				2

Примечание: Д − "Динамо", С − "Спартак", Т − "Томь".*/

#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include <string> //необходима для работы со строками
#include <iomanip> //необходима для setw() задание ширины поля вывода данных 
using namespace std;

struct uch_struct //объявляем структуру участника спортивных состязаний
{
string Familia;
unsigned char kod;
unsigned int bal;
unsigned int mesto;
};


void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	uch_struct uchastnik[4]; // инициализируем массив структур
	string shapka[5]={"№ ","Фамилия участника","Код команды","Количество балов","Место в итоге"}; // шапка таблицы
	int pos=20; // ширина поля вывода данных в таблице
		
	for(int i=1;i<=3;i++) // цикл ввода данных о трех участниках состязаний
	{
		cout<<"введите через пробел фамилию "<<i<<"-го участника:";
		cin>>uchastnik[i].Familia; // вводим фамилию участника
		cout<<endl<<"введите код команды:";
		cin>>uchastnik[i].kod; // вводим код команды 
		cout<<endl<<"введите балл команды:";
		cin>>uchastnik[i].bal; // вводим количество набранных балов
		cout<<endl<<"введите итоговое место команды:";
		cin>>uchastnik[i].mesto; // вводим итоговое место
		cout<<endl;
	}
	
	cout<<endl<<"Ведомость спортивных состязаний:"<<endl<<endl;
	
	for(int i=0;i<=3;i++) //выводим таблицу состязаний
	{
		if(i==0) // если первая строка выводим шапку таблицы
		{
			for(int j=0;j<5;j++)
			{
				cout<<shapka[j]<<setw(pos)<<left;	
			}
		}
			
		else
		{
			cout<<i<<" "; // выводим номер участника
			cout<<setw(pos)<<left<<uchastnik[i].Familia;//выводим фамилию участника	
			cout<<setw(pos)<<left<<uchastnik[i].kod;	//выводим код команды участника	
			cout<<setw(pos)<<left<<uchastnik[i].bal;	//выводим количество баллов
			cout<<setw(pos)<<left<<uchastnik[i].mesto;	//выводим итоговое место
		}
		cout<<setw(1)<<endl; // переходим на новую строку		
	}

cout<<endl; // переходим на новую строку	
system("pause"); // команда задержки экрана
}

