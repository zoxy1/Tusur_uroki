// lab8_3
/* 3.	
Положим, что i=1, j=2, k=3, m=2. Что напечатает каждый из приведенных операторов? Необходимы ли скобки в каждом случае?
cout<<(i==1)<<endl;
cout<<(j==3)<<endl;
cout<<(i>=1 && j<4)<<endl;
cout<<(m<=99 && k<m)<<endl;
cout<<(j>=i || k==m)<<endl;
cout(k+m<j || 3-j>=k)<<endl;
cout<<(!m)<<endl;
cout<<(!(j-m))<<endl;
cout<<(!(r>m))<<endl;
*/

#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
using namespace std;

void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
int i=1, j=2, k=3, m=2, r=0; 

cout<<"i=1, j=2, k=3, m=2, r=1"<<endl;
cout<<"(i==1) = "<<(i==1)<<endl; 
cout<<"(j==3) = "<<(j==3)<<endl; 
cout<<"(i>=1 && j<4) = "<<(i>=1 && j<4)<<endl; 
cout<<"(m<=99 && k<m)= "<<(m<=99 && k<m)<<endl; 
cout<<"(j>=i || k==m) = "<<(j>=i || k==m)<<endl;
cout<<"(k+m<j || 3-j>=k) = "<<(k+m<j || 3-j>=k)<<endl;
cout<<"(!m) = "<<!m<<" можно без скобок !m"<<endl; // можно без скобок
cout<<"(!(j-m)) = "<<!(j-m)<<" можно без внешних скобок !(j-m)"<<endl; // можно без скобок
cout<<"(!(r>m)) = "<<!(r>m)<<" можно без внешних скобок !(r>m)"<<endl; // можно без скобок

cout<<endl; // переходим на новую строку	
system("pause"); // команда задержки экрана
}

