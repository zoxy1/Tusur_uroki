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
	virtual void vvod() =0;
protected:
char text_default[30];
int chislo_default;
};
class vivod_vvod_text: public in_out // описываем производный класс kvadrat от класса Figura
{
public:
	
void set_text(char * T)
	{
		strcpy(text,T);
	}
virtual void vivod() 
	{
		cout<<text_default<<endl;
	}; 
virtual void vvod() 
	{
		strcpy(text_default,text);
	}


private:
	char text[30];
};
class vivod_vvod_chislo: public in_out 
{
public:
	void set_chislo(int chis)
	{
		chis1=chis;
	}

	virtual void vivod()
	{
		cout<<chislo_default<<endl;
	}; 
virtual void vvod() 
	{
		chislo_default=chis1;
	}
private:
	int chis1;
};
void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */


	in_out *vivod_vvod_ptr1; 
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
	vivod_vvod_ptr2->vivod();
	
	system("pause"); // команда задержки  экрана
}
