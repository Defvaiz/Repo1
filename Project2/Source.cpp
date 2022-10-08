#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	int a;
	cout << "выберите год" << endl;
	cin >> a;
	if (a % 4 == 0)
	{
		cout << "год високосный " << endl;
	}
	else
	{
		cout << "год невисокосный " << endl;
	}
	if (a % 100 == 0 && a % 400 != 0)
	{
		cout << "Исключение " << endl;
	}

}