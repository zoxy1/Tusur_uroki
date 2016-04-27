﻿// lab6_3
/* В японском календаре был принят 60-летний цикл, состоящий из пяти 12-летних подциклов. 
Внутри подцикла годы носили названия животных мыши, коровы, тигра, зайца, дракона, змеи, 
лошади, овцы, обезьяны, курицы, собаки и свиньи. Попарно года в подцикле обозначались названиями цвета: 
зеленый, красный, желтый, белый и черный. По номеру года определить его название по японскому календарю, 
считая за начало очередного цикла 1984 год − год зеленой мыши (1985 − год зеленой коровы, 
1986 − год красного тигра, 1987 − год красного зайца и т.д.).*/

#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
using namespace std;

void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
int year=0,sicl=1,pod_sick=1;

cout<<"Введите год: ";
cin>>year;
year=year-3;
if(year>=1)
{
	while(year>60)
	{
		year=year-60;
		sicl++;
	}
	while(year>12)
	{
		year=year-12;
		pod_sick++;
	}
	switch(year)
	{
	case 1: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год зеленой мыши"<<endl;
	break;
	case 2: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год зеленой коровы"<<endl;
	break;
	case 3: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год красного тигра"<<endl;
	break;
	case 4: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год красного зайца"<<endl;
	break;
	case 5: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год желтого дракона"<<endl;
	break;
	case 6: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год желтой змеи"<<endl;
	break;
	case 7: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год белой лошади"<<endl;
	break;
	case 8: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год белой овцы"<<endl;
	break;
	case 9: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год черной обезъяны"<<endl;
	break;
	case 10: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год черной курицы"<<endl;
	break;
	case 11: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год зеленой собаки"<<endl;
	break;
	case 12: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год зеленой свиньи"<<endl;
	break;
	default: cout<<"Ошибка ввода года"<<endl;
	}
}
else
{
	switch(year)
	{
		case -3: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"черной обезъяны"<<endl;
		break;
		case -2: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год черной курицы"<<endl;
		break;
		case -1: cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год зеленой собаки"<<endl;
		break;
		case 0:  cout<<"По японскому календарю ";
		cout<<sicl<<" цикл, "<<pod_sick<<" подцикл, "<<endl<<"год зеленой свиньи"<<endl;
		break;
		default:  cout<<"Ошибка ввода года"<<endl;
	}
}
system("pause");
}

