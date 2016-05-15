// lab9_3
/* В конкурсе учавствуют N человек (минимум 3 и не более 5). 
Информация об одном участнике: ФИО, год рождения, название ВУЗа, 
количество баллов, набранных в конкурсе. По текущей дате определить 
призеров конкурса в фиксированных возрастных группах (задать градацию),
занявших 1,2,3 − места. Участники с равным числом баллов делят соседние места.
*/

#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include <iomanip> //необходима для setw() задание ширины поля вывода данных 
using namespace std;
struct struct_person // описываем структуру struct_student включающую фамилию, количество экзаменов, оценки за экзамены
{
	char FIO[60]; //фамилия имя отчество
	int year;	  //год рождения
	char vuz[100];    //название вуза
	int bal; //количество баллов набранных в конкурсе
};

void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
int N;
int local_year=0;
// Инициализируем массив с ФИО 
char name[5][60]={
	"Петин Иван Дмитриевич",
	"Халеев Иван Сергеевич",
	"Худякова Антонина Павловна",
	"Шариков Борис Николаевич",	
	"Данилин Виктор Иванович"}; 
int years[5]={1980,1985,1990,1995,2000}; //  массив год рождения участников конкурса
char vuzs[5][100]={"ТУСУР","Политехнический университет","Педодагический университет","ТГУ", "ТГАСУ"};
int bals[10]={40, 60, 60, 70, 70}; // массив с набранными баллами
cout<<"Введите количество учавствующих в конкурсе человек:";
cin>>N;
struct_person *person = new struct_person[N]; // создаем массив структур типа struct_student
SYSTEMTIME lt;
GetLocalTime(&lt);
local_year=lt.wYear; // присваиваем текущий год переменной local_year
for(int i=0;i<N;i++) 
{
strcpy(person[i].FIO,name[i]); // копируем ФИО в структуру
person[i].year=local_year-years[i]; // вычисляем возраст участника и копируем в структуру
strcpy(person[i].vuz,vuzs[i]); // копируем ФИО в структуру
person[i].bal=bals[i]; //копируем баллы в структуру
}
int year_low=0, year_high;
int stud_count=0;
int stud[10];
cout<<"Введите возрастную группу, нижний возраст лет:";
cin>>year_low;
cout<<"Введите возрастную группу верхний возраст лет:";
cin>>year_high;
for(int i=0;i<N;i++) 
{
if((person[i].year>=year_low)&&(person[i].year<=year_high)) // если участник попадает в возрастную группу, выполняем следующее
	{
		stud[i]=1; //запоминаем участников, которые попали в возрастную группу
		stud_count++; // считаем количество участников попавших в возрастную группу
	}
}
struct_person *person_grup = new struct_person[stud_count]; // создаем массив структур типа struct_person 

int k=0;
for(int i=0;i<N;i++)
	{
		if(stud[i]==1) //если попал в возрастную группу копируем его данные в новую структуру person_grup
		{
			strcpy(person_grup[k].FIO,person[i].FIO);
			person_grup[k].year=person[i].year;
			strcpy(person_grup[k].vuz,person[i].vuz);
			person_grup[k].bal=person[i].bal;
			k++;
		}

	}
//для сортировки используем метод пузырька
char temp1[100]; 
for (int i = 0; i < stud_count; i++) // начинаем с конца до нулевого элемента, затем с конца до первого и т д
    {
        for (int j = stud_count - 1; j > i; j--) //начинаем с послднего элемента
		{
           	if (person_grup[j].bal > person_grup[j - 1].bal) // если последний элемент больше предыдущего, то меняем их местами
            {
				swap (person_grup[j].year, person_grup[j - 1].year);  // меняем местами возраст участников 
                //меняем местами ФИО студентов 
				strcpy(temp1,person_grup[j].FIO);				
				strcpy(person_grup[j].FIO,person_grup[j-1].FIO);
				strcpy(person_grup[j-1].FIO,temp1);
				//меняем название вузов
				strcpy(temp1,person_grup[j].vuz);				
				strcpy(person_grup[j].vuz,person_grup[j-1].vuz);
				strcpy(person_grup[j-1].vuz,temp1);
				swap (person_grup[j].bal, person_grup[j - 1].bal); //меняем балы местами 
			}
        }
    }
int mesto=1,mesto_sovmes=0;
for(int i=0;i<N;i++) 
{
	cout<<mesto<<"-ое место "<<endl; // выводим занимаемое место участника
	for(int j=i;j<N;j++) 
	{
		if(person_grup[i].bal==person_grup[j].bal) //проверяем есть ли участники с одинаковыми балами
		{
			// выводим балы участника и его данные
			cout<<setw(4)<<left<<person_grup[j].bal<<"бал. ";
			cout<<person_grup[j].FIO<<" ("<<setw(4)<<left<<person_grup[j].vuz<<")"<<endl;
			
			if(i!=j) //если есть еще участник с таким же количеством балов, то пропускаем его при выводе участников занявших следующее место
			{
				i++;	
			}
		}
		
	}
	
	mesto++; //переходим на следующее место
	if(mesto>3) // если место >3го выходим из цикла for
	{
		break;
	}
}
delete person; // удаляем память выделенную для структуры person
delete person_grup; // удаляем память выделенную для структуры person_group
system("pause"); // команда задержки  экрана
}

