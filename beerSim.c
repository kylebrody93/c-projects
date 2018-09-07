#include <stdio.h>

int main(void)
{	
	int choice1;
	int another;
	int onemore;
	start:
	printf("Bartender: \"Pick your Poison\"\n\n 1.bud light 2. odouls\n\n enter a number and press ENTER\n\n");
	scanf("%d", &choice1);
		if (choice1 == 1){
			printf("mmm a delicious blue tasty... the smell alone takes you back... another?\n\n");
			printf("1. toss another back... 2. that's all for now\n\n");
			scanf("%d", &another);
			if (another == 1){
				printf ("you toss another back and it is DEEEEELICIOUS... how about one more for the road partner?\n\n 1. hell yeah");
				scanf("%d", &onemore);
				
				if(onemore == 1){
					printf("woah buddy... you dont look so good... im gonna have to cut you off!");
					goto start;
				}
			}
				else if(another == 2){
					printf("alright then light weight!\n\n");
					goto start;
				}
		}
			else if (choice1 == 2){
				printf("you drink the o'douls and feel nothing\n\n");
				goto start;
			}
		
		
	
	return 0;
