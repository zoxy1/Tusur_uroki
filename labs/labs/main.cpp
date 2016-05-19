// lab11_1
/* Разработать программу с использованием наследования классов, 
реализующую классы: графический объект; круг; квадрат.
*/

#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
//#include <iomanip> //необходима для setw() задание ширины поля вывода данных 

using namespace std;

class graph_object
{
public: // После объявления public следуют данные и функции(методы), доступные внешним для класса функциям.
graph_object() // конструктор
{

}
~graph_object() // деструктор
{
}

void set_color(int color1)
{
	color=color1;
}
void set_width_line(int width_line1)
{
	width_line=width_line1;
}

protected: // После объявления private следуют данные и функции(методы), не доступны внешним для класса функциям,
		 // но они доступны для методов находящихся внутри класса
int color; 
float width_line; 
};

class krug: public graph_object
{
void show(int radius)
{

}

 
};



void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */

//calculate *calculate_ptr=new calculate();  // создаем объект класса calculate
//HDC hDC=GetDC(NULL);
//    HBRUSH hBrush=(HBRUSH)GetStockObject(WHITE_BRUSH);
//    HPEN hPen=(HPEN)GetStockObject(WHITE_PEN);
//    HBRUSH hOldBrush=(HBRUSH)SelectObject(hDC,hBrush);
//    HPEN hOldPen=(HPEN)SelectObject(hDC,hPen);
//    Ellipse(hDC,10,10,100,100);
//    SelectObject(hDC,hOldBrush);
//    SelectObject(hDC,hOldPen);
//    ReleaseDC(NULL,hDC);
 Canvas->Brush->Color=RGB(random(255),random(255),random(255));
          Canvas->Rectangle(x,y,x+50,y+50);
//delete calculate_ptr; // удаляем объект 
system("pause"); // команда задержки  экрана
}

