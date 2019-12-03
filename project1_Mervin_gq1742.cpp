//Project 1
//Name: Mervin Thomas 
//Professor: Thaer Jayyousi 
//Course Code: CSC2000
//Due Date: March 18, 2019

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//constant prices and quantity placed ad global variable 

const double smallcup = 1.75;
const double medcup = 1.90;
const double largecup = 2.00;
const double ssize = 9; 
const double msize = 12; 
const double lgsize = 15; 

// Making use of function prototype to call the function in the program. 
void choice(); 
void coffeepurchase(int &scups, double &totalscups, int &mcups, double &totalmcups, int &lgcups, double &totallgcups);
void coffeesizechoices(); 
void totalmoneymade(double &scups, double &mcups, double &lgcups); 
void amtcoffeesold(double &scups, double &mcups, double &lgcups);
void soldcups(double &scups, double &mcups, double &lgcups); 
int main()
{
	cout << "Welcome to Jason's coffee shop!. Enjoy" << endl;
	cout << "--------------------------------------" << endl;
	cout << "\n" << endl;

	int option;
	int option2;
	double cups;

	// Initialized the needed variables to 0. 
	int scups = 0, mcups = 0, lgcups = 0;
	double scups1 = 0, mcups1 = 0, lgcups1 = 0;
	double totalscups = 0, totalmcups = 0, totallgcups = 0;
	double totalcoffees = 0, totalcoffeem = 0, totalcoffeelg = 0;
	
	choice();
	cin >> option;
	while (option != 1 || option != 2 || option != 3 || option != 4 || option != 5 || option != 9)
	{
		cout << "Please Enter a valid option";
		cin >> option;
		break;
	}
	while (option == 1) // Coffee order function loop. 
	{
			cout << showpoint << fixed << setprecision(2);
			//Coffeepurchase function takes the values in and runs it through the function for coffee size choices. 
			coffeepurchase(scups, totalscups, mcups, totalmcups, lgcups, totallgcups);
			cout << "\n" << endl;
			choice();
			cin >> option;
	}
	while (option == 2)// when user wants to find the total money made.
	{
			cout << showpoint << fixed << setprecision(2);
			double newval1;
			double newval2;
			double newval3;
			newval1 = totalscups;
			newval2 = totalmcups;
			newval3 = totallgcups;
			totalmoneymade(totalscups, totalmcups, totallgcups);
 
			cout << "\n" << endl;
			choice();
			cin >> option;
	}

	while (option == 3) // Total coffee amount sold 
	{
			cout << showpoint << fixed << setprecision(2);
			double amount1;
			double amount2;
			double amount3;

			// amount 1,2,&3 Calcluates the cups that were sold 
			amount1 = totalscups/smallcup;
			amount2 = totalmcups / medcup;
			amount3 = totallgcups / largecup;

			amtcoffeesold(amount1, amount2, amount3);
			cout << "\n" << endl;
			choice();
			cin >> option;
	}
	while (option == 4)
	{
			double newcup1;
			double newcup2;
			double newcup3;
			newcup1 = totalscups/smallcup;
			newcup2 = totalmcups/medcup;
			newcup3 = totallgcups/largecup;

			soldcups(newcup1, newcup2, newcup3);
			cout << "\n" << endl;
			choice();
			cin >> option;
	}
	while (option == 5) // Function to print the total data from the days order
	{
			cout << showpoint << fixed << setprecision(2);

			cout << "Todays coffee shop data: ---------------" << endl;

			//Cup count data 
			double newcup1;
			double newcup2;
			double newcup3;


			newcup1 = totalscups / smallcup;
			newcup2 = totalmcups / medcup;
			newcup3 = totallgcups / largecup;

			soldcups(newcup1, newcup2, newcup3);

			// Amt coffee sold data 
			double amount1;
			double amount2;
			double amount3;

			amount1 = totalscups / smallcup;
			amount2 = totalmcups / medcup;
			amount3 = totallgcups / largecup;

			amtcoffeesold(amount1, amount2, amount3);

			// Total money made data 
			double newval1;
			double newval2;
			double newval3;
			double newval4;
			newval1 = totalscups;
			newval2 = totalmcups;
			newval3 = totallgcups;

			totalmoneymade(newval1, newval2, newval3);

			cout << "End of data for today -----------------" << endl;
			cout << "\n" << endl;

			choice();
			cin >> option;

	}
	while (option == 9) //Exit loop 
	{
			cout << "\n" << endl; 
			cout << "You have exitied the program. Have a nice day! " << endl;
			cout << "----------------------------------------------" << endl;
			break; 
	} 

	cout << "\n" << endl;
	cout << "Project 1: CSC2000 " << endl; 
	cout << "Created by Mervin Thomas " << endl;
	system("pause");
	return 0;
}
void choice() 
{
	cout << "1 : Enter 1 to order coffee." << endl; 
	cout << "2 : Enter 2 to check the total money made up to this time." << endl;
	cout << "3 : Enter 3 to check the total amount of coffee sold up to this time. " << endl;
	cout << "4 : Enter 4 to check the number of cups of coffee of each size sold. " << endl;
	cout << "5 : Enter 5 to print the data. " << endl;
	cout << "9 : Enter 9 to exit the program." << endl;
}
void coffeesizechoices()
{
	cout << " 1: Enter 1 to buy coffee in a small cup size (9 oz) " << endl;
	cout << " 2: Enter 2 to buy coffee in a medium cup size (12 oz)  " << endl;
	cout << " 3: Enter 3 to buy coffee in a large cup size (15 oz) " << endl;
}
void coffeepurchase(int &scups, double &totalscups, int &mcups, double &totalmcups, int &lgcups, double &totallgcups)
{
	double totalcoffees = 0; 
	double totalcoffeem = 0;
	double totalcoffeelg = 0;
	int option2; 
	coffeesizechoices(); 
	cin >> option2;

	// Validation of coffee size choices. 
	while (option2 != 1 || option2 != 2 || option2 != 3)
	{
		cout << "Please Enter a valid option";
		cin >> option2;
		break;
	}
	while (option2 == 1)
	{
		cout << "Enter the number of cups: "; 
		cin >> scups; 
		totalscups = (scups * smallcup) + totalscups; 
		cout << "Please pay $ " << totalscups << endl; 
		totalcoffees += totalscups; 
		break; 
	}
	while (option2 == 2)
	{
		cout << "Enter the number of cups: ";
		cin >> mcups;
		totalmcups = (mcups * medcup)+totalmcups;
		cout << "Please pay $ " << totalmcups << endl;
		totalcoffeem += totalmcups;
		break; 
	}
	while (option2 == 3)
	{
		cout << "Enter the number of cups: ";
		cin >> lgcups;
		totallgcups = (lgcups * largecup) + totallgcups;
		cout << "Please pay $ " << totallgcups << endl;
		totalcoffeelg += totallgcups;	 
		break; 
	}


	
}

// Total money made function. Computes the total revenue made by the user coffee choice.
void totalmoneymade(double &scups, double &mcups, double &lgcups)
{
	double p1; 
	double p2; 
	double p3; 
	p1 = scups; 
	p2 = mcups;
	p3 = lgcups;

	double tm = p1 + p2 + p3;  
	cout << "Toal money made is: $ " << tm << endl;
}


// Total ammount of coffee sold function, which calculates amt of coffee sold
void amtcoffeesold(double &scups, double &mcups, double &lgcups)
{
	double amt1; 
	double amt2 ; 
	double amt3; 
	amt1 = ssize * scups; 
	amt2 = msize * mcups; 
	amt3 = lgsize * lgcups; 
	cout << "The total amount of coffee sold is: " << (amt1 + amt2 + amt3) << " OZ" << endl; 
}

//Total cup sold functions 
void soldcups(double &scups, double &mcups, double &lgcups)
{
	double tscups, tmcups, tlgcups; 
	tscups = scups; 
	tmcups = mcups; 
	tlgcups = lgcups; 
	cout << "The total small cups sold is:  " << tscups << endl; 
	cout << "The total medium cups sold is:  " << tmcups << endl;
	cout << "The total large cups sold is:  " << tlgcups << endl;

}

