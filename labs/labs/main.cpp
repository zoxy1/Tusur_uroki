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
	//srand( (unsigned int)time( 0 ) ); //������������ ��� ���� ����� ��� ����� ������� ��������� �������������� ������ ����� � ������� rand()
	srand( time( 0 ) ); //������������ ��� ���� ����� ��� ����� ������� ��������� �������������� ������ ����� � ������� rand()
	
	int elem_mass1=0,elem_mass2=0;
	cout<<"������� ���������� ��������� 1-�� ������� �� 1 �� 10:";
	cin >> elem_mass1; 
	int *mass1 = new int[elem_mass1]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass1 
	cout<<"������� ���������� ��������� 2-�� ������� �� 1 �� 10:";
	cin >> elem_mass2; 
	int *mass2 = new int[elem_mass2]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass2 
	
	for(int i=0;i<elem_mass;i++) //��������� ������ ���������� ������� �� 0 �� 10
	{
		mass[i]=rand()%10;
	}
	for(int i=0;i<elem_mass;i++) // ������� ����������� ������ �����
	{
		cout <<i<<"- �������:" <<mass[i]<<endl;
	}
	
	//free(mass); //���� ������� ������ ���������� ��� ������������ ������ 
	delete []mass1;
	delete []mass2;
	system("pause"); // ������� �������� ������
	return 0;
}

