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
	struct_student *p_student;
	p_student = new struct_student;
	p_student->rost=154;
	p_student->years=20;
	struct_student student1;
	student1.rost=182;
	student1.years=30;
	cout << p_student->rost <<endl;
	cout << p_student->years <<endl;
	cout << student1.rost <<endl;
	cout << student1.years <<endl;
	system("pause"); // ������� �������� ������
	return 0;
}

