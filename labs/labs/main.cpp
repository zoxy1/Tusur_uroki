// lab5_1
#include <iostream> // �������� ������� ����� ������ cin, cout
#include<windows.h> //�������� ������� SetConsoleCP(), SetConsoleOutputCP()
#include<math.h> // �������� ������� sin(x);
using namespace std;

void main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	/* ��� ����������� ����������� ������� �������� � ������� ����� ������� 
	� ��������� ������� ����� Lucida Console */
	double d_left=0, d_right=0,shag=0, sinx_f=0,sinx_d=0;
	cout<<"������� ����� ������ �������� ��������� ��������� ������:";
	cin>>d_left; //������ ����� ������� ��������� ��������� � 
	cin>>d_right; //������ ������ ������� ��������� ��������� � 
	cout<<"������� ��� ��������� ��������� � � sin(�):";
	cin>>shag; //������ ��� ��������� � 
	cout.precision(10); // ������������� �� ����� �������� ������ ���������� ������
	for(d_left;d_left<=d_right;d_left+=shag)
		{
			sinx_d=sin(d_left); //������� �������� ������ ��� ��������� ���� double
			sinx_f=sin((float)d_left); //������� �������� ������ ��� ��������� ���� float
			cout<<endl<<endl<<"��� �="<<d_left<<endl; // ������� �������� ���������
			cout<<"double:"<<sinx_d<<endl;	// ������� �������� ������ ��� ��������� ���� double
			cout<<"float: "<<sinx_f; // ������� �������� ������ ��� ��������� ���� float
			if((sinx_d!=0)||(sinx_f!=0)) 
			{
				// ���������� �������� ������ ��� ��������� ���� double � float
				if(sinx_d>sinx_f) 
				{
					cout<<endl<<"�������� sin((double)�)>sin((float) x)"<<endl;
				}
				else
				{
					cout<<endl<<"�������� sin((double)�)<sin((float) x)"<<endl;
				}
			}
			if(sin(d_left)==sin((float)d_left))
				{
					cout<<endl<<"�������� sin((double)�)==sin((float) x)"<<endl;
				}
		
	
		}
	system("pause"); //  ������� �������� ������
}

