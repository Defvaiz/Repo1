#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	int a;
	cout << "�������� ���" << endl;
	cin >> a;
	if (a % 4 == 0)
	{
		cout << "��� ���������� " << endl;
	}
	else
	{
		cout << "��� ������������ " << endl;
	}
	if (a % 100 == 0 && a % 400 != 0)
	{
		cout << "���������� " << endl;
	}

}