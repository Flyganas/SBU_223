#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define TASK_1
#define TASK_2
#define TASK_3
#define TASK_4

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	double money;
	cout << "������� �������� �����: "; cin >> money;
	//cout << money << endl;
	money += 1e-8;
	int grn = money;//������� ��������������� ����� �� float � double
	cout << grn << " ���.\t";
	int cop = (money - grn) * 100;
	cout << cop << " ���.\n";
#endif // TASK_1

	double price_of_notebook, price_of_pencil;
	int amount_of_notebooks, amount_of_pencils;
	cout << "������� ��������� �������: "; cin >> price_of_notebook;
	cout << "������� ���������� ��������: "; cin >> amount_of_notebooks;
	cout << "������� ��������� ���������: "; cin >> price_of_pencil;
	cout << "������� ���������� ����������: "; cin >> amount_of_pencils;
	double total_price = price_of_notebook * amount_of_notebooks + price_of_pencil * amount_of_pencils;
	cout << "����� ��������� �������: " << total_price << endl;
}