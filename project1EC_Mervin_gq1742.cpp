//Name: Mervin Thomas 
// Course Code : CSC2000
// Professor: Thaer Jayyousi 
// Due Date: March 19, 2019

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>

using namespace std;

//Function Prototype

void openFiles(ifstream &in, ofstream &out);
void initialize(double &malecount, double &femalecount, double &malegpatotal, double &femalegpatotal, int &mcount, int &fcount, char &male, char&female);
void MaleGPA(ifstream &in, double &malecount, double &malegpatotal, int &mcount, char &male);
void femaleGPA(ifstream &in, double &femalecount, double &femalegpatotal, int &fcount, char &female);
void sumGrades(double &malegpatotal, double &femalegpatotal, ifstream &in, double &malecount, int &mcount, char &male, double &femalecount, int &fcount, char &female);
void averageGrade(double &malegpatotal, double &femalegpatotal, int &mcount, int &fcount, double &maleavg, double&femaleavg);
void printResults(ofstream &out, double &maleavg, double &femaleavg, double &malegpatotal, double&femalegpatotal, int &mcount, int &fcount);

int main()
{
	ifstream in;
	ifstream in2; 
	ofstream out;
	cout << showpoint << fixed << setprecision(2);
	double malecount, femalecount, malegpatotal, femalegpatotal, maleavg, femaleavg, totalGPA;

	char male, female;
	char ch2; 
	double g2; 
	int mcount, fcount;

	cout << "Processing Data: " << endl; 
	in2.open("ECPart01Data.txt");
	
	while (in2>>ch2>>g2)
	{
		cout << ch2 <<"\t"<< g2 << endl; 
	
	}
	cout << "\n" << endl; 
	in2.close(); 
	
	initialize(malecount, femalecount, malegpatotal, femalegpatotal, mcount, fcount, male, female);

	


	sumGrades(malegpatotal, femalegpatotal, in, malecount, mcount, male, femalecount, fcount, female);
	averageGrade(malegpatotal, femalegpatotal, mcount, fcount, maleavg, femaleavg);
	printResults(out, maleavg, femaleavg, malegpatotal, femalegpatotal, mcount, fcount);

	in.close();
	out.close();

	system("pause");
	return 0;
}
void openFiles(ifstream &in, ofstream &out)
{
	in.open("ECPart01Data.txt");
	out.open("GPA.txt");
	out << setprecision(2);
}
void initialize(double &malecount, double &femalecount, double &malegpatotal, double &femalegpatotal, int &mcount, int &fcount, char &male, char&female)
{
	fcount = 0;
	mcount = 0;
	malegpatotal = 0;
	femalegpatotal = 0;
	malecount = 0;
	femalecount = 0;
	male = 'm';
	female = 'f';
}
void femaleGPA(ifstream &in, double &femalecount, double &femalegpatotal, int &fcount, char &female)
{
	while (!in.eof())
	{
		in >> female;
		if (female == 'f')
		{
			in >> femalecount;
			femalegpatotal = femalegpatotal + femalecount;
			fcount++;
		}
	}
}
void MaleGPA(ifstream &in, double &malecount, double &malegpatotal, int &mcount, char &male)
{
	while (!in.eof())
	{
		in >> male;
		if (male == 'm')
		{
			in >> malecount;
			malegpatotal = malegpatotal + malecount;
			mcount++;
		}
	}
}
void sumGrades(double &malegpatotal, double &femalegpatotal, ifstream &in, double &malecount, int &mcount, char &male, double &femalecount, int &fcount, char &female)
{
	in.open("ECPart01Data.txt");
	MaleGPA(in, malecount, malegpatotal, mcount, male);
	in.close();
	in.open("ECPart01Data.txt");
	femaleGPA(in, femalecount, femalegpatotal, fcount, female);
	in.close(); 
}
void averageGrade(double &malegpatotal, double &femalegpatotal, int &mcount, int &fcount, double &maleavg, double&femaleavg)
{
	femaleavg = femalegpatotal / fcount;
	maleavg = malegpatotal / mcount;
}
void printResults(ofstream &out, double &maleavg, double &femaleavg, double &malegpatotal, double&femalegpatotal, int &mcount, int &fcount)
{
	
	cout << "Sum female GPA =  " << femalegpatotal << endl;
	cout << "Sum male GPA = " << malegpatotal << endl;
	cout << "Female count =  " << fcount << endl;
	cout << "Male count = " << mcount << endl;
	cout << "Average female GPA =  " << femaleavg << endl;
	cout << "Average male GPA =  " << maleavg << endl;
	
	
}

