// lab5_4
#include <iostream> // �������� ������� ����� ������ cin, cout
#include<windows.h> //�������� ������� SetConsoleCP(), SetConsoleOutputCP()
#include <string>
using namespace std;

struct sotrudnik
{
string name;
int years;
float paycheck;
};
int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	/* ��� ����������� ����������� ������� �������� � ������� ����� ������� 
	� ��������� ������� ����� Lucida Console */
int years_in=2010,paycheck_in=90000;
sotrudnik sotr[10]; // ��������� 10 ��������
sotr[0].name="����� ���� ����������"; // ��������� ��������� �������
sotr[0].years=1940;
sotr[0].paycheck=15000;
sotr[1].name="������ ���� ��������";
sotr[1].years=1945;
sotr[1].paycheck=80000;
sotr[2].name="������� ������ ������������";
sotr[2].years=1950;
sotr[2].paycheck=30000;
sotr[3].name="�������� ����� �������";
sotr[3].years=1960;
sotr[3].paycheck=40000;
sotr[4].name="������� ������ �������";
sotr[4].years=1965;
sotr[4].paycheck=50000;
sotr[5].name="��������� ��������� ����������";
sotr[5].years=1970;
sotr[5].paycheck=25000;
sotr[6].name="����� ������ ���������";
sotr[6].years=1975;
sotr[6].paycheck=33000;
sotr[7].name="����� ������� ������������";
sotr[7].years=1980;
sotr[7].paycheck=43000;
sotr[8].name="������� ����� ��������������";
sotr[8].years=1985;
sotr[8].paycheck=70000;
sotr[9].name="������ �������� ����������";
sotr[9].years=2000;
sotr[9].paycheck=55000;
cout<<"������� ��� ��������:";
cin>>years_in;
cout<<endl<<"������ ����������� ���������� ������ "<<years_in<<"����:"<<endl;
for(int i=0;i<10;i++)
	{
	if(sotr[i].years<years_in) // ��������� � ������� ���� ��� ������� ������ ��������� ����
	{
		cout<<(sotr[i].name)<<endl; 
	}
	}
cout<<endl<<"������� ����� ������:";
cin>>paycheck_in;
cout<<endl<<"������ ����������� ���������� ������ "<<paycheck_in<<"������:"<<endl;
for(int i=0;i<10;i++)
	{
	if(sotr[i].paycheck>paycheck_in) // ��������� � ������� ���� ��� �������� ������ �������� ����� ������
	{
		cout<<(sotr[i].name)<<endl; 
	{
	}
	}

system("pause");

}