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
	void set_color(char *color1) // метод устанавливает цвет графического объекта
	{
		strcpy(color,color1); 
	}
	char * get_color() // метод с помощью которого можно получить цвет графического объекта
	{
		return color;
	}
	private: 
	char color[10]; // цвет графического объекта, доступен только внутри класса graph_object
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
	
	krug * krug_ptr=new krug(); //создаем объект класса krug
	kvadrat * kvadrat_ptr=new kvadrat(); //создаем объект класса kvadrat
	krug_ptr->set_color("зеленого"); // устанавливаем цвет грфического объекта, используем метод set_color() базового класса graph_object
	krug_ptr->show(20); // выводим названия графического объекта, его цвета и радиус с помощью метода show()
	kvadrat_ptr->set_color("желтого"); // устанавливаем цвет грфического объекта, используем метод set_color() базового класса graph_object
	kvadrat_ptr->show(50); // выводим названия графического объекта, его цвета и размер стороны с помощью метода show()
	system("pause"); // команда задержки  экрана
}

