#include<iostream>
#include<string>
#include <iomanip>
using namespace std; 


int main() 

{
	double rain1, rain2, rain3, averagerain;

	string month1, month2, month3;

	cout << "Enter the name of the first month: " << endl; 
	cin >> month1; 
	cout << "Enter the rainfall for " << month1 << endl; 
	cin >> rain1; 

	cout << "Enter the name of the second month: " << endl;
	cin >> month2;
	cout << "Enter the rainfall for " << month2 << endl;
	cin >> rain2;

	cout << "Enter the name of the third month: " << endl;
	cin >> month3;
	cout << "Enter the rainfall for " << month3 << endl;
	cin >> rain3; 


	averagerain = ((rain1 + rain2 + rain3) / 3); 

	cout << setprecision(2) << fixed; 
	cout << "The average rain fall for " << month1 << " , " << month2 << " , and " << month3 << " is " << averagerain << " inches	"; 

	system("pause"); 
	return 0; 
}
