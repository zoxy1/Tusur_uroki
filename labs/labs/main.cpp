#include <iostream> // �������� ������� ����� ������ cin, cout
//#include <conio.h> // �������� ������� _getch()
#include<windows.h> //�������� ������� SetConsoleCP(), SetConsoleOutputCP()
using namespace std;

int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	/* ��� ����������� ����������� ������� �������� � ������� ����� ������� 
	� ��������� ������� ����� Lucida Console */

	char Second_name[20];
	char First_name[20];
	char Patronymic_name[20]; 
	int _month, Temp,_date;
	double _year_double;
	float _year_float;
	cout<<"������� ������� ��� �������� (����� ������): ";
	cin >> Second_name;
	cin >> First_name;
	cin >> Patronymic_name;
	system("cls");
	cout<<"������� ���� ��������: ";
	cin >> _date;
	system("cls");
	cout<<"������� ����� ��������(�� 1 �� 12): ";
	cin >> _month;
	system("cls");
	cout<<"������� ��� ��������: ";
	cin >> Temp;
	_year_float=Temp+40;
	_year_double=Temp+40;
	system("cls");
cout << "�������:" << Second_name<<" "<<First_name<<" "<<Patronymic_name;
cout <<" ������� "<<_date<<"."<<_month<<"."<<Temp<<"�"<<endl;
	cout << "\n��� ���������� 40 ��� �:" <<endl;
	cout << fixed <<_year_double <<" ����(��������� ��� double)"<< endl;
	cout << fixed <<_year_float  <<" ����(��������� ��� float)"<<endl;
	
	//_getch(); //������� �������� ������ � ������� ������� _getch()
	system("pause"); // ������� �������� ������
	return 0;
}

