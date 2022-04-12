#include <iostream>
#include <windows.h>
using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void SetCursor(int x, int y, int c)
{
	COORD cursor;
	cursor.X = x;
	cursor.Y = y;
	SetConsoleCursorPosition(h, cursor);
	SetConsoleTextAttribute(h, c);
	cout << (char)1 << "\n";
}

void Line(int x, char a, int y, bool b)
{
	if (b == true)
	{
		for (int i = 0; i < x; i++)
		{
			SetConsoleTextAttribute(h, y);
			cout << (char)a;
		}
		cout << "\n";
	}
	if (b == false)
	{
		for (int i = 0; i < x; i++)
		{
			SetConsoleTextAttribute(h, y);
			cout << (char)a << "\n";
		}
	}
}


int main()
{
	SetCursor(5, 4, 12);
	Line(20, '@', 14, true);
}