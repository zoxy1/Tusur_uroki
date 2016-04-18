// lab4_1
#include <iostream> // �������� ������� ����� ������ cin, cout
#include<windows.h> //�������� ������� SetConsoleCP(), SetConsoleOutputCP()
#include<ctime.h> 
using namespace std;

int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	/* ��� ����������� ����������� ������� �������� � ������� ����� ������� 
	� ��������� ������� ����� Lucida Console */
	srand( time( 0 ) ); //������������ ��� ���� ����� ��� ����� ������� ��������� �������������� ������ ����� � ������� rand()
	
	int elem_mass=0,interval_mass=0,summa=0,summa_max=0, index_interval_max=0;
	cout<<"������� ���������� ��������� ������� �� 1 �� 100:";
	cin >> elem_mass; 
	cout<<"������� �������� �� 0 �� "<<elem_mass<<":";
	cin >> interval_mass;
	int *mass = new int[elem_mass]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass 
	
	for(int i=0;i<elem_mass;i++) //��������� ������ ���������� ������� �� 0 �� 10
	{
		mass[i]=rand()%10;
	}
	for(int i=0;i<elem_mass;i++) // ������� ����������� ������ �����
	{
		cout <<i<<"- �������:" <<mass[i]<<endl;
	}
	
	for(int j=0;j<=(elem_mass-interval_mass);j++) // ������� ������������ ����� � �������� ���������
	{
		summa=0;
		for(int i=0;i<interval_mass;i++)
		{
			summa=summa+mass[i+j];
		}
		if(summa_max<summa) 
		{
			summa_max=summa;
			index_interval_max=j; // � ����� ������� ���������� �������� � ������������ ������
		}
	}
	
	cout <<"�������� � ������������ ������ ������: " <<summa_max<<endl; // ������� ������������ �����
	for(int i=index_interval_max;i<(index_interval_max+interval_mass);i++) // ������� �������� � ������������ ������
	{
		cout <<i<<"- �������:" <<mass[i]<<endl;
	}
	
	delete []mass;
	system("pause"); //  ������� �������� ������
	return 0;
}

