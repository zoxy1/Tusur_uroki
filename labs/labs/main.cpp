// lab4_1
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include<ctime.h> 
using namespace std;

int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	srand( time( 0 ) ); //используется для того чтобы при новом запуске программы генерировались разные числа в функции rand()
	
	int elem_mass=0,interval_mass=0,summa=0,summa_max=0, index_interval_max=0;
	cout<<"Введите количество элементов массива от 1 до 100:";
	cin >> elem_mass; 
	cout<<"Введите интервал от 0 до "<<elem_mass<<":";
	cin >> interval_mass;
	int *mass = new int[elem_mass]; // динамическое выделение памяти под массив типа int размером в elem_mass 
	
	for(int i=0;i<elem_mass;i++) //заполняем массив случайными числами от 0 до 10
	{
		mass[i]=rand()%10;
	}
	for(int i=0;i<elem_mass;i++) // Выводим заполненный массив чисел
	{
		cout <<i<<"- элемент:" <<mass[i]<<endl;
	}
	
	for(int j=0;j<=(elem_mass-interval_mass);j++) // находим максимальную сумму в заданном интервале
	{
		summa=0;
		for(int i=0;i<interval_mass;i++)
		{
			summa=summa+mass[i+j];
		}
		if(summa_max<summa) 
		{
			summa_max=summa;
			index_interval_max=j; // с этого индекса начинается интервал с максимальной суммой
		}
	}
	
	cout <<"Интервал с максимальной суммой равной: " <<summa_max<<endl; // Выводим максимальную сумму
	for(int i=index_interval_max;i<(index_interval_max+interval_mass);i++) // выводим интервал с максимальной суммой
	{
		cout <<i<<"- элемент:" <<mass[i]<<endl;
	}
	
	delete []mass;
	system("pause"); //  Команда задержки экрана
	return 0;
}

