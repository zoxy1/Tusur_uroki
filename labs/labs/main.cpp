// lab3_3
#include <iostream> // �������� ������� ����� ������ cin, cout
#include<windows.h> //�������� ������� SetConsoleCP(), SetConsoleOutputCP()
#include <ctime> // ���������� ����������� ��� ������������� ������� time()
using namespace std;


void Vivod(int elementCount, int *Array) //������� ������ �� ������� ������� � �������� ����������� ���������
{
for(int k=0;k<elementCount;k++) // ������� ����������� ������ 
	{
		cout <<k<<" : "<<Array[k]<<" �����:"<<(Array+k)<<endl;
	
	}	
}

int *Func(int elementCount, int max_value, int *Array)
{
int *p_min_element;
	for(int k=0;k<elementCount; k++) // ������� ������� � ����������� ��������� � �������
	{
		if((*(Array+k))<max_value)
		{
		max_value=*(Array+k);	
		p_min_element=Array+k;
		}	
	}	
	return p_min_element; // ��������� ��������� �� ������� ������� ����������� ��������
}


int a[10]; //�������������� ������ ���� itn
int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	/* ��� ����������� ����������� ������� �������� � ������� ����� ������� 
	� ��������� ������� ����� Lucida Console */
	srand( time( 0 ) ); //������������ ��� ���� ����� ��� ����� ������� ��������� �������������� ������ ����� � ������� rand()
	int *p; // �������������� ���������
	p=a; // ��������� p ����������� ����� ������� �������� ������� 
	for(int j=0;j<10;j++){
		*(p+j)=rand(); //��������� ������ � ������� ��������� ���������� �������  
	}
	cout <<"������� ������:"<<endl;
	Vivod(10,p); 
	cout<<"������� ��������� �� ������� ������� ����������� ��������:"<<*(Func(10,32767,p))<<"\n�����:"<<Func(10,32767,p)<<endl;
	system("pause"); //  ������� �������� ������
	return 0;
}

