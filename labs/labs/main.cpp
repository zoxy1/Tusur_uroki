// lab3_3
#include <iostream> // �������� ������� ����� ������ cin, cout
#include<windows.h> //�������� ������� SetConsoleCP(), SetConsoleOutputCP()
#include <ctime> // ���������� ����������� ��� ������������� ������� time()
using namespace std;

int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	/* ��� ����������� ����������� ������� �������� � ������� ����� ������� 
	� ��������� ������� ����� Lucida Console */
	
	srand( time( 0 ) ); //������������ ��� ���� ����� ��� ����� ������� ��������� �������������� ������ ����� � ������� rand()
	
	int elem_mass1=0,elem_mass2=0;
	int chislo;
	cout<<"������� ���������� ��������� 1-�� ������� �� 1 �� 10: ";
	cin >> elem_mass1; 
	int *mass1 = new int[elem_mass1]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass1 
	int *mass1_plus = new int[elem_mass1]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass1 
	int *mass1_minus = new int[elem_mass1]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass1 
	int *mass1_umnogit = new int[elem_mass1]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass1 
	
	cout<<"������� ���������� ��������� 2-�� ������� �� 1 �� 10: ";
	cin >> elem_mass2; 
	int *mass2 = new int[elem_mass2]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass2 
	int *mass2_plus = new int[elem_mass2]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass2 
	int *mass2_minus = new int[elem_mass2]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass2
	int *mass2_umnogit = new int[elem_mass2]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass2
	for(int i=0;i<elem_mass1;i++) //��������� ������� ���������� ������� �� 0 �� 10
	{
		mass1[i]=rand()%10;
		mass2[i]=rand()%10;

	}
	cout<<"\n������� ������ ������:\n";
	for(int i=0;i<elem_mass1;i++) // ������� ����������� ������ 1 �����
	{
		cout <<i<<" : "<<mass1[i]<<endl;
	}
	cout<<"\n������� ������ ������:\n";
	for(int i=0;i<elem_mass2;i++) // ������� ����������� ������ 2 �����
	{
		cout <<i<<" : "<<mass2[i]<<endl;
	}
	cout<<"\n������� ����� ��� ��������, ���������, ���������:";
	cin>>chislo;
	
	for(int i=0;i<elem_mass1;i++) 
	{
		mass1_plus[i]=mass1[i]+chislo;
		mass1_minus[i]=mass1[i]-chislo;
		mass1_umnogit[i]=mass1[i]*chislo;
	}
	
	cout<<"\n������ ������ ��� �������� � ������:\n";
	for(int i=0;i<elem_mass1;i++) // ������� ����������� ������ 1 �����
	{
		cout <<i<<" : "<<mass1_plus[i]<<endl;
	}
	cout<<"\n������ ������ ��� ��������� �����:\n";
	for(int i=0;i<elem_mass1;i++) // ������� ����������� ������ 1 �����
	{
		cout <<i<<" : "<<mass1_minus[i]<<endl;
	}
	cout<<"\n������ ������ ��� ��������� �� �����:\n";
	for(int i=0;i<elem_mass1;i++) // ������� ����������� ������ 1 �����
	{
		cout <<i<<" : "<<mass1_umnogit[i]<<endl;
	}
	
	for(int i=0;i<elem_mass2;i++) 
	{
		mass2_plus[i]=mass2[i]+chislo;
		mass2_minus[i]=mass2[i]-chislo;
		mass2_umnogit[i]=mass2[i]*chislo;
	}
	cout<<"\n������ ������ ��� �������� � ������:\n";
	for(int i=0;i<elem_mass2;i++) // ������� ����������� ������ 1 �����
	{
		cout <<i<<" : "<<mass2_plus[i]<<endl;
	}
	cout<<"\n������ ������ ��� ��������� �����:\n";
	for(int i=0;i<elem_mass2;i++) // ������� ����������� ������ 1 �����
	{
		cout <<i<<" : "<<mass2_minus[i]<<endl;
	}
	cout<<"\n������ ������ ��� ��������� �� �����:\n";
	for(int i=0;i<elem_mass2;i++) // ������� ����������� ������ 1 �����
	{
		cout <<i<<" : "<<mass2_umnogit[i]<<endl;
	}
	delete []mass1; // ������������ ������ ���������� ��� ������ mass1
	delete []mass2; // ������������ ������ ���������� ��� ������ mass2
	system("pause"); // ������� �������� ������
	return 0;
}

