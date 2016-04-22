// lab5_2
#include <iostream> // �������� ������� ����� ������ cin, cout
#include<windows.h> //�������� ������� SetConsoleCP(), SetConsoleOutputCP()
#include <ctime> // ���������� ����������� ��� ������������� ������� time()
using namespace std;

void fuction_srav(int * mass1, int elem_mass1, int * mass2, int elem_mass2); //�������� �������

void main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	/* ��� ����������� ����������� ������� �������� � ������� ����� ������� 
	� ��������� ������� ����� Lucida Console */
	srand( time( 0 ) ); //������������ ��� ���� ����� ��� ����� ������� ��������� �������������� ������ ����� � ������� rand()
	
	int elem_mass1=0,elem_mass2=0;
	
	cout<<"������� ���������� ��������� ������� �������:";
	cin >> elem_mass1; 
	cout<<"������� ���������� ��������� ������� �������:";
	cin >> elem_mass2; 
	
	int *mass1 = new int[elem_mass1]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass1 
	int *mass2 = new int[elem_mass2]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass1 

	for(int i=0;i<elem_mass1;i++) //��������� ������ ���������� ������� �� 0 �� 10
	{
		mass1[i]=rand();
	}
	for(int i=0;i<elem_mass2;i++) //��������� ������ ���������� ������� �� 0 �� 10
	{
		mass2[i]=rand();
	}
	
	cout<<endl<<"������� ������ ������"<<endl;
	for(int i=0;i<elem_mass1;i++) // ������� ����������� ������ ������ �����
	{
		cout <<i<<"- �������:" <<mass1[i]<<endl;
	}
	cout<<endl<<"������� ������ ������"<<endl;
	for(int i=0;i<elem_mass2;i++) // ������� ����������� ������ ������ �����
	{
		cout <<i<<"- �������:" <<mass2[i]<<endl;
	}
	
	// ������� ������������ ����� ��������� � ���� �������� � ������� ����� �� ��� ������ 
	fuction_srav(mass1, elem_mass1, mass2, elem_mass2); 
	
	delete []mass1;
	delete []mass2;
	system("pause"); // ������� �������� ������
}

void fuction_srav(int * mass1, int elem_mass1, int * mass2, int elem_mass2)
{
long int summa1=0,summa2=0;
	for(int i=0;i<elem_mass1;i++)
	{
	summa1+=mass1[i];
	}
	for(int i=0;i<elem_mass2;i++)
	{
	summa2+=mass2[i];
	}
	if (summa1>summa2) 
		cout<<"����� ��������� � ������ ������� > ��� �� ������."<<endl;
	else 
		cout<<"����� ��������� � ������ ������� < ��� �� ������."<<endl;

}