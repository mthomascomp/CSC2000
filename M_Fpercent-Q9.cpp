#include <iostream>
#include <iomanip>
using namespace std; 

int main() 
{
	double male, female, totalstudents, malepercent, femalepercent; //initalizing variables in double form 

	cout << "how many males are there in the class ? " << endl; //command out 
	cin >> male; //User input
	cout << "how many Females are there in the class ? " << endl; 
	cin >> female; 

	totalstudents = male + female; //Variable assignment
	malepercent = (male/totalstudents)*100; 
	femalepercent = (female/ totalstudents) * 100;

	cout << setprecision(2) << fixed << endl; // This line makes a fixed point notation with 2 decimal points 
	cout << "The percent of female students are " << femalepercent <<"%"<< " and the percent of male students are " << malepercent << "%"<< endl; 


	system("pause"); 
	return 0; 

}