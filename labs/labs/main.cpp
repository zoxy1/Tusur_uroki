// lab2_1
#include <iostream> // �������� ������� ����� ������ cin, cout
#include<windows.h> //�������� ������� SetConsoleCP(), SetConsoleOutputCP()
using namespace std;

int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	/* ��� ����������� ����������� ������� �������� � ������� ����� ������� 
	� ��������� ������� ����� Lucida Console */
	
// float *ptrarray = new float [10]; // ������
	//*ptrvalue = 9; // ������������� ������� ����� ���������
 //int *ptrvalue = new int (9); ������������� ����� ���������� ����� ��� ���������� ������������� �������
	char Second_name[20];
	char First_name[20];
	char Patronymic_name[20]; 
	int elem_mass;
	double _year_double;
	float _year_float;
	cout<<"������� ���������� ��������� �������:";
	cin >> elem_mass;
	int *mass = new int[elem_mass]; // ������������ ��������� ������ ��� ������ ���� int
	for(int i=0;i<elem_mass;i++)
	{
		mass[i]=i;
	}

	//int mass[elem_mass];
	for(int i=0;i<elem_mass;i++)
	{
	cout <<i<<"- �������:" <<mass[i]<<endl;
	
	}

	
	system("pause"); // ������� �������� ������
	return 0;
}

