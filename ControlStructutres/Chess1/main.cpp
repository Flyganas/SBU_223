﻿#include<iostream>
using namespace std;

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define HORIZONTAL_LINE		(char)196
#define VERTICAL_LINE		(char)179
#define WHITE_BOX			"\xDB\xDB"
#define BLACK_BOX			"\x20\x20"
//Escape-последовательность \x позволяет в строке указать ASCII-код символа,
//в Hexadecimal (Шестнадцатеричной системе счисления).

//#define ASCII

void main()
{
	setlocale(LC_ALL, "");
#ifdef ASCII
	cout << "Таблица ASCII-символов:\n";
	setlocale(LC_ALL, "C");
	for (int i = 176; i < 224; i++)
	{
		cout << i << "\t" << (char)i << endl;
		/*if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";*/
	}
	cout << endl;
	setlocale(LC_ALL, "Rus");
	cout << "Вот и сказочке конец!" << endl;
#endif // ASCII

	int n;
	cout << "Введте размер доски: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			/*else if (i % 2 == j % 2)cout << WHITE_BOX << WHITE_BOX;
			else cout << "  ";*/
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}
}