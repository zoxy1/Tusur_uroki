// lab5_3
#include <iostream> // содержит функции ввода вывода cin, cout
#include<windows.h> //содержит функции SetConsoleCP(), SetConsoleOutputCP()
#include <ctime> // библиотека необходимая для использования функции time()
#include <cstdio>
using namespace std;



int main()
{
	//SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    //SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	/* Для правильного отображения русских символов в консоли нужно выбрать 
	в свойствах консоли шрифт Lucida Console */
	 
	int count1=0,str_count=0,chislo=1,posishin=0;
	setlocale(LC_ALL,".1251");                //Делаем допустимым вывод кириллицы в консоль.
     FILE *in = fopen("Text.txt","r"); //файл находится в папке main (папка main находится в папке с проектом)
      cout<<"Открываем файл \"Text.txt\" ";                                                  //  параметр "r", то есть reed - позволит нам только считать информацию.
     if(in==NULL)                                   //если in(файл) равен NULL,значит он не может открыться.Либо путь не тот.
     {
         cout<<"Ошибка в открытии файла Text.txt"<<endl;
     }
     else
     {
        char str[12];       //создаём строку(string) .
        fgets(str,12,in);   //записываем в str первую строку.
        str_count++;
		
		for(int i=0;i<10;i++)
		{
			if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
			{
				
				if((chislo==1)&&(posishin<(i+1)))
				{
				count1++;
				}
			chislo=1;
			posishin=i;
			}
			else
			{
			chislo=0;
			}
		
		}
		cout<<endl<<"Строка "<<str_count<<" : "<<str<<endl; 
		cout<<"Количество цифр в строке:"<<count1<<endl;  
		
		while(!feof(in))    //пока не конец файла in ,мы исполняем цикл.
         {
        
			fgets(str,12,in); 
			str_count++;
			cout<<endl<<"Строка"<<str_count<<" : "<<str; 
			count1=0;
			for(int i=0;i<10;i++)
			{
				if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
				{
				count1++;
				}
			}
			
			cout<<endl<<"Количество цифр в строке:"<<count1<<endl;  
		}
         
		 fcloseall();         //закрываем все открытые (в нашем случае один) файлы.
	system("pause"); // Команда задержки экрана
	return 0;
	}
}