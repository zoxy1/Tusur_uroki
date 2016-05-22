// lab12_3
/* Создать абстрактный базовый класс Person, содержащий поля "пол", "возраст". 
Определить производный класс School, описывающий школьника 
(школа, класс, номер в журнале, средняя оценка). 
Выведите из класса School класс Student, описывающий студента 
(вуз, факультет, групппа, номер в журнале, средняя оценка).
*/
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()

using namespace std;
class Person // описываем базовый абстрактный класс
{
public:
Person(char *T, int year_in)
	{
	strcpy(pol,T);	
	year=year_in;
	}
virtual void vivod()=0;	
char pol[10];
int year;
};
class School: public Person //Описываем производный класс School от базового класса Person 
{
public:
School(int number_School_in,int class_School_in,int number_gurnal_in,float otcenka_in,char *T, int year_in) :Person(T,year_in)
{
	number_School=number_School_in;
	class_School=class_School_in;
	number_gurnal=number_gurnal_in;
	otcenka=otcenka_in;
}
virtual void vivod()
	{
	cout<<"Школьник учится в школе №"<<number_School<<" в "<<class_School;
	cout<<" классе, номер в журнале "<<number_gurnal<<", средняя оценка "<<otcenka<<","<<endl;
	cout<<"пол "<<pol<<", возраст "<<year<<" лет."<<endl;
	}
int number_School;
int class_School;
int number_gurnal;
float otcenka;
};
class Student: public School //Описываем производный класс Student от базового класса School 
{
public:
Student(char *vuz_in,char *department_in,char *group_in,int number_gurnal_in,float otcenka_in,char *Ts, int year_ins) :School(0,0,number_gurnal_in,otcenka_in,Ts, year_ins)
	{
		strcpy(vuz,vuz_in);	
		strcpy(department,department_in);	
		strcpy(group,group_in);	
	}
virtual void vivod()
	{
		cout<<"Студент учится в вузе "<<vuz<<" на "<<department<<" факультете, группа "<<group<<", номер в журнале "<<number_gurnal<<","<<endl;
		cout<<"средняя оценка "<<otcenka;	
		cout<<", пол "<<pol<<", возраст "<<year<<" лет."<<endl;
	}
char vuz[30];	
char department[30];
char group[30];
};


void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	Person *Person1;
	Person *Person2;
	Person1=new School(53,3,1,4.8,"мужской",10);
	Person2=new Student("ТУСУР","РТФ","127", 5,4.9,"мужской", 20);
	Person1->vivod();
	Person2->vivod();
	system("pause"); // команда задержки  экрана
}
