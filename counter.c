#include <stdio.h>

int main(void)
{	
	int countby;
	int count;
	int LAST;
	printf("how many numbers do you want to count to between 1 and 10? Enter a number: \n");
	scanf("%d", &LAST);
	printf("how do you want to count? by 1, 2's, 3's, or 5's?");
	scanf("%d", &countby);
	
	if(LAST == 2 && countby == 1){
		for (count=1; count<LAST; count++ )
			printf("%d", count);
	}
			else
				if(LAST == 2 && countby ==2){
					for (count=0; count<LAST;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 2 && countby ==3){
					for (count=0; count<LAST;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 2 && countby ==5){
						for (count=0; count<LAST;)
							printf("%d\n", count += 5);
					}
	
	if(LAST == 3 && countby ==1){
		for (count=1; count<LAST; count++ )
			printf("%d", count);
	}
			else
				if(LAST == 3 && countby ==2){
					for (count=0; count<LAST;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 3 && countby ==3){
					for (count=0; count< LAST;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 3 && countby ==5){
						for (count=0; count<LAST;)
							printf("%d\n", count += 5);
					}
	if(LAST == 4 && countby == 1){
		for (count=1; count<LAST; count++ )
			printf("%d", count);
	}
			else
				if(LAST == 4 && countby ==2){
					for (count=0; count<LAST;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 4 && countby ==3){
					for (count=0; count<LAST;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 4 && countby ==5){
						for (count=0; count<LAST;)
							printf("%d\n", count += 5);
					}
	if(LAST == 5 && countby ==1){
		for (count=1; count<LAST; count++ )
			printf("%d", count);
	}
			else
				if(LAST == 5 && countby ==2){
					for (count=0; count<LAST;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 5 && countby ==3){
					for (count=0; count<LAST;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 5 && countby ==5){
						for (count=0; count<LAST;)
							printf("%d\n", count += 5);
					}
	if(LAST == 6 && countby ==1){
		for (count=1; count<LAST; count++ )
			printf("%d", count);
	}
			else
				if(LAST == 6 && countby ==2){
					for (count=0; count<LAST;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 6 && countby ==3){
					for (count=0; count<LAST;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 6 && countby ==5){
						for (count=0; count<LAST;)
							printf("%d\n", count += 5);
					}
	if(LAST == 7 && countby ==1){
		for (count=1; count<LAST; count++ )
			printf("%d", count);
	}
			else
				if(LAST == 7 && countby ==2){
					for (count=0; count<LAST;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 7 && countby ==3){
					for (count=0; count<LAST;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 7 && countby ==5){
						for (count=0; count<LAST;)
							printf("%d\n", count += 5);
					}
	
	
	if(LAST == 8 && countby ==1 ){
		for (count=1; count<LAST; count++ )
			printf("%d", count);
	}
			else
				if(LAST == 8 && countby ==2){
					for (count=0; count<LAST;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 8 && countby ==3){
					for (count=0; count<LAST;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 8 && countby ==5){
						for (count=0; count<LAST;)
							printf("%d\n", count += 5);
					}
	if(LAST == 9 && countby == 1){
		for (count=1; count<LAST; count++ )
			printf("%d", count);
	}
			else
				if(LAST == 9 && countby ==2){
					for (count=0; count<LAST;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 9 && countby ==3){
					for (count=0; count<LAST;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 9 && countby ==5){
						for (count=0; count<LAST;)
							printf("%d\n", count += 5);
					}
	
	if(LAST == 10 && countby == 1){
		for (count=1; count<LAST; count++ )
			printf("%d", count);
	}
			else
				if(LAST == 10 && countby ==2){
					for (count=0; count<LAST;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 10 && countby ==3){
					for (count=0; count<LAST;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 10 && countby ==5){
						for (count=0; count<LAST;)
							printf("%d\n", count += 5);
					}
		
	return 0;
}
