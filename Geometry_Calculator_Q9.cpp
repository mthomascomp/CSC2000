#include <iostream>
#include <cmath>

using namespace std; 

const double pi = 3.14159; 
int main()
{
	double A_Circle, A_Rectangle, A_Triangle, Radius, Length, Width, Base, T_Height;
	int Option;

	cout << " Geometry Calculator" << endl;
	cout << "1. Calculate the area of a circle " << endl;
	cout << "2. Calculate the area of a Rectangle " << endl;
	cout << "3. Calculate the area of a Triangle " << endl;
	cout << "4. Quit" << endl;

	cout << "Enter your option (1-4) " << endl;
	cin >> Option;

	while (Option < 1 || Option >4)
	{
		cout << "Please enter a correct available option again: ";
		cin >> Option;
	}
	if (Option == 1)
	{
		cout << "Please enter the radius of the circle: ";
		cin >> Radius;
		while (Radius < 0)
		{
			cout << "Please enter a positive radius: ";
			cin >> Radius; 
		}

		A_Circle = pow(Radius, 2) * pi;
		cout << "The area of the circle is : " << A_Circle << endl;
	}
	else if (Option == 2)
	{
		cout << "Please enter the length: ";
		cin >> Length;
		while (Length < 0)
		{
			cout << "Enter postive length again :";
			cin >> Length;
		}
		cout << "Please enter the width: ";
		cin >> Width;
		while (Width < 0)
		{
			cout << "Please enter the positive Width again: ";
			cin >> Width;
		}
		A_Rectangle = Length * Width;
		cout << "The area of the rectangle is : " << A_Rectangle << endl;
	}

	else if (Option == 3)
	{

		cout << "Please enter the length of the base: ";
		cin >> Base;
		while (Base < 0)
		{
			cout << "Enter positive length of base :";
			cin >> Base;
		}
		cout << "Please enter the height of the triangle: ";
		cin >> T_Height;
		while (T_Height < 0)
		{
			cout << "Please enter the positive height again: ";
			cin >> T_Height;
		}
		A_Triangle = (Base * T_Height) / 2;
		cout << "The area of the Triangle is : " << A_Triangle << endl;
	}


	else if (Option == 4)
	{
		cout << "Quitting geometry calculator " << endl;
	}

	system("pause");
	return 0;
}

	

	
