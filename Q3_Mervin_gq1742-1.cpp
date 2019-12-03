
#include <iostream>
#include<fstream>
#include<string>


using namespace std;

void selectionsort(string array[])
{
	int size = 5; 
	int startscan, minindex, minvalue;
	string temp;
	for (int i = 0; i < size; i++)
	{
		minindex = i;
		for (int j = i + 1; j < size; ++j)
		{
			if (array[j] < array[minindex])
			{
				minindex = j;
			}
		}
		temp = array[minindex];
		array[minindex] = array[i];
		array[i] = temp;
	}
}

void arraydisplay(string* arr) 
{
	int size = 5; 
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	
	
	string arr[5] = {}; 
	int size = 5;
	cout << "Enter 5 strings: " << endl; 
	for(int i=0; i<size; i++)
	{
		cin >> arr[i];
	
	}

	selectionsort(arr); 
	cout << "Sorted Array: "; 
	arraydisplay(arr); 

	cout << endl;
	system("pause");
	return 0;
}
