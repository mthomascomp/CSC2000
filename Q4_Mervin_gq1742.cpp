// Name: Mervin Thomas 
// Professor Name: Thaer Jayyousi 
// Course Code: CSC2000
// Due Date: April 16, 2019


#include<iostream>
#include <vector>
#include<string>
using namespace std; 
bool seq_search(vector<string>strs, string str)
{
	for(int i=0; i<str.size(); i++)
	{
		if(strs[i]==str)
		{
			return true; 
		}
	}
	return false; 
}
int main()
{
	cout << "Enter the first name (zzz to end the input): ";
	vector<string> v; 
	string names; 
	while(cin>>names && names!="zzz")
	{
		v.push_back(names); 
	}
	cout << "Enter the name to be search: " << endl;
	cin >> names; 
	if(seq_search(v,names)) // sequential search function 
	{
		cout << "The name is found in the list: " << endl; 
	}
	else
	{
		cout << "name is not on the list " << endl; 
	}

	system("pause"); 
	return 0; 
}