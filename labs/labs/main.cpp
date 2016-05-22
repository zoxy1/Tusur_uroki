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
char pol[10];
int year;
};
class School: public Person //Описываем производный класс School от базового класса Person 
{
public:
int number_School;
int class_School;
int number;
float otcenka;
};
class Student: public School //Описываем производный класс Student от базового класса Figure 
{
public:
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

	Figure *Figure1;//создаем указатели типа класса Figure
	Figure *Figure2;
	Figure *Figure3;
	
	Figure1=new Rectangle_(10,20); // создаем объект типа Rectangle_ и присваеваем его адрес указатею Figure1
	cout<<"Площадь прямоугольника равна:"<<Figure1->area()<<endl;// выводим площадь прямоугольника
	cout<<"Периметр прямоугольника равен:"<<Figure1->perimeter()<<endl;// выводим периметр прямоугольника
	
	Figure2=new Circle_(5);// создаем объект типа Circle_ и присваеваем его адрес указатею Figure2
	cout<<"Площадь круга равна:"<<Figure2->area()<<endl;// выводим площадь круга
	cout<<"Периметр круга равен:"<<Figure2->perimeter()<<endl;// выводим периметр(длинну окружности) круга
		
	Figure3=new Trapezium_(10,20,5,45,45);// создаем объект типа Trapezium_ и присваеваем его адрес указатею Figure3
	cout<<"Площадь трапеции равна:"<<Figure3->area()<<endl;// выводим площадь трапеции
	cout<<"Периметр трапеции равен:"<<Figure3->perimeter()<<endl;// выводим периметр трапеции
	system("pause"); // команда задержки  экрана
}
