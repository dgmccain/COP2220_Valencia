#include <iostream>
using namespace std;

int main3()
{
	double beginBalance = 0.0;
	double deposits = 0.0;
	double withdraws = 0.0;
	double endBalance = 0.0;

	cout << "Enter current balance : $";
	cin >> beginBalance;
	cout << "Enter amount of deposits : $";
	cin >> deposits;
	cout << "Enter amount of withdraws : $";
	cin >> withdraws;

	endBalance = beginBalance - withdraws + deposits;

	cout << "The new balance: $ ";
	cout << endBalance << endl;


	system("pause");
	return 0;
}