#include <iostream>

using namespace std;
int main ()
{
	double x,y; // define two var with the same type

	cout << "Enter two numbers divided space" << endl;

	cin >> x>>y; // get and assign user input to vars

	double sum = x+y; // create sum
	double difference = x-y; // create difference
	double product = x*y; //create product
	double quotient = x/y; // create quotient


	cout << sum << endl
		<< difference << endl
		<< product << endl
		<< quotient << endl; // display all vars

	return 0;
}