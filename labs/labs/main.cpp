// lab2_3
#include <iostream> // �������� ������� ����� ������ cin, cout
#include<windows.h> //�������� ������� SetConsoleCP(), SetConsoleOutputCP()
using namespace std;

int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	/* ��� ����������� ����������� ������� �������� � ������� ����� ������� 
	� ��������� ������� ����� Lucida Console */
bool a_bool; 
char a_char;
short int a_short_int;
unsigned short int a_unsigned_short_int;
int a_int;
unsigned int a_unsigned_int;
float a_float;
long float a_long_float;
double a_double;

cout<<"���������� ���� ������� �������� ��� ������:\nbool="<<sizeof(a_bool)<<endl;
cout<<"char="<<sizeof(a_char)<<endl;
cout<<"short int="<<sizeof(a_short_int)<<endl;
cout<<"unsigned short int="<<sizeof(a_unsigned_short_int)<<endl;
cout<<"int="<<sizeof(a_int)<<endl;
cout<<"unsigned int="<<sizeof(a_unsigned_int)<<endl;
cout<<"float="<<sizeof(a_float)<<endl;
cout<<"long float="<<sizeof(a_long_float)<<endl;
cout<<"double="<<sizeof(a_double)<<endl;
cout<<"(int)char="<<sizeof((int)a_char)<<endl;
cout<<"(float)char="<<sizeof((float)a_char)<<endl;
cout<<"(double)char="<<sizeof((double)a_char)<<endl;

system("pause"); // ������� �������� ������
	return 0;
}


