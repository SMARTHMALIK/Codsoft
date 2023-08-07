#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, num_guessed, no_of_guesses = 0;
	srand(time(0));
	num = rand() % 100 + 1; // random number between 1 and 100
	cout << "Number Guessing Game\n\n";

	do
	{
		cout << "Guess a number between 1 and 100 : ";
		cin >> num_guessed;
		no_of_guesses++;

		if (num_guessed > num)
			cout << "The guess is too high!\n\n";
		else if (num_guessed < num)
			cout << "The guess is too low!\n\n";
		else
			cout << "\nCorrect guess , the number is  "<<num << " and the Attempts made are: "<< no_of_guesses <<endl;
	} while (num_guessed != num);

	return 0;
}
