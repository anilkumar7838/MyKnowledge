// Anilkumar (2020UCD2101)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	int magic_number = (rand()%100)+1;
	int guess;

	printf("Give your guess(1 to 100) for the magic number: ");
	scanf("%d", &guess);
	(magic_number == guess) ? printf("You guessed the number correctly"): printf("Incorrect, correct number was %d", magic_number);

	return 0;
}
