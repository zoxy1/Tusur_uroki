// lab5_3
#include <iostream> // �������� ������� ����� ������ cin, cout
#include<windows.h> //�������� ������� SetConsoleCP(), SetConsoleOutputCP()
#include <ctime> // ���������� ����������� ��� ������������� ������� time()
#include <cstdio>
using namespace std;



int main()
{
	//SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    //SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	/* ��� ����������� ����������� ������� �������� � ������� ����� ������� 
	� ��������� ������� ����� Lucida Console */
	 
	int count1=0,str_count=0,chislo=1,posishin=0;
	setlocale(LC_ALL,".1251");                //������ ���������� ����� ��������� � �������.
     FILE *in = fopen("Text.txt","r"); //���� ��������� � ����� main (����� main ��������� � ����� � ��������)
      cout<<"��������� ���� \"Text.txt\" ";                                                  //  �������� "r", �� ���� reed - �������� ��� ������ ������� ����������.
     if(in==NULL)                                   //���� in(����) ����� NULL,������ �� �� ����� ���������.���� ���� �� ���.
     {
         cout<<"������ � �������� ����� Text.txt"<<endl;
     }
     else
     {
        char str[12];       //������ ������(string) .
        fgets(str,12,in);   //���������� � str ������ ������.
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
		cout<<endl<<"������ "<<str_count<<" : "<<str<<endl; 
		cout<<"���������� ���� � ������:"<<count1<<endl;  
		
		while(!feof(in))    //���� �� ����� ����� in ,�� ��������� ����.
         {
        
			fgets(str,12,in); 
			str_count++;
			cout<<endl<<"������"<<str_count<<" : "<<str; 
			count1=0;
			for(int i=0;i<10;i++)
			{
				if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
				{
				count1++;
				}
			}
			
			cout<<endl<<"���������� ���� � ������:"<<count1<<endl;  
		}
         
		 fcloseall();         //��������� ��� �������� (� ����� ������ ����) �����.
	system("pause"); // ������� �������� ������
	return 0;
	}
}