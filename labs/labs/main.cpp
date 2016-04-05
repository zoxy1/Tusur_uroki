// lab3_2
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
	srand( (unsigned int)time( 0 ) ); //используется для того чтобы при новом запуске программы генерировались разные числа в функции rand()
	
	int elem_mass=0, max_value=0;
	int min_value=32767; //максимальное число которое генерит функция rand() 
	cout<<"Введите количество элементов массива:";
	cin >> elem_mass; 
	
	int *mass = new int[elem_mass]; // динамическое выделение памяти под массив типа int размером в elem_mass 
	
	for(int i=0;i<elem_mass;i++) //заполняем массив случайными числами от 0 до 10
	{
		mass[i]=rand();
	}
	for(int i=0;i<elem_mass;i++) // Выводим заполненный массив чисел
	{
		cout <<i<<"- элемент:" <<mass[i]<<endl;
	}
	for(int i=0;i<elem_mass;i++) // вычисляем минимальное и максимальное значение в массиве
	{
		if(max_value<mass[i]) 
		{
			max_value=mass[i];
		}
		if(min_value>mass[i])
		{
			min_value=mass[i];
		}
	
	}

	cout <<"Максимальное значение в массиве равно: " <<max_value<<endl;
	cout <<"Минимальное значение в массиве равно: " <<min_value<<endl;
	
	
	
	//free(mass); //осво бождаем память выделенную под динамический массив 
	delete []mass;
	system("pause"); // Команда задержки экрана
	return 0;
}

