// lab2_1
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
using namespace std;

int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	
// float *ptrarray = new float [10]; // создан
	//*ptrvalue = 9; // инициализация объекта через указатель
 //int *ptrvalue = new int (9); инициализация может выполнятся сразу при объявлении динамического объекта
	char Second_name[20];
	char First_name[20];
	char Patronymic_name[20]; 
	int elem_mass;
	double _year_double;
	float _year_float;
	cout<<"Введите количество элементов массива:";
	cin >> elem_mass;
	int *mass = new int[elem_mass]; // динамическое выделение памяти под объект типа int
	for(int i=0;i<elem_mass;i++)
	{
		mass[i]=i;
	}

	//int mass[elem_mass];
	for(int i=0;i<elem_mass;i++)
	{
	cout <<i<<"- элемент:" <<mass[i]<<endl;
	
	}

	
	system("pause"); // Команда задержки экрана
	return 0;
}

