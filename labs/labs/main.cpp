// lab7_3
/* Составить структурную диаграмму (блок-схему) и напишите программу, 
которая по номеру дня в году выводит число и месяц в общепринятой форме 
(например, 33-й день года − 2 февраля).*/

#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
using namespace std;
		
void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
 
	
	unsigned long int number=0,year=0;
	unsigned long int day=0,visok_day=0,no_visok_day=0;
	int month[]=         {0,31,60,91,121,152,182,213,244,274,305,335,366};
	cout<<"Введите год:";
	cin>>year;
	cout<<"Введите номер дня в " <<year<<" году:";
	cin>>number;
	if(number>366)
	{
		cout<<"Вы ввели не правилое количество дней"<<endl;
	}
	else
	{
		if(!(year%4))
		{
			for(int i=2;i<=12;i++)
			{
				month[i]+=1;
			}
			cout<<"Высокосный год"<<endl;
		}	
		visok_day=((year-1)/4)-1; // считаем сколько всего высокосных лет
		no_visok_day=365*(year-1); // считаем сколько всего дней без учета высокостных
		day=number+visok_day+no_visok_day;
		
		for(int i=1;i<=12;i++)
		{
			if((number<=month[i])&&(number>month[i-1]))
			{
				number-=month[i-1];
				cout<<number<<" ";
				switch(i)
				{
					case 1:cout<<"января ";
					break;
					case 2:cout<<"февраля ";
					break;
					case 3:cout<<"марта ";
					break;
					case 4:cout<<"апреля ";
					break;
					case 5:cout<<"мая" ;
					break;
					case 6:cout<<"июня ";
					break;
					case 7:cout<<"июля" ;
					break;
					case 8:cout<<"августа ";
					break;
					case 9:cout<<"сентября ";
					break;
					case 10:cout<<"октября"<<endl;
					break;
					case 11:cout<<"ноября"<<endl;
					break;
					case 12:cout<<"декабря"<<endl;
					break;
					default: ;
				}
			}
		}
	
	if(day>7)
	{
		unsigned long int temp;
		temp=day/7;
		day-=temp*7;
	}
		
		switch(day)
		{
		case 1: cout<<"понедельник"<<endl;
		break;
		case 2: cout<<"вторник"<<endl;
		break;
		case 3: cout<<"среда"<<endl;
		break;
		case 4: cout<<"четверг"<<endl;
		break;
		case 5: cout<<"пятница"<<endl;
		break;
		case 6: cout<<"суббота"<<endl;
		break;
		case 7: cout<<"воскресенье"<<endl;
		break;
		default:;
		}
	}
	system("pause");
}

