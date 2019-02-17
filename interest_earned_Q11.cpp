#include<iostream>
using namespace std; 
#include<iomanip>

int main() 
{
	double amount, principal, rate, Time, interest_earned, Rate; 

	cout << "What is the prinicpal balance in the savings account ? " << endl; 
	cin >> principal; 
	cout << "what is the interest rate? " << endl; 
	cin >> rate; 

	Rate = rate / 100; 

	cout << "what is the time period ? " << endl; 
	cin >> Time; 

	amount = principal * pow((1 + Rate/ Time), Time); 
	interest_earned = amount - principal; 

	cout << setprecision(2) << fixed << endl; 
	cout << "Interest : " << rate << " %" << endl;
	cout << "Times compounded: " << Time << endl;
	cout << "Principal: " << principal << endl;
	cout << "The interest earned is " <<" $"<< interest_earned << endl; 
	cout << "Amount in savings : " << "$" << amount << endl; 
	
	system("pause"); 
	return 0; 
	 
	

}