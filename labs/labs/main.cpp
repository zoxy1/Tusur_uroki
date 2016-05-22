// lab11_2
/* Реализовать абстрактный базовый класс, определив в нем чистые виртуальные функции. 
Эти функции определяются в производных классах. В базовых классах должны быть объявлены 
чистые виртуальные функции ввода/вывода, которые реализуются в производных классах. 
Вызывающая программа должна продемонстрировать все варианты вызова виртуальных функций 
с помощью указателей на базовый класс. Написать функцию вывода, получающую параметры 
базового класса по ссылке и демонстрирующую виртуальный вызов.
*/
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include<string.h>
using namespace std;
class in_out // описываем базовый абстрактный класс
{
public:
	in_out()
	{
	};
	virtual void vivod()=0;
	//virtual void set()=0;
	//virtual void vvod() const=0;
//char text_default[20];
//int chislo_default;
};
class vivod_vvod_text: public in_out // описываем производный класс kvadrat от класса Figura
{
public:
 
	vivod_vvod_text(char *T)
 {strcpy(text,T);}
	
	virtual void vivod() 
 {
 cout<<text<<endl;
 }; 



private:
char text[20];
};
class vivod_vvod_chislo: public in_out // описываем производный класс kvadrat от класса Figura
{
public:
	vivod_vvod_chislo(int chis)
	{
	chis1=chis;
	}
	virtual void vivod()
 {
 cout<<chis1<<endl;
 }; 

private:
int chis1;
};
void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */


	in_out *vivod_vvod1; 
	in_out *vivod_vvod2; 
	//vivod_vvod_base=
	//vivod_vvod_text *vivod_vvod1;
	vivod_vvod1=new vivod_vvod_text("Выводится строка");
	
	//vivod_vvod_chislo *vivod_vvod2;
	vivod_vvod2=new vivod_vvod_chislo(127);
	
	//vivod_vvod1->set("Текст класса vivod_vvod_text");
	vivod_vvod1->vivod();

	//vivod_vvod2->set_chis(127);
	cout<<"Выводим число:";
	vivod_vvod2->vivod();
	
	
	
	
	
	//vivod1->in();
	//vivod1->out("asdasd");
	//figura1=new kvadrat (5); // создаем объект класса kvadrat и присваиваем указателю figura1 его адрес 
	//Figura *figura2; // инициализируем указатель figura1 типа Figura
	//figura2=new krug (5); // создаем объект класса krug и присваиваем указателю figura2 его адрес 
	//cout<<figura1->area()<<endl; //выводим возращаемое функцией area() значение площади квадрата
	//cout<<figura2->area()<<endl; //выводим возращаемое функцией area() значение площади круга
	system("pause"); // команда задержки  экрана
}
