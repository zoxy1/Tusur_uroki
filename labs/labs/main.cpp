// lab5_1
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include<math.h> // содержит функцию sin(x);
using namespace std;

void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	double d_left=0, d_right=0,shag=0, sinx_f=0,sinx_d=0;
	cout<<"Введите через пробел диапазон изменения аргумента синуса:";
	cin>>d_left; //вводим левую границу диапазона аргумента х 
	cin>>d_right; //вводим правую границу диапазона аргумента х 
	cout<<"Введите шаг изменения аргумента х в sin(х):";
	cin>>shag; //вводим шаг аргумента х 
	cout.precision(10); // устанавливаем на вывод точность десять десятичных знаков
	for(d_left;d_left<=d_right;d_left+=shag)
		{
			sinx_d=sin(d_left); //находим значение синуса для аргумента типа double
			sinx_f=sin((float)d_left); //находим значение синуса для аргумента типа float
			cout<<endl<<endl<<"При х="<<d_left<<endl; // выводим значение аргумента
			cout<<"double:"<<sinx_d<<endl;	// выводим значение синуса для аргумента типа double
			cout<<"float: "<<sinx_f; // выводим значение синуса для аргумента типа float
			if((sinx_d!=0)||(sinx_f!=0)) 
			{
				// сравниваем значение синуса для аргумента типа double и float
				if(sinx_d>sinx_f) 
				{
					cout<<endl<<"Значение sin((double)х)>sin((float) x)"<<endl;
				}
				else
				{
					cout<<endl<<"Значение sin((double)х)<sin((float) x)"<<endl;
				}
			}
			if(sin(d_left)==sin((float)d_left))
				{
					cout<<endl<<"Значение sin((double)х)==sin((float) x)"<<endl;
				}
		
	
		}
	system("pause"); //  Команда задержки экрана
}

