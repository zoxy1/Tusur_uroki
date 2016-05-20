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
#define PI  3.141592653589793238462643383279 // число пи
using namespace std;

class X // описываем базовый класс
{
public: 
	X() // конструктор
	{}
	~X() // деструктор
	{}
	protected:
	virtual float function_x() // виртуальная 
	{
		return 0;
	};  
	public:
	void set_x(float x1)
	{
	x=x1;
	}
	float get_x()
	{
		return x;
	}

private:
	float x; 
};
class sin_X : public X
{
public:
	float function_x()
	{
		return sin((get_x() * PI)/180); 
	}

};
class cos_X : public X
{
public:
	float function_x()
	{
		float temp= get_x();
		if(temp==90||temp==270)
		{
			return 0;
		}
		else
		{ 
			return cos((get_x() * PI)/180);  
		}	
	}

};
class tan_X : public X
{
public:
	float function_x()
	{
		int temp=get_x();
		if(temp==90||temp==270)
		{
			cout<<"Деление на ноль"<<endl;
		}
		else 
		{
			return tan((get_x() * PI)/180); 
		}
	}
};
class sin_X_rad : public sin_X
{
public:
	float function_x()
	{
		return sin(get_x()); 
	}

};
class cos_X_rad : public cos_X
{
public:
	float function_x()
	{
		return cos(get_x()); 
	}

};
class tan_X_rad : public tan_X
{
public:
	float function_x()
	{
		return tan(get_x()); 
	}

};
void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	//X * X_ptr=new X();
	sin_X * sin_X_ptr=new sin_X();
	cos_X * cos_X_ptr=new cos_X();
	tan_X * tan_X_ptr=new tan_X();
	sin_X_rad *sin_X_rad_ptr=new sin_X_rad();
	cos_X_rad *cos_X_rad_ptr=new cos_X_rad();
	tan_X_rad *tan_X_rad_ptr=new tan_X_rad();
	cout<<"Введите значение х:";
	float x_in;
	cin>>x_in;
	
	sin_X_ptr->set_x(x_in);
	cout<<"sin("<<x_in<<"град.)="<<sin_X_ptr->function_x()<<endl;
	sin_X_rad_ptr->set_x(x_in);
	cout<<"sin("<<x_in<<"рад.)="<<sin_X_rad_ptr->function_x()<<endl;
	
	cos_X_ptr->set_x(x_in);
	cout<<"cos("<<x_in<<"град.)="<<cos_X_ptr->function_x()<<endl;
	cos_X_rad_ptr->set_x(x_in);
	cout<<"cos("<<x_in<<"рад.)="<<cos_X_rad_ptr->function_x()<<endl;
	
	tan_X_ptr->set_x(x_in);
	cout<<"tan("<<x_in<<"град.)="<<tan_X_ptr->function_x()<<endl;
	tan_X_rad_ptr->set_x(x_in);
	cout<<"tan("<<x_in<<"рад.)="<<tan_X_rad_ptr->function_x()<<endl;
	system("pause"); // команда задержки  экрана
}

