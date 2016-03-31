// lab2_2
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
using namespace std;

int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
int a = 2 + (1 / 4); 
float a_float = 7 * 2 + 1 ^ 3; 
int a2 = 4 * 3 ^ 3 + 1; 

int j, b = 5, a3 =4 ; j = b---a3;

int j1, b1 = 5, a4 =4 ; j1 = (b1--)-a4;

int j2, b2 = 5, a5 =4 ; j2 = b2-(--a5);

int j3, b3=5, a6=4; j3 = --b3-a6--;

int j4, b4=5, a7=4; j4 = --(b4=a7);

cout<<"7 - 2 * ( 5 / 2 )="<<(7 - 2 * ( 5 / 2 ))<<endl;
cout<<"7 - (2 * 5) / 2 ="<<(7 - (2 * 5) / 2 )<<endl;
cout<<"7 - 2 * ( (float)5 / 2 ) ="<<(7 - 2 * ( (float)5 / 2 ) )<<endl;	
cout<<"int a = 2 + (1 / 4); a ="<<a<<endl;
cout<<"int a2 = 4 * 3 ^ 3 + 1; a2 ="<<a2<<endl;
cout<<"int j, b = 5, a3 =4 ; j = b---a3; j="<<j<<endl;
cout<<"int j1, b1 = 5, a4 =4 ; j1 = (b1--)-a4; j1="<<j1<<endl;
cout<<"int j2, b2 = 5, a5 =4 ; j2 = b2-(--a5); j2="<<j2<<endl;
cout<<"int j3, b3=5, a6=4; j3 = --b3-a6--; j3="<<j3<<endl;
cout<<"int j4, b4=5, a7=4; j4 = --(b4=a7); j4="<<j4<<endl;


system("pause"); // Команда задержки экрана
	return 0;
}

