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
 	unsigned int number=0,year=0,day=0;
	int month[]={0,31,59,90,120,151,181,212,243,273,304,334,365}; //задаем массив количества дней с начала года по месяцам 
	cout<<"Введите год:";
	cin>>year;
	cout<<"Введите номер дня в " <<year<<" году:";
	cin>>number;
	day=number;
	if(number>366) // если введено число больше 366 дней выдаем ошибку ввода
	{
		cout<<"Вы ввели не правилое количество дней"<<endl;
	}
	else
	{
		if(!(year%4)) // если высокосный год прибавляем к масиву month[] по одному дню, начиная с февраля
		{
			for(int i=2;i<=12;i++)
			{
				month[i]+=1;
			}
			cout<<"Высокосный год"<<endl;
		}	
		for(int i=1;i<=12;i++)
		{
			if((number<=month[i])&&(number>month[i-1])) //определяем какой месяц
			{
				day-=month[i-1]; // определяем день месяца
				cout<<number<<"-й день года - "<<day; // выводим день месяца
				switch(i) // определяем и выводим месяц
				{
					case 1:cout<<" января"<<endl;
					break;
					case 2:cout<<" февраля"<<endl;
					break;
					case 3:cout<<" марта"<<endl;
					break;
					case 4:cout<<" апреля"<<endl;
					break;
					case 5:cout<<" мая"<<endl;
					break;
					case 6:cout<<" июня"<<endl;
					break;
					case 7:cout<<" июля"<<endl;
					break;
					case 8:cout<<" августа"<<endl;
					break;
					case 9:cout<<" сентября"<<endl;
					break;
					case 10:cout<<" октября"<<endl;
					break;
					case 11:cout<<" ноября"<<endl;
					break;
					case 12:cout<<" декабря"<<endl;
					break;
					default: ;
				}
			}
		}
	}
	system("pause");
}

