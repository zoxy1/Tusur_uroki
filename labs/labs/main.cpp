// lab11_1
/* Разработать программу с использованием наследования классов, 
реализующую классы: графический объект; круг; квадрат.
*/

#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
using namespace std;

class graph_object // описываем графический объект
{
public: // После объявления public следуют данные и функции(методы), доступные внешним для класса функциям.
graph_object() // конструктор
{}
~graph_object() // деструктор
{}
public:
void set_color(int color1) // метод устанавливает цвет графического объекта
{
	color=color1;
}
int get_color() // метод с помощью которого можно получить цвет графического объекта
{
	return color;
}
private: 
int color; // цвет графического объекта, доступен только внутри класса graph_object
};

class krug: public graph_object // создаем класс krug наследник от базового класса graph_object
{
public:
	void show(int radius) // метод вывода названия графического объекта, его цвета и радиус
	{
		cout<<"Круг "<<graph_object::get_color()<<" цвета, радиус "<<radius<<" см"<<endl;
	}
};
class kvadrat: public graph_object // создаем класс kvadrat наследник от базового класса graph_object
{
public:
	void show(int storona) // метод вывода названия графического объекта, его цвета и размер стороны
	{
		cout<<"Круг "<<graph_object::get_color()<<" цвета, радиус "<<storona<<" см"<<endl;
	}
};


void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	krug * krug_ptr=new krug();
	kvadrat * kvadrat_ptr=new kvadrat();
	krug_ptr->set_color(1);
	krug_ptr->show(20);
	kvadrat_ptr->set_color(2);
	kvadrat_ptr->show(50);
	system("pause"); // команда задержки  экрана
}

