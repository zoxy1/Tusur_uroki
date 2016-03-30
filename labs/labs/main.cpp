#include <iostream> // содержит функции ввода вывода cin, cout
//#include <conio.h> // содержит функцию _getch()
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
using namespace std;

int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */

	char Second_name[20];
	char First_name[20];
	char Patronymic_name[20]; 
	int _month, Temp,_date;
	double _year_double;
	float _year_float;
	cout<<"Введите фамилию имя отчество (через пробел): ";
	cin >> Second_name;
	cin >> First_name;
	cin >> Patronymic_name;
	system("cls");
	cout<<"Введите дату рождения: ";
	cin >> _date;
	system("cls");
	cout<<"Введите месяц рождения(от 1 до 12): ";
	cin >> _month;
	system("cls");
	cout<<"Введите год рождения: ";
	cin >> Temp;
	_year_float=Temp+40;
	_year_double=Temp+40;
	system("cls");
cout << "Студент:" << Second_name<<" "<<First_name<<" "<<Patronymic_name;
cout <<" родился "<<_date<<"."<<_month<<"."<<Temp<<"г"<<endl;
	cout << "\nему исполнится 40 лет в:" <<endl;
	cout << fixed <<_year_double <<" году(выводится тип double)"<< endl;
	cout << fixed <<_year_float  <<" году(выводится тип float)"<<endl;
	
	//_getch(); //Команда задержки экрана с помощью функции _getch()
	system("pause"); // Команда задержки экрана
	return 0;
}

