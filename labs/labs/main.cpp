// lab5_4
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include <string>
using namespace std;

struct sotrudnik
{
string name;
int years;
float paycheck;
};
int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
int years_in=2010,paycheck_in=90000;
sotrudnik sotr[10]; // объявляем 10 структур
sotr[0].name="Попов Иван Николаевич"; // заполняем структуры данными
sotr[0].years=1940;
sotr[0].paycheck=15000;
sotr[1].name="Иванов Петр Иванович";
sotr[1].years=1945;
sotr[1].paycheck=80000;
sotr[2].name="Андреев Степан Владимирович";
sotr[2].years=1950;
sotr[2].paycheck=30000;
sotr[3].name="Антохина Ольга Юрьевна";
sotr[3].years=1960;
sotr[3].paycheck=40000;
sotr[4].name="Аршинов Михаил Юрьевич";
sotr[4].years=1965;
sotr[4].paycheck=50000;
sotr[5].name="Иванькова Валентина Михайловна";
sotr[5].years=1970;
sotr[5].paycheck=25000;
sotr[6].name="Белан Сергей Борисович";
sotr[6].years=1975;
sotr[6].paycheck=33000;
sotr[7].name="Горев Евгений Владимирович";
sotr[7].years=1980;
sotr[7].paycheck=43000;
sotr[8].name="Давыдов Денис Константинович";
sotr[8].years=1985;
sotr[8].paycheck=70000;
sotr[9].name="Иванов Анатолий Дмитриевич";
sotr[9].years=2000;
sotr[9].paycheck=55000;
cout<<"Введите год рождения:";
cin>>years_in;
cout<<endl<<"Список сотрудников родившихся раньше "<<years_in<<"года:"<<endl;
for(int i=0;i<10;i++)
	{
	if(sotr[i].years<years_in) // проверяем и выводим всех кто родился раньше заданного года
	{
		cout<<(sotr[i].name)<<endl; 
	}
	}
cout<<endl<<"Введите сумму оклада:";
cin>>paycheck_in;
cout<<endl<<"Список сотрудников получающих больше "<<paycheck_in<<"рублей:"<<endl;
for(int i=0;i<10;i++)
	{
	if(sotr[i].paycheck>paycheck_in) // проверяем и выводим всех кто получает больше заданной суммы оклада
	{
		cout<<(sotr[i].name)<<endl; 
	{
	}
	}

system("pause");

}