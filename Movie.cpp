//Name: Mervin Thomas
//Professor: Thaer Jayyousi
//Course Code: CSC 2000
//Due Date: April 11, 2019


#include <iostream>
#include<string>
#include "Movie.h"
using namespace std; 
Movie::Movie() //Default constructor 
{
	name = " ";
	rating = " ";
	// Initializing the arrays 

	ratings[0] = 0; 
	ratings[1] = 0;
	ratings[2] = 0;
	ratings[3] = 0;
	ratings[4] = 0;

}
Movie::Movie(string n, string r) // constructor with parameters
{
	name = n;
	rating = r;
	ratings[0] = 0;
	ratings[1] = 0;
	ratings[2] = 0;
	ratings[3] = 0;
	ratings[4] = 0;
}

//Mutator functions 
void Movie::setName(string n) 
{
	name = n;
}
void Movie::setRating(string r)
{
	rating = r;
}
//Accessor Functions 
string Movie::getName()
{
	return name;
}
string Movie::getRating()
{
	return rating;
}

// Add rating function. To add the ratings from the number input
void Movie::addRating(int number) 
{
	if (number < 1 || number>5) // Rating Validation
		cout << "\n" << "The rating range is not right";
	else// Else if statements for different int of ratings and the actions needed
	{
		if (number == 1) 
		{
			ratings[0]++;
		}

		else if (number == 2)
		{
			ratings[1]++;
		}
		else if (number == 3)
		{
			ratings[2]++;
		}
		else if (number == 4)
		{
			ratings[3]++;
		}
		else if (number == 5)
		{
			ratings[4]++;
		}
	}
}
//Get average function to calculate the average rating of the movie
double Movie::getAverage() 
{
	double average = static_cast<double>((ratings[0] * 1) + (ratings[1] * 2) + (ratings[2] * 3) + (ratings[3] * 4) + (ratings[4] * 5)) / (ratings[0] + ratings[1] + ratings[2] + ratings[3] + ratings[4]);
	return average;
}
