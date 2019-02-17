#include<iostream>
#include<iomanip>
using namespace std; 

int main() 

{
	const double YEN_PER_DOLLAR = 98.93, EUROS_PER_DOLLAR = 0.74; 

	double user_input, USD_YEN, USD_EURO; 

	cout << "PLease enter amount of USD. " << endl; 
	cin >> user_input; 

	USD_YEN = user_input * YEN_PER_DOLLAR; 

	USD_EURO = user_input * EUROS_PER_DOLLAR; 

	cout << setprecision(2) << fixed << endl; 
	cout << "You have " << USD_YEN << " Yen " << "and you have " << USD_EURO << " Euro" << endl; 

	system("pause"); 
	return 0; 


}