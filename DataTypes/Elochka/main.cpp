#include<iostream> 
using namespace std;

#define offset "\t\t\t\t\t"	//offset - ��������
#define endline "\n"

//define - ����������. ������� ���������������� (������).
//� ���� �������� ���� ���
//value - ��������
#define NAME value
#define ���_�������� ���_��������

//#define ELOCHKA	//����������� ELOCHKA

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined ELOCHKA
	//���� ���������� ELOCHKA, �� ������������� ��� ����� ����� �����������.
	cout << offset << "� ���� �������� ������,\n";
	cout << offset << "� ���� ��� �����,\n";
	cout << offset << "����� � ����� ��������,\n";
	cout << offset << "������� ����.\n";
	cout << endline;
#endif
	cout << offset << "������ �� ���� �������:\n";
	cout << offset << "\"���, ������, ���-���!\"\n";
	cout << offset << "����� ������� ��������:\n";
	cout << offset << "\"������, �� ��������!\"\n";
	cout << endline;
#if defined ELOCHKA
	cout << offset << "�������� ����� ���������\n";
	cout << offset << "��� ������� ������.\n";
	cout << offset << "����� ����, �������� ����,\n";
	cout << offset << "������ ��������.\n";
	cout << "\n";
#endif
	cout << offset << "��! ���� �� ���� �������\n";
	cout << offset << "��� ������� �������\;\n";
	cout << offset << "������� ����������\n";
	cout << offset << "���������,�����.\n";
	cout << "\n";
	cout << offset << "����� ������� ��������,\n";
	cout << offset << "� � ������� �������,\n";
	cout << offset << "������ �� ���� ������\n";
	cout << offset << "��� ����� �������.\n";
	cout << "\n";
#if defined ELOCHKA
	cout << offset << "� ��� ���, ��������,\n";
	cout << offset << "�� �������� � ��� ������,\n";
	cout << offset << "� �����, ����� �������\n";
	cout << offset << "�������� ��������.\n";
#endif
}