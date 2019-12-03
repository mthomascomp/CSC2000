#include <iostream>
#include <iomanip>
#include <cmath>


double monthly_inch, years, inch, total_rainfall, total;
double counter = 1;
int j = 1;
int i = 1; 

using namespace std; 
int main()
{

	
	cout << "This program will calculate the average rainfall over a period of years.how many years do you wish to average" << endl; 
	cin >> years; 

	while (years<1)
	{
		cout << "Enter the number of years which are 1 or greater again : "; 
		cin >> years; 
	}

	while(monthly_inch <0)
	{
		cout << "Enter inches in positive numbers only again: "; 
		cin >> monthly_inch; 
	}
		
		for (int i = 1; i<=years;i++)
		{
			cout << "year " << i << endl; 
			for (int j = 1 ; j <= 12; j++)
			{
				cout << "Number of inches of rainfall for month " << j << "? "; 
				cin >> monthly_inch; 

				total_rainfall += monthly_inch; 
			}
		}
		
		cout << "\n";
		cout << "During a period of " << years * 12 << " months " << total_rainfall << " inches have fallen." << endl;
		cout << setprecision(3) << fixed << endl;
		cout << "The average rainfall for this time period was " << total_rainfall / (years * 12) << " inches of rainfall " << endl; 

	system("pause"); 
	return 0; 

}