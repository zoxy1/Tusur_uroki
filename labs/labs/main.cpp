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
	
	srand( time( 0 ) ); //используется для того чтобы при новом запуске программы генерировались разные числа в функции rand()
	
	int elem_mass1=0,elem_mass2=0;
	int chislo;
	cout<<"Введите количество элементов 1-го массива от 1 до 10: ";
	cin >> elem_mass1; 
	int *mass1 = new int[elem_mass1]; // динамическое выделение памяти под массив типа int размером в elem_mass1 
	int *mass1_plus = new int[elem_mass1]; // динамическое выделение памяти под массив типа int размером в elem_mass1 
	int *mass1_minus = new int[elem_mass1]; // динамическое выделение памяти под массив типа int размером в elem_mass1 
	int *mass1_umnogit = new int[elem_mass1]; // динамическое выделение памяти под массив типа int размером в elem_mass1 
	
	cout<<"Введите количество элементов 2-го массива от 1 до 10: ";
	cin >> elem_mass2; 
	int *mass2 = new int[elem_mass2]; // динамическое выделение памяти под массив типа int размером в elem_mass2 
	int *mass2_plus = new int[elem_mass2]; // динамическое выделение памяти под массив типа int размером в elem_mass2 
	int *mass2_minus = new int[elem_mass2]; // динамическое выделение памяти под массив типа int размером в elem_mass2
	int *mass2_umnogit = new int[elem_mass2]; // динамическое выделение памяти под массив типа int размером в elem_mass2
	for(int i=0;i<elem_mass1;i++) //заполняем массивы случайными числами от 0 до 10
	{
		mass1[i]=rand()%10;
		mass2[i]=rand()%10;

	}
	cout<<"\nВыводим первый массив:\n";
	for(int i=0;i<elem_mass1;i++) // Выводим заполненный массив 1 чисел
	{
		cout <<i<<" : "<<mass1[i]<<endl;
	}
	cout<<"\nВыводим второй массив:\n";
	for(int i=0;i<elem_mass2;i++) // Выводим заполненный массив 2 чисел
	{
		cout <<i<<" : "<<mass2[i]<<endl;
	}
	cout<<"\nВведите число для сложения, вычитания, умножения:";
	cin>>chislo;
	
	for(int i=0;i<elem_mass1;i++) 
	{
		mass1_plus[i]=mass1[i]+chislo;
		mass1_minus[i]=mass1[i]-chislo;
		mass1_umnogit[i]=mass1[i]*chislo;
	}
	
	cout<<"\nПервый массив при сложении с числом:\n";
	for(int i=0;i<elem_mass1;i++) // Выводим заполненный массив 1 чисел
	{
		cout <<i<<" : "<<mass1_plus[i]<<endl;
	}
	cout<<"\nПервый массив при вычитании числа:\n";
	for(int i=0;i<elem_mass1;i++) // Выводим заполненный массив 1 чисел
	{
		cout <<i<<" : "<<mass1_minus[i]<<endl;
	}
	cout<<"\nПервый массив при умножении на число:\n";
	for(int i=0;i<elem_mass1;i++) // Выводим заполненный массив 1 чисел
	{
		cout <<i<<" : "<<mass1_umnogit[i]<<endl;
	}
	
	for(int i=0;i<elem_mass2;i++) 
	{
		mass2_plus[i]=mass2[i]+chislo;
		mass2_minus[i]=mass2[i]-chislo;
		mass2_umnogit[i]=mass2[i]*chislo;
	}
	cout<<"\nВторой массив при сложении с числом:\n";
	for(int i=0;i<elem_mass2;i++) // Выводим заполненный массив 1 чисел
	{
		cout <<i<<" : "<<mass2_plus[i]<<endl;
	}
	cout<<"\nВторой массив при вычитании числа:\n";
	for(int i=0;i<elem_mass2;i++) // Выводим заполненный массив 1 чисел
	{
		cout <<i<<" : "<<mass2_minus[i]<<endl;
	}
	cout<<"\nВторой массив при умножении на число:\n";
	for(int i=0;i<elem_mass2;i++) // Выводим заполненный массив 1 чисел
	{
		cout <<i<<" : "<<mass2_umnogit[i]<<endl;
	}
	delete []mass1; // высвобождаем памать выделенную под массив mass1
	delete []mass2; // высвобождаем памать выделенную под массив mass2
	system("pause"); // Команда задержки экрана
	return 0;
}

