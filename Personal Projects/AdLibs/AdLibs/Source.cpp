#include <iostream>

using namespace std;

int main()
{
	string adj1, noun1;

	cout << "Input an adjective: " << endl;
	cin >> adj1;
	cout << "Input a noun: " << endl;
	cin >> noun1;

	cout << "A " << adj1 << "man walks into a store." << endl << "He seems to come across a big " << noun1 << endl;

	return 0;
}