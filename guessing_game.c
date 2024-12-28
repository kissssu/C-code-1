#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	// This is project 1.

		// Initialize random number generator.
	srand(time(0));

		// Generates random number between 1 to 100.
	int randomNumber = (rand() % 100) + 1;
	int i = 0;

	// printf("The random number is: %d.\n",randomNumber);

	int num;
	int score;
	printf("You'll get 10 chances.");

	for (int i = 0; i < 10; i++) {
		// printf("%d.\n",i);
		printf("\nGuess the number: ");
		scanf("%d",&num);
		if (randomNumber == num) {
			printf("The number is same. \n\nYou won.");
			printf("\nYou score is: %d\n",10 - i);
			break;
		}	else if (randomNumber <= num) {
			printf("The number is greater than actual number.\n");
		} else {
			printf("The number is lesser than actual number.\n");
		}
	}

	if (i == 9) {
		printf("You lose the game. The correct number is %d.\n", randomNumber);
	}

	printf("Thanks for playing the game.\n");

	return 0;
}


