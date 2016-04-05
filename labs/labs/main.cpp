// lab2_1
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
	srand( time( 0 ) );
// float *ptrarray = new float [10]; // создан
	//*ptrvalue = 9; // инициализация объекта через указатель
 //int *ptrvalue = new int (9); инициализация может выполнятся сразу при объявлении динамического объекта
	char Second_name[20];
	char First_name[20];
	char Patronymic_name[20]; 
	int elem_mass,interval_mass,summa=0,summa_max=0, index_interval_max=0;
	double _year_double;
	float _year_float;
	cout<<"Введите количество элементов массива от 1 до 100:";
	cin >> elem_mass;
	cout<<"Введите интервал от 0 до "<<elem_mass<<":"<<endl;
	cin >> interval_mass;
	int *mass = new int[elem_mass]; // динамическое выделение памяти под массив типа int
	
	for(int i=0;i<elem_mass;i++)
	{
		mass[i]=rand()%10;
	}
	for(int i=0;i<elem_mass;i++)
	{
		cout <<i<<"- элемент:" <<mass[i]<<endl;
	}
	/*while (max_interval!=elem_mass)
	{
	
	}*/
	for(int j=0;j<=(elem_mass-interval_mass);j++)
	{
		summa=0;
		for(int i=0;i<interval_mass;i++)
		{
			summa=summa+mass[i+j];
		}
		if(summa_max<summa)
		{
			summa_max=summa;
			index_interval_max=j;
		}
	}
	
	cout <<"Интервал с максимальной суммой равной: " <<summa_max<<endl;
	for(int i=index_interval_max;i<(elem_mass-index_interval_max);i++)
	{
		cout <<i<<"- элемент:" <<mass[i]<<endl;
	}
	system("pause"); // Команда задержки экрана
	return 0;
}

