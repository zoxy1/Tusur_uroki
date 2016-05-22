// lab12_2
/* Создать абстрактный базовый класс Figure с виртуальными методами вычисления площади и периметра. 
Создать производные классы Rectangle, Circle и Trapezium с методами вычисления площади и периметра.
*/
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#define PI 3,1415926535
using namespace std;
class Figure // описываем базовый абстрактный класс
{
public:
	virtual float area()=0; // виртуальная функция вычисления площади
	virtual float perimeter()=0; // виртуальная функция вычисления периметра
};
class Rectangle_: public Figure //Описываем производный класс Rectangle_ от класса Figure 
{
public:
	Rectangle_(int x,int y) // конструктор принимает значения сторон прямоугольника
	{
		x1=x; // сохраняем значения сторон в приватные переменные класа x1,y1
		y1=y;
	}
virtual float area() // определяем функцию вычисления площади для прямоугольника
	{
	return x1*y1;
	}
virtual float perimeter() // определяем функцию вычисления периметра для прямоугольника
	{
		return 2*(x1+y1);
	}
private:
	int x1;
	int y1;

};
class Circle_: public Figure 
{
public:
	Circle_(int r)
	{
		r1=r;
	}
virtual float area()
	{
	return PI*r1*r1;
	}
virtual float perimeter()
	{
		return 2*PI*r1;
	}
private:
	int r1;
};
class Trapezium_: public Figure
{
public:
Trapezium_(int a,int b, int h,int C1_in,int C2_in)
	{
	a1=a;
	b1=b;
	h1=h;
	C1=C1_in;
	C2=C2_in;
	};
virtual float area()
	{
	return ((a1+b1)/2)*h1;
	}
virtual float perimeter()
	{
		return a1+b1+C1+C2;
	}
private:
	int a1;
	int b1;
	int h1;
	int C1;
	int C2;
};

void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */

	Figure *Figure1;
	Figure1=new Rectangle_(10,20);
	cout<<"Площадь прямоугольника равна:"<<Figure1->area()<<endl;
	cout<<"Периметр прямоугольника равен:"<<Figure1->perimeter()<<endl;
	
	Figure *Figure2;
	Figure2=new Circle_(10);
	cout<<"Площадь круга равна:"<<Figure2->area()<<endl;
	cout<<"Периметр круга равен:"<<Figure2->perimeter()<<endl;
	
	Figure *Figure3;
	Figure3=new Trapezium_(10,20,5,45,45);
	cout<<"Площадь трапеции равна:"<<Figure3->area()<<endl;
	cout<<"Периметр трапеции равен:"<<Figure3->perimeter()<<endl;
	system("pause"); // команда задержки  экрана
}
