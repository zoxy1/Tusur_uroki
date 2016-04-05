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
	int elem_mass=0;
	int chislo=0;
	int matrix[3][3];
	int matrix_plus[3][3];
	int matrix_minus[3][3];
	int matrix_umnogit[3][3];

	cout<<"������� ���������� ��������� ������� �� 1 �� 10:";
	cin >> elem_mass; 
	
	int *mass = new int[elem_mass]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass 
	int *mass_plus = new int[elem_mass]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass 
	int *mass_minus = new int[elem_mass]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass 
	int *mass_umnogit = new int[elem_mass]; // ������������ ��������� ������ ��� ������ ���� int �������� � elem_mass 
	
	for(int i=0;i<elem_mass;i++) 
	{
		cout<<"\n������� "<<i<<" - ������� �������:";
		cin>>mass[i];
	}
	for(int i=0;i<elem_mass;i++) // ������� ����������� ������ �����
	{
		cout <<i<<"- �������:" <<mass[i]<<endl;
	}
	cout<<"\n������� ����� ��� ��������, ���������, ��������� �������:";
	cin>>chislo;

	for(int i=0;i<elem_mass;i++) //��������� ������ ���������� ������� �� 0 �� 10
	{
		mass_plus[i]=mass[i]+chislo;
		mass_minus[i]=mass[i]-chislo;
		mass_umnogit[i]=mass[i]*chislo;
	}
	cout<<"\n������� ������ ��� �������� � ������ "<<chislo<<endl;
	for(int i=0;i<elem_mass;i++) // ������� ����������� ������ �����
	{
		cout <<i<<"- �������:" <<mass_plus[i]<<endl;
	}
	cout<<"\n������� ������ ��� ��������� ����� "<<chislo<<endl;
	for(int i=0;i<elem_mass;i++) // ������� ����������� ������ �����
	{
		cout <<i<<"- �������:" <<mass_minus[i]<<endl;
	}
	cout<<"\n������� ������ ��� ��������� �� ����� "<<chislo<<endl;
	for(int i=0;i<elem_mass;i++) // ������� ����������� ������ �����
	{
		cout <<i<<"- �������:" <<mass_umnogit[i]<<endl;
	}
	
	system("pause"); // ������� �������� ������
	system("Cls"); // ������� �����
	cout<<"\n������� ������ ������ ������� �������� 3�3 (����� ����� ������):";
	cin>>matrix[0][0];
	cin>>matrix[1][0];
	cin>>matrix[2][0];
	cout<<"\n������� ������ ������ ������� �������� 3�3 (����� ����� ������):";
	cin>>matrix[0][1];
	cin>>matrix[1][1];
	cin>>matrix[2][1];
	cout<<"\n������� ������ ������ ������� �������� 3�3 (����� ����� ������):";
	cin>>matrix[0][2];
	cin>>matrix[1][2];
	cin>>matrix[2][2];

	cout<<"\n��������� �������:\n";
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
		{
			cout<<matrix[i][j]<<" ";
		}
	cout<<endl;
	}
	cout<<"\n������� ����� ��� ��������, ���������, ��������� �������:";
	cin>>chislo;
	
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
		{
			matrix_plus[i][j]=matrix[i][j]+chislo;
			matrix_minus[i][j]=matrix[i][j]-chislo;
			matrix_umnogit[i][j]=matrix[i][j]*chislo;
		}
	}
	cout<<"\n������� ������� ��� �������� ����� "<<chislo<<endl;
		
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
		{
			cout<<matrix_plus[i][j]<<" ";
		}
	cout<<endl;
	}
	cout<<"\n������� ������� ��� ��������� ����� "<<chislo<<endl;
		
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
		{
			cout<<matrix_minus[i][j]<<" ";
		}
	cout<<endl;
	}
	cout<<"\n������� ������� ��� ��������� ����� "<<chislo<<endl;
		
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
		{
			cout<<matrix_umnogit[i][j]<<" ";
		}
	cout<<endl;
	}		
	
	delete []mass;
	delete []mass_minus;
	delete []mass_plus;
	delete []mass_umnogit;
	system("pause"); // ������� �������� ������
	return 0;
}

