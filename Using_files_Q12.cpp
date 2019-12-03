#include<iostream>
#include<fstream>


using namespace std; 
double number, sumnum, avgnum; 
int main()
{
	ifstream in; 
	in.open("Random.txt"); 

	double val = 0, sum = 0; 
	double count = 0; 
	double numinnum; 
	while (in)
	{
		sum = sum + val;
		in >> val; 
		count++;
		
	}
	numinnum = count-1;
	cout << "The number in numbers: " << numinnum << endl; 
	cout << "The sum of the numbers are: " << sum << endl; 
	cout << "The average of the numbers are: " << (sum / numinnum); 
	cout << endl; 
	in.close(); 
	system("pause"); 
	return 0; 

	

}