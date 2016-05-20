// lab11_2
/* Написать программу, в которой описана иерархия классов: 
функция от одной переменной (SIN(X), COS(X), TG(X)). 
Базовый класс должен иметь методы получения значения функции 
для данного значения переменной вводимой пользователем с экрана, 
а также создания экземпляра класса, представляющего собой производную текущего экземпляра.
*/
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include<math.h>
#define PI  3.14159265358979323846
using namespace std;

class X // описываем базовый класс
{
public: // После объявления public следуют данные и функции(методы), доступные внешним для класса функциям.
	X() // конструктор
	{}
	~X() // деструктор
	{}
	public:
	virtual float function_x(float x1) 
	{
		return 0;
	};  
};
class sin_X : public X
{
public:
	float function_x(float x1)
	{
		return sin(x1 * PI / 180); 
	}

};
class cos_X : public X
{
public:
	float function_x(float x1)
	{
		return cos(x1 * PI / 180); 
	}

};
class tan_X : public X
{
public:
	float function_x(float x1)
	{
	return tan(x1 * PI / 180); 
	}

};
class sin_X_rad : public sin_X
{
public:
	float function_x(float x1)
	{
		return sin(x1); 
	}

};
class cos_X_rad : public cos_X
{
public:
	float function_x(float x1)
	{
		return cos(x1); 
	}

};
class tan_X_rad : public tan_X
{
public:
	float function_x(float x1)
	{
		return tan(x1); 
	}

};
void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	
	sin_X * sin_X_ptr=new sin_X();
	cos_X * cos_X_ptr=new cos_X();
	tan_X * tan_X_ptr=new tan_X();
	sin_X_rad *sin_X_rad_ptr=new sin_X_rad();
	cos_X_rad *cos_X_rad_ptr=new cos_X_rad();
	tan_X_rad *tan_X_rad_ptr=new tan_X_rad();
	cout<<"Введите значение х:";
	float x_in;
	cin>>x_in;
	cout<<"sin("<<x_in<<"град.)="<<sin_X_ptr->function_x(x_in)<<endl;
	cout<<"sin("<<x_in<<"рад.)="<<sin_X_rad_ptr->function_x(x_in)<<endl;
	cout<<"cos("<<x_in<<"град.)="<<cos_X_ptr->function_x(x_in)<<endl;
	cout<<"sin("<<x_in<<"рад.)="<<cos_X_rad_ptr->function_x(x_in)<<endl;
	cout<<"tan("<<x_in<<"град.)="<<tan_X_ptr->function_x(x_in)<<endl;
	cout<<"sin("<<x_in<<"рад.)="<<cos_X_rad_ptr->function_x(x_in)<<endl;
	system("pause"); // команда задержки  экрана
}

