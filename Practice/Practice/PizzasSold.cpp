#include <iostream>
using namespace std;

int main4()
{
	double smallPizzasSold = 30;
	double mediumPizzasSold = 25;
	double largePizzasSold = 85;
	double familyPizzasSold = 73;
	int totalPizzasSold = 0;
	double smallPizzaPercentage = 0.0;
	double mediumPizzaPercentage = 0.0;
	double largePizzaPercentage = 0.0;
	double familyPizzaPercentage = 0.0;

	totalPizzasSold = smallPizzasSold + mediumPizzasSold + largePizzasSold + familyPizzasSold;

	smallPizzaPercentage = smallPizzasSold / totalPizzasSold * 100;
	mediumPizzaPercentage = mediumPizzasSold / totalPizzasSold * 100;
	largePizzaPercentage = largePizzasSold / totalPizzasSold * 100;
	familyPizzaPercentage = familyPizzasSold / totalPizzasSold * 100;

	cout << "The total number of pizzas sold was " << totalPizzasSold << endl;
	cout << "The percentage of small pizzas sold was " << smallPizzaPercentage << endl;
	cout << "The percentage of medium pizzas sold was " << mediumPizzaPercentage << endl;
	cout << "The percentage of large pizzas sold was " << largePizzaPercentage << endl;
	cout << "The percentage of family pizzas sold was " << familyPizzaPercentage << endl;



	system("pause");
	return 0;
}