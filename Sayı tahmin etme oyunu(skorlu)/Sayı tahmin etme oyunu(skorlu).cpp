#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	int num, guess, tries = 0, score = 100;

	srand(time(0));
	num = rand() % 100 + 1;

	cout << "Welcome to Guess My Number Game!\n\n";

	int choice;

	do
	{
		int num, guess, tries = 0, score = 100;

		srand(time(0));
		num = rand() % 100 + 1;

	do {

		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Try lower!\n\n";
		else if (guess < num)
			cout << "Try higher!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);
	cout << "\nYour score is: =>" << score - (tries * 2) << "<=\n";
	cout << "Play again(1=Yes/2=No)" << endl;
	cin >> choice;

}while (choice == 1);


return 0;
}