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
class Person // описываем базовый абстрактный класс Person
{
public:
Person(char *T, int year_in)// конструктор принимает пол и возраст персоны
	{
	strcpy(pol,T);	
	year=year_in;
	}
virtual void vivod()=0;	// виртуальная функция, определяется в производных классах 
char pol[10]; // данные класса Person
int year;
};
class School: public Person //Описываем производный класс School от базового класса Person 
{
public:
//конструктор принимает номер школы, класс, номер в журнале, среднию отценку, пол и возраст школьника
School(int number_School_in,int class_School_in,int number_gurnal_in,float otcenka_in,char *T, int year_in) :Person(T,year_in)//вызываем конструктор базового класса, чтобы записать пол и возраст 
	{
		number_School=number_School_in; // записываем принятые данные 
		class_School=class_School_in;
		number_gurnal=number_gurnal_in;
		otcenka=otcenka_in;
	}
virtual void vivod() // определяем функцию вывода для школьника
	{
	cout<<"Школьник учится в школе №"<<number_School<<" в "<<class_School;
	cout<<" классе, номер в журнале "<<number_gurnal<<", средняя оценка "<<otcenka<<","<<endl;
	cout<<"пол "<<pol<<", возраст "<<year<<" лет."<<endl;
	}
int number_School; // данные класса School
int class_School;
int number_gurnal;
float otcenka;
};
class Student: public School //Описываем производный класс Student от класса School 
{
public:
//конструктор принимает название вуза, факультет, группу, номер в журнале, среднию отценку, пол и возраст школьника
Student(char *vuz_in,char *department_in,char *group_in,int number_gurnal_in,float otcenka_in,char *Ts, int year_ins) :School(0,0,number_gurnal_in,otcenka_in,Ts, year_ins) 
//вызываем конструктор класса School, чтобы записать номер в журнале, среднюю оценку, пол и возраст 
	{
		strcpy(vuz,vuz_in);	// записываем принятые данные 
		strcpy(department,department_in);	
		strcpy(group,group_in);	
	}
virtual void vivod()// определяем функцию вывода для студента
	{
		cout<<"Студент учится в вузе "<<vuz<<" на "<<department<<" факультете, группа "<<group<<", номер в журнале "<<number_gurnal<<","<<endl;
		cout<<"средняя оценка "<<otcenka;	
		cout<<", пол "<<pol<<", возраст "<<year<<" лет."<<endl;
	}
char vuz[30];	// данные класса Student
char department[30];
char group[30];
};


void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	Person *Person1; //создаем указатели типа Person
	Person *Person2; 
	// создаем объект типа класса School и присваиваем его адрес указателю Person1
	Person1=new School(53,3,1,4.8,"мужской",10); 
	// создаем объект типа класса Student и присваиваем его адрес указателю Person2
	Person2=new Student("ТУСУР","РТФ","127", 5,4.9,"мужской", 20);
	Person1->vivod(); // выводим данные школьника
	Person2->vivod(); // выводим данные студента
	system("pause"); // команда задержки  экрана
}
