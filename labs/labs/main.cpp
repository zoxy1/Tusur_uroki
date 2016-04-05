// lab3_2
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
	srand( (unsigned int)time( 0 ) ); //������������ ��� ���� ����� ��� ����� ������� ��������� �������������� ������ ����� � ������� rand()
	
	int elem_mass=0, max_value=0;
	int min_value=32767; //������������ ����� ������� ������� ������� rand() 
	cout<<"������� ���������� ��������� �������:";
	cin >> elem_mass; 
	
	int *mass = new int[elem_mass]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass 
	
	for(int i=0;i<elem_mass;i++) //��������� ������ ���������� ������� �� 0 �� 10
	{
		mass[i]=rand();
	}
	for(int i=0;i<elem_mass;i++) // ������� ����������� ������ �����
	{
		cout <<i<<"- �������:" <<mass[i]<<endl;
	}
	for(int i=0;i<elem_mass;i++) // ��������� ����������� � ������������ �������� � �������
	{
		if(max_value<mass[i]) 
		{
			max_value=mass[i];
		}
		if(min_value>mass[i])
		{
			min_value=mass[i];
		}
	
	}

	cout <<"������������ �������� � ������� �����: " <<max_value<<endl;
	cout <<"����������� �������� � ������� �����: " <<min_value<<endl;
	
	
	
	//free(mass); //���� ������� ������ ���������� ��� ������������ ������ 
	delete []mass;
	system("pause"); // ������� �������� ������
	return 0;
}

