#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int t;	//����������� �������
	cout << "������� ����������� �������: "; cin >> t;
	if (t > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else if (t > -10)	//� ��������� ������ (�����)
	{
		cout << "�� ����� �������" << endl;
	}


	if (Condition1)
	{
		....;
		code1;
		....;
	}
	else if (Condition2)
	{
		....;
		code2;
		....;
	}
	.....
	.....
	else if (ConditionN)
	{
		....;
		codeN;
		....;
	}
	else
	{
		....;
		Default code;
		....;
	}
}