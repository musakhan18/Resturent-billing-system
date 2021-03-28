#include<iostream>
using namespace std;
int main()
{
	float men, bill, cost, tax, tip;
	cout << "enter the number of people: "; cin >> men;
	if (men >= 4)
	{
		cout << "enter your cost: "; cin >> cost;
		if (cost >= 2000 && cost < 3000)
		{
			tax = cost * 0.1;
			tip = (cost + tax) * 0.17;
			bill = tax + cost + tip;
			cout << "your tax is: " << tax << endl;
			cout << "your tip is: " << tip << endl;
			cout << "your bill is: " << bill << endl;
		}
		else if (cost >= 3000 && cost <= 5000)
		{
			tax = cost * 0.2;
			tip = (cost + tax) * 0.17;
			bill = cost + tax + tip;
			cout << "your tax is: " << tax << endl;
			cout << "your tip is: " << tip << endl;
			cout << "your bill is: " << bill << endl;
		}
		else
		{

			tax = cost * 0.12;
			tip = (cost + tax) * 0.17;
			bill = tax + cost + tip;
			cout << "your tax is: " << tax << endl;
			cout << "your tip is: " << tip << endl;
			cout << "your bill is: " << bill << endl;
		}
	}
	else
	{
		cout << "this is a family resturent GET OUT" << endl;
	}
	return 0;
}