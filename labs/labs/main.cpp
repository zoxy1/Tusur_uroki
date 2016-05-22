// lab12_2
/* Создать абстрактный базовый класс Figure с виртуальными методами вычисления площади и периметра. 
Создать производные классы Rectangle, Circle и Trapezium с методами вычисления площади и периметра.
*/
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include<math.h>

#define PI 3,1415926535
using namespace std;
class Figure // описываем базовый абстрактный класс
{
public:
	Figure()
	{};
	virtual float area()=0;
	virtual float perimeter() =0;

};
class Rectangle: public Figure // описываем производный класс kvadrat от класса Figura
{
public:
	Rectangle(int x,int y)
	{
		x1=x;
		y1=y;
	};
virtual float area()
	{
	return x1*y1;
	}
virtual float perimeter()
	{
		return 2*(x1+y1);
	}
private:
	int x1;
	int y1;

};
class Circle: public Figure 
{
public:
	Circle(int r)
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
class Trapezium: public Figure
{
public:
Trapezium(int a,int b, int h,int L1_in,int L2_in)
	{
	a1=a;
	b1=b;
	h1=h;
	L1=L1_in;
	L2=L2_in;
	};
virtual float area()
	{
	return ((a1+b1)/2)*h1;
	}
virtual float perimeter()
	{
		return a1+b1+h1*(1/sin((L1* PI / 180))+1/sin((L2* PI / 180)));
	}

private:
	int a1;
	int b1;
	int h1;
	int L1;
	int L2;
};


void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */


	/*in_out *vivod_vvod_ptr1; 
	in_out *vivod_vvod_ptr2; 
	vivod_vvod_text *vivod_vvod_text_ptr;
	vivod_vvod_chislo *vivod_vvod_chislo_ptr;
	
	vivod_vvod_ptr1=new vivod_vvod_text();
	vivod_vvod_text_ptr->set_text("Записанный текст");
	
	
	vivod_vvod_ptr2=new vivod_vvod_chislo();
	vivod_vvod_chislo_ptr->set_chislo(127);

	vivod_vvod_ptr1->vvod();
	vivod_vvod_ptr2->vvod();
	
	vivod_vvod_ptr1->vivod();
	vivod_vvod_ptr2->vivod();*/
	
	system("pause"); // команда задержки  экрана
}
