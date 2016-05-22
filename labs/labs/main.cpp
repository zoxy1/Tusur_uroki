// lab12_1
/* Создать абстрактный базовый класс Figure с виртуальными методами вычисления площади и периметра. 
Создать производные классы Rectangle, Circle и Trapezium с методами вычисления площади и периметра.
*/
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#define PI 3.1415926535 
using namespace std;
class Figure // описываем базовый абстрактный класс Figure
{
public:
	virtual double area()=0; // виртуальная функция вычисления площади
	virtual float perimeter()=0; // виртуальная функция вычисления периметра
};
class Rectangle_: public Figure //Описываем производный класс Rectangle_ от базового класса Figure 
{
public:
	Rectangle_(float x,float y) // конструктор принимает значения сторон прямоугольника
	{
		x1=x; // сохраняем значения сторон в приватные переменные класа x1,y1
		y1=y;
	}
virtual double area() // определяем функцию вычисления площади для прямоугольника
	{
	return x1*y1;
	}
virtual float perimeter() // определяем функцию вычисления периметра для прямоугольника
	{
		return 2*(x1+y1);
	}
private:
	float x1; // приватные переменные, хранят стороны прямоугольника
	float y1;

};
class Circle_: public Figure //Описываем производный класс Circle_ от базового класса Figure 
{
public:
	Circle_(float r)// конструктор принимает значение радиуса круга
	{
		r1=r; // сохраняем значения радиуса в приватную переменную класа r1
	}
virtual double area()// определяем функцию вычисления площади для круга
	{
		return PI*r1*r1;
	}
virtual float perimeter()// определяем функцию вычисления периметра для круга
	{
		return 2*PI*r1;
	}
private:
	float r1;// приватная переменная, хранит радиус окружности
};
class Trapezium_: public Figure//Описываем производный класс Trapezium_ от базового класса Figure 
{
public:
Trapezium_(float a,float b, float h,float L1_in,float L2_in)// конструктор принимает параметры трапеции верхняя, нижняя стороны, высота и два нижних угла 
	{
	a1=a;
	b1=b;
	h1=h;
	L1=L1_in;
	L2=L2_in;
	};
virtual double area()// определяем функцию вычисления площади для трапеции
	{
	return ((a1+b1)/2)*h1;
	}
virtual float perimeter()// определяем функцию вычисления периметра для трапеции
	{
		float temp;
		temp=a1+b1+h1*(1/sin(L1*PI/180)+1/sin(L2*PI/180));
		return temp;
	
	}
private:
	float a1; // приватные переменные, хранят параметры трапеции
	float b1;
	float h1;
	float L1;
	float L2;
};

void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */

	Figure *Figure1;//создаем указатели, имеющие тип класса Figure
	Figure *Figure2;
	Figure *Figure3;
	
	Figure1=new Rectangle_(10,20); // создаем объект типа Rectangle_ и присваеваем его адрес указатею Figure1
	cout<<"Площадь прямоугольника равна:"<<Figure1->area()<<endl;// выводим площадь прямоугольника
	cout<<"Периметр прямоугольника равен:"<<Figure1->perimeter()<<endl;// выводим периметр прямоугольника
	
	Figure2=new Circle_(5);// создаем объект типа Circle_ и присваеваем его адрес указатею Figure2
	cout<<"Площадь круга равна:"<<Figure2->area()<<endl;// выводим площадь круга
	cout<<"Периметр круга равен:"<<Figure2->perimeter()<<endl;// выводим периметр(длинну окружности) круга
		
	Figure3=new Trapezium_(10,20,10,90,90);// создаем объект типа Trapezium_ и присваеваем его адрес указатею Figure3
	cout<<"Площадь трапеции равна:"<<Figure3->area()<<endl;// выводим площадь трапеции
	cout<<"Периметр трапеции равен:"<<Figure3->perimeter()<<endl;// выводим периметр трапеции
	system("pause"); // команда задержки  экрана
}
