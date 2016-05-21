﻿// lab11_2
/* Реализовать абстрактный базовый класс, определив в нем чистые виртуальные функции. 
Эти функции определяются в производных классах. В базовых классах должны быть объявлены 
чистые виртуальные функции ввода/вывода, которые реализуются в производных классах. 
Вызывающая программа должна продемонстрировать все варианты вызова виртуальных функций 
с помощью указателей на базовый класс. Написать функцию вывода, получающую параметры 
базового класса по ссылке и демонстрирующую виртуальный вызов.
*/
#include <iostream> // содержит функции ввода вывода cin, cout
using namespace std;
class in_out // описываем базовый абстрактный класс
{
public:
   virtual int in() const = 0; // чисто виртуальная функция
   virtual void out(char *T) const = 0; // чисто виртуальная функция

void set_text(char *txt)
	{
	text=txt;
	}
char * get_text()
{
	return text;
}

private:
char *text;
};
class vivod_text: public in_out // описываем производный класс kvadrat от класса Figura
{
public:
   vivod_text () {} //конструктор принимает значение стороны квадрата, и записывает его в x1 
  virtual void out(char *T) const
  {
  cout<<T<<endl;
  }
   virtual int in() const // определяем виртуальную функцию area() для расчета площади квадрата
	{ 
	int temp;
		cout<<"Введите текст"<<endl;
	cin>>temp;
	return temp;
  }
};

void main()
{



	in_out *vivod1; // инициализируем указатель figura1 типа Figura
	vivod1=new vivod_text();
	vivod1->in();
	vivod1->out("asdasd");
	//figura1=new kvadrat (5); // создаем объект класса kvadrat и присваиваем указателю figura1 его адрес 
	//Figura *figura2; // инициализируем указатель figura1 типа Figura
	//figura2=new krug (5); // создаем объект класса krug и присваиваем указателю figura2 его адрес 
	//cout<<figura1->area()<<endl; //выводим возращаемое функцией area() значение площади квадрата
	//cout<<figura2->area()<<endl; //выводим возращаемое функцией area() значение площади круга
	system("pause"); // команда задержки  экрана
}
