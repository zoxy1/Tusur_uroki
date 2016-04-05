// lab3_3
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include <ctime> // библиотека необходимая для использования функции time()
using namespace std;

int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	//srand( (unsigned int)time( 0 ) ); //используется для того чтобы при новом запуске программы генерировались разные числа в функции rand()
	srand( time( 0 ) ); //используется для того чтобы при новом запуске программы генерировались разные числа в функции rand()
	
	int elem_mass1=0,elem_mass2=0;
	cout<<"Введите количество элементов 1-го массива от 1 до 10:";
	cin >> elem_mass1; 
	int *mass1 = new int[elem_mass1]; // динамическое выделение памяти под массив типа int размером в elem_mass1 
	cout<<"Введите количество элементов 2-го массива от 1 до 10:";
	cin >> elem_mass2; 
	int *mass2 = new int[elem_mass2]; // динамическое выделение памяти под массив типа int размером в elem_mass2 
	
	for(int i=0;i<elem_mass;i++) //заполняем массив случайными числами от 0 до 10
	{
		mass[i]=rand()%10;
	}
	for(int i=0;i<elem_mass;i++) // Выводим заполненный массив чисел
	{
		cout <<i<<"- элемент:" <<mass[i]<<endl;
	}
	
	//free(mass); //осво бождаем память выделенную под динамический массив 
	delete []mass1;
	delete []mass2;
	system("pause"); // Команда задержки экрана
	return 0;
}

