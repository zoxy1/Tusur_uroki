// lab5_2
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include <ctime> // библиотека необходимая для использования функции time()
using namespace std;

void fuction_srav(int * mass1, int elem_mass1, int * mass2, int elem_mass2); //прототип функции

void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	srand( time( 0 ) ); //используется для того чтобы при новом запуске программы генерировались разные числа в функции rand()
	
	int elem_mass1=0,elem_mass2=0;
	
	cout<<"Введите количество элементов первого массива:";
	cin >> elem_mass1; 
	cout<<"Введите количество элементов первого массива:";
	cin >> elem_mass2; 
	
	int *mass1 = new int[elem_mass1]; // динамическое выделение памяти под массив типа int размером в elem_mass1 
	int *mass2 = new int[elem_mass2]; // динамическое выделение памяти под массив типа int размером в elem_mass1 

	for(int i=0;i<elem_mass1;i++) //заполняем массив случайными числами от 0 до 10
	{
		mass1[i]=rand();
	}
	for(int i=0;i<elem_mass2;i++) //заполняем массив случайными числами от 0 до 10
	{
		mass2[i]=rand();
	}
	
	cout<<endl<<"Выводим первый массив"<<endl;
	for(int i=0;i<elem_mass1;i++) // Выводим заполненный первый массив чисел
	{
		cout <<i<<"- элемент:" <<mass1[i]<<endl;
	}
	cout<<endl<<"Выводим второй массив"<<endl;
	for(int i=0;i<elem_mass2;i++) // Выводим заполненный первый массив чисел
	{
		cout <<i<<"- элемент:" <<mass2[i]<<endl;
	}
	
	// функция подсчитывает сумму элементов в двух массивах и выводит какая из них больше 
	fuction_srav(mass1, elem_mass1, mass2, elem_mass2); 
	
	delete []mass1;
	delete []mass2;
	system("pause"); // Команда задержки экрана
}

void fuction_srav(int * mass1, int elem_mass1, int * mass2, int elem_mass2)
{
long int summa1=0,summa2=0;
	for(int i=0;i<elem_mass1;i++)
	{
	summa1+=mass1[i];
	}
	for(int i=0;i<elem_mass2;i++)
	{
	summa2+=mass2[i];
	}
	if (summa1>summa2) 
		cout<<"Сумма элементов в первом массиве > чем во втором."<<endl;
	else 
		cout<<"Сумма элементов в первом массиве < чем во втором."<<endl;

}