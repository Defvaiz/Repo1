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
	

}