// lab10_2
/* Написать программу, в которой присутствуют методы для определенного пользователем класса. 
Выполнить исследование вызова методов при выполнении арифметических операторов.
*/

#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include <iomanip> //необходима для setw() задание ширины поля вывода данных 

using namespace std;

class calculate
{
public: // После объявления public следуют данные и функции(методы), доступные внешним для класса функциям.
calculate() // конструктор
{
}
~calculate() // деструктор
{
}


double summ() //метод вычисляет сумму чисел a и b
{
	return a+b;
}
double minus() //метод вычисляет разность чисел a и b
{
	return a-b;
}
double umnogit() //метод вычисляет произведение чисел a и b
{
	return a*b;
}
double delity() //метод вычисляет деление числа a на b
{
	if(b==0)
	{
		cout<<"Ошибка деление на ноль"<<endl;
		return 0;
	}
	else
	{
		return a/b;
	}
}
void set_ab(float a1,float b1) //метод записывает в недоступные из вне класса переменные a и b
{
	a=a1;
	b=b1;
}

private: // После объявления private следуют данные и функции(методы), не доступны внешним для класса функциям,
		 // но они доступны для методов находящихся внутри класса
float a; 
float b; 
};

void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */

calculate *calculate_ptr=new calculate();  // создаем объект класса calculate

cout<<"Введите число а:";
float a;
cin>>a;
cout<<"Введите число b:";
float b;
cin>>b;
calculate_ptr->set_ab(a,b); // заполняем переменные класса a и b
cout<<"Введите арифметическое действие + или - или * или / :";
char znak;
cin>>znak;

switch(znak) //в зависимости от введенного символа выполняем арифметическое действие
{
	case '+':
	cout<<"a+b="<<calculate_ptr->summ()<<endl;
	break;
	case '-':
	cout<<"a-b="<<calculate_ptr->minus()<<endl;
	break;
	case '*':
	cout<<"a*b="<<calculate_ptr->umnogit()<<endl;
	break;
	case '/':
	cout<<"a/b="<<calculate_ptr->delity()<<endl;
	break;
	default: cout<<"Введен не правильный символ арифметического действия"<<endl;

}
delete calculate_ptr; // удаляем объект 
system("pause"); // команда задержки  экрана
}

