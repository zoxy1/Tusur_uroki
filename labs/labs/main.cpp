// lab2_1
#include <iostream> // �������� ������� ����� ������ cin, cout
#include<windows.h> //�������� ������� SetConsoleCP(), SetConsoleOutputCP()
using namespace std;
struct struct_student {
	int years;
	char Name[10];
	int rost;
	}; 

int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	/* ��� ����������� ����������� ������� �������� � ������� ����� ������� 
	� ��������� ������� ����� Lucida Console */
	struct_student student1;
	student1.Name={'A'};
	
	//cout << fixed <<_year_float  <<" ����(��������� ��� float)"<<endl;
	system("pause"); // ������� �������� ������
	return 0;
}

