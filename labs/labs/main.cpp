// lab2_1
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
	srand( time( 0 ) );
// float *ptrarray = new float [10]; // ������
	//*ptrvalue = 9; // ������������� ������� ����� ���������
 //int *ptrvalue = new int (9); ������������� ����� ���������� ����� ��� ���������� ������������� �������
	char Second_name[20];
	char First_name[20];
	char Patronymic_name[20]; 
	int elem_mass,interval_mass,summa=0,summa_max=0, index_interval_max=0;
	double _year_double;
	float _year_float;
	cout<<"������� ���������� ��������� ������� �� 1 �� 100:";
	cin >> elem_mass;
	cout<<"������� �������� �� 0 �� "<<elem_mass<<":"<<endl;
	cin >> interval_mass;
	int *mass = new int[elem_mass]; // ������������ ��������� ������ ��� ������ ���� int
	
	for(int i=0;i<elem_mass;i++)
	{
		mass[i]=rand()%10;
	}
	for(int i=0;i<elem_mass;i++)
	{
		cout <<i<<"- �������:" <<mass[i]<<endl;
	}
	/*while (max_interval!=elem_mass)
	{
	
	}*/
	for(int j=0;j<=(elem_mass-interval_mass);j++)
	{
		summa=0;
		for(int i=0;i<interval_mass;i++)
		{
			summa=summa+mass[i+j];
		}
		if(summa_max<summa)
		{
			summa_max=summa;
			index_interval_max=j;
		}
	}
	
	cout <<"�������� � ������������ ������ ������: " <<summa_max<<endl;
	for(int i=index_interval_max;i<(elem_mass-index_interval_max);i++)
	{
		cout <<i<<"- �������:" <<mass[i]<<endl;
	}
	system("pause"); // ������� �������� ������
	return 0;
}

