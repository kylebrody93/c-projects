//THIS is a small console based text game based around a trip to the bar... a work in progress just for fun
#include <stdio.h>

int main(void)
{	
	//--choice1 is the players initial choice. another allows them to continue drinking.
	int choice1;
	int another;
	//this for loop keeps the program going once one decision tree has ended
	for( ; ; ) {
		
	printf("Bartender: \"Pick your Poison\"\n\n1.bud light \n\n2. o'douls\n\n3.IPA\n\n4.ROOT BEER!\n\n5.water\n\nenter a number and press ENTER\n\n");
	scanf("%d", &choice1);
		if (choice1 == 1){
	//--asking the user if they would like another bud--
			printf("mmm a delicious blue tasty... the smell alone takes you back... another?\n\n");
			printf("1. toss another back... 2. that's all for now\n\n");
			scanf("%d", &another);
			if (another == 1){
				printf ("you toss another back and it is DEEEEELICIOUS... how about one more for the road partner?\n\n 1. hell yeah");
				scanf("%d", &another);
				
				if(another == 1){
					printf("woah buddy... you dont look so good... im gonna have to cut you off!\n\n");
					printf("--------------------------------------------------------------------------\n\n");
					
				}
			}
				else 
					if(another == 2){
					printf("alright then light weight!\n\n");
					printf("--------------------------------\n\n");
					} }
		
		if (choice1 == 2){
			printf("you drink the o'douls and feel nothing\n\n");
	//--asking the user if they would like another o'douls--
			printf("one more O'douls?\n\n 1. mmmhmm... 2. No thanks\n\n");
			scanf("%d", &another);
			if (another == 1){
				printf("hmm maybe there's something to this o'douls... you toss another back and start to catch a buzz...\n\n");
				printf("----------------------------------------------------------------------------------------------------------\n\n");
			}
				else 
					if (another ==2 ){
					printf("suit yourself\n\n");
					printf("---------------------\n\n");
					} }
					
		if (choice1 == 3){
			printf("you dont really like how these taste but you want to look cool, so you power through this bitter beer...\n\n");
			printf("another? 1. Yeah 2. Yuck\n\n");
			scanf("%d", &another);
			if (another == 1){
				printf("you finish the beer. you're tipsy and you need a tums because you have acid reflux... hope it was worth it\n\n");
				printf("------------------------------------------------------------------------------------------------------------------\n\n");
			}
				else
					if (another == 2){
					printf("thats probably a wise decision...\n\n");
					printf("-----------------------------------------\n\n");
					} }
		
		if( choice1 == 4){
			printf("root beer is a delicious treat! YEAH!! antother?\n\n");
			printf("1. yup 2. nope\n\n");
			scanf("%d", &another);
			if (another == 1){
				printf("good going idiot... you have a cavity\n\n");
				printf("---------------------------------------------\n\n");
			}
			else
				if (another == 2){
					printf("what? are you on some kind of diet?\n\n");
					printf("------------------------------------------\n\n");
					} }
		
		if (choice1 == 5){
			printf("That'll quench your thirst!! one more round??\n\n");
			printf("1. don't mind if I do! 2. NO way brother\n\n");
			scanf("%d", &another);
			if (another == 1){
				printf("you are super hydrated\n\n");
				printf("-------------------------\n\n");
			}
			else
				if(another == 2){
					printf("you go off to pee and its super yellow...\n\n");
					printf("---------------------------------------------\n\n");
					} }
		
		}
		
	return 0;
}

