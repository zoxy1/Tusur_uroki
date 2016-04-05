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
	int elem_mass=0;
	int chislo=0;
	int matrix[3][3];
	int matrix_plus[3][3];
	int matrix_minus[3][3];
	int matrix_umnogit[3][3];

	cout<<"Введите количество элементов массива от 1 до 10:";
	cin >> elem_mass; 
	
	int *mass = new int[elem_mass]; // динамическое выделение памяти под массив типа int размером в elem_mass 
	int *mass_plus = new int[elem_mass]; // динамическое выделение памяти под массив типа int размером в elem_mass 
	int *mass_minus = new int[elem_mass]; // динамическое выделение памяти под массив типа int размером в elem_mass 
	int *mass_umnogit = new int[elem_mass]; // динамическое выделение памяти под массив типа int размером в elem_mass 
	
	for(int i=0;i<elem_mass;i++) 
	{
		cout<<"\nВведите "<<i<<" - елемент массива:";
		cin>>mass[i];
	}
	for(int i=0;i<elem_mass;i++) // Выводим заполненный массив чисел
	{
		cout <<i<<"- элемент:" <<mass[i]<<endl;
	}
	cout<<"\nВведите число для сложения, вычитания, умножения массива:";
	cin>>chislo;

	for(int i=0;i<elem_mass;i++) //заполняем массив случайными числами от 0 до 10
	{
		mass_plus[i]=mass[i]+chislo;
		mass_minus[i]=mass[i]-chislo;
		mass_umnogit[i]=mass[i]*chislo;
	}
	cout<<"\nВыводим массив при сложении с числом "<<chislo<<endl;
	for(int i=0;i<elem_mass;i++) // Выводим заполненный массив чисел
	{
		cout <<i<<"- элемент:" <<mass_plus[i]<<endl;
	}
	cout<<"\nВыводим массив при вычитании числа "<<chislo<<endl;
	for(int i=0;i<elem_mass;i++) // Выводим заполненный массив чисел
	{
		cout <<i<<"- элемент:" <<mass_minus[i]<<endl;
	}
	cout<<"\nВыводим массив при умножении на число "<<chislo<<endl;
	for(int i=0;i<elem_mass;i++) // Выводим заполненный массив чисел
	{
		cout <<i<<"- элемент:" <<mass_umnogit[i]<<endl;
	}
	
	system("pause"); // Команда задержки экрана
	system("Cls"); // очищаем экран
	cout<<"\nВведите первую строку матрицы размером 3х3 (цифры через пробел):";
	cin>>matrix[0][0];
	cin>>matrix[1][0];
	cin>>matrix[2][0];
	cout<<"\nВведите вторую строку матрицы размером 3х3 (цифры через пробел):";
	cin>>matrix[0][1];
	cin>>matrix[1][1];
	cin>>matrix[2][1];
	cout<<"\nВведите третью строку матрицы размером 3х3 (цифры через пробел):";
	cin>>matrix[0][2];
	cin>>matrix[1][2];
	cin>>matrix[2][2];

	cout<<"\nВведенная матрица:\n";
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
		{
			cout<<matrix[i][j]<<" ";
		}
	cout<<endl;
	}
	cout<<"\nВведите число для сложения, вычитания, умножения матрицы:";
	cin>>chislo;
	
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
		{
			matrix_plus[i][j]=matrix[i][j]+chislo;
			matrix_minus[i][j]=matrix[i][j]-chislo;
			matrix_umnogit[i][j]=matrix[i][j]*chislo;
		}
	}
	cout<<"\nВыводим матрицу при сложении числа "<<chislo<<endl;
		
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
		{
			cout<<matrix_plus[i][j]<<" ";
		}
	cout<<endl;
	}
	cout<<"\nВыводим матрицу при вычитании числа "<<chislo<<endl;
		
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
		{
			cout<<matrix_minus[i][j]<<" ";
		}
	cout<<endl;
	}
	cout<<"\nВыводим матрицу при умножении числа "<<chislo<<endl;
		
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
		{
			cout<<matrix_umnogit[i][j]<<" ";
		}
	cout<<endl;
	}		
	
	delete []mass;
	delete []mass_minus;
	delete []mass_plus;
	delete []mass_umnogit;
	system("pause"); // Команда задержки экрана
	return 0;
}

