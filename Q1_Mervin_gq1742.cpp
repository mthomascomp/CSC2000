//Name: Mervin Thomas
//Professor: Thaer Jayyousi
//Course Code: CSC 2000
//Due Date: April 11, 2019

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
//Function prototypes
void randomcards(int cards[][4]);
void showarrays(char array[][4]);
bool endofgame(char array[][4]);
void showBoard(int array[4][4], char star[4][4]);
void game(int &rc1, int &cc1, int &rc2, int &cc2, int array[4][4], char star[4][4], char nums[]);
void randomcards(int cards[][4]);

int main()
{

	int array[4][4]; // 1st array to hold value
	randomcards(array);// random card generator
	char star[4][4]; // 2nd array for the stars
	char nums[] = { '1','2','3','4','5','6','7','8','9' };//Array of numbers to chars convert. 

	showBoard(array, star);

	int c = 0, r = 0;
	int max_range = 8;
	int min_range = 1;
	bool fit = true;
	for (int i = 0; i <= 8; i++)
	{
		fit = true;
		while (fit)
		{
			r = rand() % 8;
			c = rand() % 8;  //random 
			if (array[r][c] == 0)
			{
				fit = false;
			}

		}
		array[r][c] = i;
	}
	showarrays(star);
	int rc1 = 0, cc1 = 0, rc2 = 0, cc2 = 0;
	game(rc1, cc1, rc2, cc2, array, star, nums);

	system("pause");
	return 0;
}
void showarrays(char array[][4]) // A function to show the board
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << array[i][j] << " \t"; //Nested for loop array 
		}
		cout << endl;
	}
	cout << endl;
}

bool endofgame(char array[][4]) //Function to end the game 
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (array[i][j] == '*')
			{
				return false;
			}

		}
		cout << endl;
	}
	return true;
	cout << endl;

}
void showBoard(int array[4][4], char star[4][4]) // Function to fill the board correctly with the *
{

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			array[i][j] = 0;
			star[i][j] = '*';
		}
	}

}


// Function to play the game which updates the locations of the card as well 
void game(int &rc1, int &cc1, int &rc2, int &cc2, int array[4][4], char star[4][4], char nums[])
{
	randomcards(array);
	do {
		bool input = true;//Boolean input of true set to true

		do {
			cout << "Enter row(1 to 4) or column (1 to 4) position of the pair: ";
			cin >> rc1 >> cc1;
            //Row1 and col 1 input conditions
			if (rc1 < 1 || rc1>4 || cc1 < 1 || cc1>4)
			{
				cout << "Invalid Position. " << endl;

			}
			else if (star[rc1 - 1][cc1 - 1] != '*')
			{
				cout << "The card at this position is already faced up. Select position again. " << endl;
			}
			else
			{
				input = false;
			}

		} while (input);

		star[rc1 - 1][cc1 - 1] = nums[array[rc1 - 1][cc1 - 1]]; //star array value replacement by the nums value
		showarrays(star);

		input = true;
		do {
			cout << "Enter row(1 to 4) or column (1 to 4) position of the pair: ";
			cin >> rc2 >> cc2;
            //Row 2 and col 2 input conditions
			if (rc2 < 1 || rc2>4 || cc2 < 1 || cc2>4)
			{
				cout << "Invalid Position. " << endl;

			}
			else if (star[rc2 - 1][cc2 - 1] != '*')
			{
				cout << "The card at this position is already faced up. Select position again. " << endl;
			}
			else
			{
				input = false;
			}

		} while (input);
        
		star[rc2 - 1][cc2 - 1] = nums[array[rc2 - 1][cc2 - 1]]; // replace star by num array
		showarrays(star);//Function to show the array of the star
        
		if (array[rc1 - 1][cc1 - 1] != array[rc2 - 1][cc2 - 1])
		{
			cout << "The pair did not match. Please select again" << endl;
			star[rc1 - 1][cc1 - 1] = '*';
			star[rc2 - 1][cc2 - 1] = '*';
			showarrays(star);
		}
		else
		{
			cout << "Pair Match" << endl;
			showarrays(star);
		}

	} while (!endofgame(star));// Loop continues till the game is satisfied. 
}

void randomcards(int cards[][4])//Function to randomize the numbers in the array
{
	int arr1[16] = { 1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8 }; //Holds an array value of size 16. 4X4 = 16

	for (int i = 0; i <= 20; i++)//Outer for loop to be set less than a arbritary value of less
        //Than 20
	{
		for (int j = 0; j < 16; j++)//Inner for loop to set less than an arbritary value of less //than 16
		{

			srand((unsigned)time(NULL));//set the seed of the s rand using time and NULL
			int a = rand() % 15 + 1;
			int temp = arr1[j];
			arr1[j] = arr1[a];//Variables to store the numbers in the array
			arr1[a] = temp;

		}
		int b = 0;
		for (int r = 0; r < 4; r++)//Row for loop to put the random number
		{
			for (int c = 0; c < 4; c++)//Column for loop to put the random number
			{
				cards[r][c] = arr1[b];
				b = b + 1;
			}
			cout << endl;
		}
	}
}


