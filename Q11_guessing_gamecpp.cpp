#include <iostream>
#include <iomanip>
#include<cmath>
#include<cstdlib>
#include <ctime>   

using namespace std; 



int main()
{
	
	srand(time(NULL));
	int random_number = rand()%100 +1 ;// creating a range of random to choose numbers from - range from 1-100
	unsigned seed = time(0);
	int  user_num;
	int x;

	cout << "Im thinking of a number. Can you guess ? "; 
	cin >> user_num; 
	
	//cout << random_number << endl; 
	 
	while (user_num != random_number)
	{

		while (user_num < random_number)
		{
			cout << "no thats too low" << endl; 
			cout << "Guess again : "; 
			cin >> user_num; 
		}
		
		while (user_num > random_number)
		{
			cout << "no thats too high" << endl;
			cout << "Guess again : ";
			cin >> user_num;
		}

		while(user_num == random_number)
		{
			cout << "Congratulations you guessed the correct number " << endl; 
			cout << "The number is " << user_num << endl; 

			system("pause"); 
			return 0; 
			break; 
		}
	}


	system("pause"); 
	return 0; 

}