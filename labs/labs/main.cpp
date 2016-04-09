// lab3_3
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include <ctime> // библиотека необходимая для использования функции time()
using namespace std;


void Vivod(int elementCount, int *Array) //функция вывода на консоль массива с заданным количеством элементов
{
for(int k=0;k<elementCount;k++) // Выводим заполненный массив 
	{
		cout <<k<<" : "<<Array[k]<<" адрес:"<<(Array+k)<<endl;
	
	}	
}

int *Func(int elementCount, int max_value, int *Array)
{
int *p_min_element;
	for(int k=0;k<elementCount; k++) // находим элемент с минимальным значением в массиве
	{
		if((*(Array+k))<max_value)
		{
		max_value=*(Array+k);	
		p_min_element=Array+k;
		}	
	}	
	return p_min_element; // возращаем указатель на элемент имеющий минимальное значение
}


int a[10]; //инициализируем массив типа itn
int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	srand( time( 0 ) ); //используется для того чтобы при новом запуске программы генерировались разные числа в функции rand()
	int *p; // инициализируем указатель
	p=a; // указателю p присваиваем адрес первого элемента массива 
	for(int j=0;j<10;j++){
		*(p+j)=rand(); //заполняем массив с помощью указателя случайными числами  
	}
	cout <<"Выводим массив:"<<endl;
	Vivod(10,p); 
	cout<<"Выводим указатель на элемент имеющий минимальное значение:"<<*(Func(10,32767,p))<<"\nадрес:"<<Func(10,32767,p)<<endl;
	system("pause"); //  Команда задержки экрана
	return 0;
}

