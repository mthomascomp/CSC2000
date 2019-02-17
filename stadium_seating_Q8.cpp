# include<iostream>
#include <iomanip>
using namespace std; 

int main() 
{
	double classA, classB, classC;
	const int costA = 15, costB = 12, costC = 9; 
	cout << "how many tickets of class A seats were sold?" << endl; 
	cin >> classA;  
	cout << "how many tickets of Class B seats were sold?" << endl; 
	cin >> classB; 
	cout << "how many tickets of Class C seats were sold?" << endl;
	cin >> classC; 

	double total = (classA*costA) + (classB*costB) + (classC*costC); 
	cout << setprecision(2) << fixed; 
	cout << "The sales of ticket from this event is " << "$" << total << endl; 
	system("pause"); 
	return 0; 
}

