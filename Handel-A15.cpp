/*
Name- Zachary Handel
Assignment- A15
Due Date- 11/8/21
Description- This program will read in 5 double values (5 restraunt items on a bill).
These values will be stored in an array, where then each value will be printed on its own line. 
The tax will then be calculated (9%) then it will show the bill total with the tax.
*/

#include <iostream>

using namespace std;

int main()
{
	const int size = 5;
	double items[size];
	double sum = 0;
	double tax;
	double bill;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter the next price for the item on the bill: " << endl;
		cin >> items[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << "Item " << i << ": " << items[i] << " " << endl;
	}

	for (int i = 0; i < size; i++)
	{
		sum += items[i];
	}

	cout << "Sum: " << sum << endl;


	return 0;
}