//Name: Mervin Thomas
//Professor: Thaer Jayyousi 
//Course Code: CSC 2000
//Due Date: April 11, 2019

#include <iostream>
#include <string>
using namespace std; 
int readnums(int num[20])
{
	string number; 
	getline(cin, number);  // User input of number
	while (number.length() > 20) // Validation for inputs greater than 20 digits
	{
		cout << "This number has more than 20 digits. Program Terminates.";

		system("pause"); 
		return 0;
		break; 
	}

	for (int i = 0; i < (int)number.length(); i++)
	{
		num[i] = (int)number[number.length() - 1 - i] - 48;
	}
	return number.length(); 

}
int add(int arr1[20], int arr2[20], int sum[20], int laar1, int laar2 )
{
	int c = 0; 
	int length; 
	int t; 
	int i; 
	if (laar1 > laar2)
		length = laar1;
	else
		length = laar2; 
	for ( i=0; i<length; i++)
	{
		t = arr1[i] + arr2[i] + c; 
		sum[i] = t % 10; 
		c = t / 10; 
	}
	if (c == 0)
		return length;
	else
		sum[i] = c; 
	return length + 1; 
}

void diplayint(int a[20], int x)
{
	for(int i=x-1; i>-1; i--)
		cout << a[i]; 
}

int main()
{
	int arr1[20] = { 0 }; 
	int arr2[20] = { 0 };
	int sum[21] = { 0 }; 
	int length1, length2, slength; 


	cout << "Enter the first positive number of at most 20 digits: "; 
	length1 = readnums(arr1); 
	int z = 10; 

	if (length1 > 20)
	{
			cout << "This number has more than 20 digits. Program Terminates " << endl;
			return 0;
	}
	cout << "Enter the second positive number of at most 20 digits: ";
	length2 = readnums(arr2); 
	if (length1 > 20)
	{
		cout << "This number has more than 20 digits. Program Terminates " << endl;
		return 0;
	}

	if (length2 > 20)
	{
		cout << "This number has more than 20 digits. Program Terminates " << endl;

	}
	slength = add(arr1, arr2, sum, length1, length2); 

	
	if(slength<20)
	{
		cout << "The sum of the two large integers are: "; 
		diplayint(sum, slength);
	}
	else
	{
		cout << "The sum of the number overflows: "; 
		cout << "The result of the sum of the 2 int have greater than 20 digits"; 
		cout << "\n ""The sum of the two large int is: "; 
		diplayint(sum, slength);
	
	}
	cout << endl; 
	system("pause");
	return 0;
}