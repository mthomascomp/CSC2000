// Name: Mervin Thomas
// Professor Name: Thaer Jayyousi
// Course Code: CSC 2000
// Due Date


#include <iostream>
#include<iomanip>
#include<string>
#include "Movie.h"

using namespace std; 

int main()
{
	Movie movie1("The Adjustment Bureau", "PG-13"); 
	Movie movie2("I am Number 4", "PG-13"); 

	//Uses the function add rating . In this i hard coded the ratings given by the professor 
	movie1.addRating(5); 
	movie1.addRating(5);
	movie1.addRating(4);
	movie1.addRating(4);
	movie1.addRating(5);
	movie2.addRating(3);
	movie2.addRating(2);
	movie2.addRating(2);
	movie2.addRating(4);
	movie2.addRating(1);
	movie1.getName(); 

	cout << "\n"; 
	cout << " First Movie " << endl; 
	cout << " First movie name: " << movie1.getName() << endl; ;
	cout << " Movie Rating: " << movie1.getRating() << endl; ;
	cout<< " Average rating: " << movie1.getAverage() << endl;
	cout << "\n";

	cout << " Second Movie " << endl; 
	cout << " Second movie name: " << movie2.getName() << endl; 
	cout << " Movie Rating: " << movie2.getRating() << endl; 
	cout<<" Average rating: " << movie2.getAverage() << endl;
	cout << "\n"; 

	system("pause"); 
	return 0; 
}