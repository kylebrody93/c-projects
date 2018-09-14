#include <stdio.h>

#define TRUE 1
#define FALSE 0

int process( int playerTwoGuess, int playerOneNumber );

int main(void)
{
	int playerTwoGuess, playerOneNumber, correct;
	
	correct = FALSE;
	
	printf("Player 1... Please enter a number between 1 and 100: \n\n");
	scanf("%d", &playerOneNumber);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	while ( correct == FALSE ) {
		printf( "Try to guess it now. \n\n");
		scanf( "%d", &playerTwoGuess );
		correct = process( playerTwoGuess, playerOneNumber );
	}
	return 0;
}

int process( int playerTwoGuess, int playerOneNumber ){
	if ( playerTwoGuess < playerOneNumber )
		printf( "Too Low!\n");
	else if ( playerTwoGuess > playerOneNumber)
		printf( "Too high!" );
		else {
			printf("you guessed it!\n");
			return TRUE;
		}
		return FALSE;
}
