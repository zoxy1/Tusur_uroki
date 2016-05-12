// lab9_1
/* Определите структуру для представления записи информации о сданных студентом экзаменах 
(фамилия студента, число экзаменов, массив полученных оценок). Определите необходимые функции 
для обработки отдельного объекта (например, метод, проверяющий, сданы ли все экзамены на 4 и 5). 
В результате обработки требуется вычислить характеристику качественной успеваемости студентов, 
то есть (отношение числа студентов, сдавших экзамены на 4 и 5, к общему числу студентов, 
в процентах [%]. Результат вычислений должен быть выведен в файл на диске, при этом вывод 
результатов данных должен осуществляться внешней функцией (или методом другого класса).
*/

#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include<string.h>
using namespace std;
struct struct_student
{
	string familia;
	int exz;
	int otcenki[4];
};
int uspevaemosty(struct_student *ptr)
{
	int number=0;
	for(int i=0;i<ptr->exz;i++)
	{
		if(ptr->otcenki[i] ==5||ptr->otcenki[i]==4)
		{
			number++;
		}
	}
	if(number==ptr->exz)
	{
		cout<<"Все экзамены сданы на 4 и 5."<<endl;
	return 1;
	}
	else
	{
		cout<<"Не все экзамены сданы на 4 и 5"<<endl;
	return 0;
	}
}

void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	int stud45=0, stud23=0;

struct_student student[5];
struct_student * ptr_student[5];
ptr_student[0]=&student[0];
ptr_student[1]=&student[1];
ptr_student[2]=&student[2];
ptr_student[3]=&student[3];
ptr_student[4]=&student[4];
student[0].familia="Иванов";
student[0].exz=4;
student[0].otcenki[0]=3;
student[0].otcenki[1]=4;
student[0].otcenki[2]=5;
student[0].otcenki[3]=5;
student[1].familia="Петров";
student[1].exz=4;
student[1].otcenki[0]=4;
student[1].otcenki[1]=5;
student[1].otcenki[2]=2;
student[1].otcenki[3]=5;
student[2].familia="Сидоров";
student[2].exz=4;
student[2].otcenki[0]=5;
student[2].otcenki[1]=4;
student[2].otcenki[2]=3;
student[2].otcenki[3]=4;
student[3].familia="Попов";
student[3].exz=4;
student[3].otcenki[0]=4;
student[3].otcenki[1]=5;
student[3].otcenki[2]=3;
student[3].otcenki[3]=5;
student[4].familia="Задорнов";
student[4].exz=4;
student[4].otcenki[0]=5;
student[4].otcenki[1]=5;
student[4].otcenki[2]=5;
student[4].otcenki[3]=5;

for(int i=0;i<5;i++)
	{
		if(uspevaemosty(ptr_student[i])==1)
		{
			stud45++;
		}
		else
		{
			stud23++;
		}
	}
cout<<(stud45*100/(stud45+stud23))<<"% студентов сдало на 4 и 5"<<endl;

system("pause"); // команда задержки экрана
}

