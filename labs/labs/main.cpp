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
#include <stdlib.h> 
#include <math.h> 
using namespace std;
struct struct_student
{
	
	//char buff[] = "Hello \" world";
	char familia[10];
	int exz;
	int otcenki[4];
};
int uspevaemosty(struct_student *ptr) //функция проверяет какие студенты сдали экзамены на 4 и 5, а какие нет 
{
	int number=0; 
	int static in1=0,in2=0; // переменные имеют статический тип памяти, т к должны сохранять значения при выходе из функции
	for(int i=0;i<ptr->exz;i++) // цикл пробегает по всем оценкам студента
	{
		if(ptr->otcenki[i] ==5||ptr->otcenki[i]==4) // проверка сданы ли экзамены на 4 и 5
		{
			number++; //переменная считает количество экзаменов сданных на 4 и 5 
		}
	}
	if(number==ptr->exz) //если все экзамены сданы на 4 и 5 выводим фамилию студента
	{
		if(in1==0) // один раз выводим заголовок "Следующие студенты сдали экзамены на 4 и 5:"
		{
			cout<<endl<<"Следующие студенты сдали экзамены на 4 и 5:"<<endl;
			in1++; // прибавляем 1 чтобы следующий раз не выводить сообщение
		}			
		cout<<ptr->familia<<endl; // выводим фамилию студента
	return 1; // возращаем значение функции равное 1
	}
	else
	{
		if(in2==0) // один раз выводим заголовок "Следующие студенты не сдали экзамены на 4 и 5:"
		{
			cout<<endl<<"Следующие студенты не сдали экзамены на 4 и 5:"<<endl;
			in2++; // прибавляем 1 чтобы следующий раз не выводить сообщение
		}		
	cout<<ptr->familia<<endl; // выводим фамилию студента
	return 0; // возращаем значение функции равное 1
	}
}

void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
int stud45=0, stud23=0;
char name0[]="Иванов";
char name1[]="Петров";
char name2[]="Сидоров";
char name3[]="Попов";
char name4[]="Задорнов";
struct_student student[5];
struct_student * ptr_student[5];
ptr_student[0]=&student[0];
ptr_student[1]=&student[1];
ptr_student[2]=&student[2];
ptr_student[3]=&student[3];
ptr_student[4]=&student[4];
strcpy(student[0].familia,name0);
student[0].exz=4;
student[0].otcenki[0]=5;
student[0].otcenki[1]=4;
student[0].otcenki[2]=5;
student[0].otcenki[3]=5;
strcpy(student[1].familia,name1);
student[1].exz=4;
student[1].otcenki[0]=4;
student[1].otcenki[1]=5;
student[1].otcenki[2]=4;
student[1].otcenki[3]=5;
strcpy(student[2].familia,name2);
student[2].exz=4;
student[2].otcenki[0]=5;
student[2].otcenki[1]=4;
student[2].otcenki[2]=3;
student[2].otcenki[3]=4;
strcpy(student[3].familia,name3);
student[3].exz=4;
student[3].otcenki[0]=4;
student[3].otcenki[1]=5;
student[3].otcenki[2]=5;
student[3].otcenki[3]=5;
strcpy(student[4].familia,name4);
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

