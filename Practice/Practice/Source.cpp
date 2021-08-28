#include <iostream>
using namespace std;

int main2()
{
	int quantity = 2;
	int num = 0;
	int answer = 0;

	cout << "Enter a number : ";
	cin >> num;

	answer = static_cast<double>(quantity) * static_cast<double>(num) * 1.125;

	cout << answer;
	cout << endl;

	system("pause");
	return 0;
}