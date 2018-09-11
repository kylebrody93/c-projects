#include <stdio.h>

int main(void)
{	
	//--Declaring my variables. countby = what the user will decide to count by, i.e. 1's, 2's, 3's etc.
	int countby;
	//-- count = the variable that determines the current count, starting at 0
	int count;
	//-- LAST = the variable for the number that the counter will stop at. represents the number of times the user wants the program to count.
	int LAST;

for( ; ;) {
	//-- asks how many times the user wants to count
	printf("how many times do you want to count? 1 to 10... Enter a number between 1 and 10: \n");
	//-- scans for user input to determine how many times the program will count
	scanf("%d", &LAST);
	//-- asks what the user wants to count by
	printf("how do you want to count? by 1, 2's, 3's, or 5's?");
	//--scans for user input to determine what to count by
	scanf("%d", &countby);
	
	//-- this tree begins if the user wants to count two times
	if(LAST == 2 && countby == 1){
		for (count=0; count<LAST ;)
			printf("%d\n\n", count += 1);
	}
			//--this else if counts by two twice
			else
				if(LAST == 2 && countby ==2){
					for (count=0; count<2*LAST ;)
						printf("%d\n", count += 2);
				}
				//--this else if counts by three twice
				else
				if(LAST == 2 && countby ==3){
					for (count=0; count<3*LAST ;)
						printf("%d\n", count += 3); 
				}
				//--this else if counts by five twice
						else
							if(LAST == 2 && countby ==5){
								for (count=0; count<5*LAST ;)
									printf("%d\n", count += 5);
							}
	//-- this tree begins if the user wants to count three times
	if(LAST == 3 && countby ==1){
		for (count=0; count<LAST ;)
			printf("%d\n", count += 1);
	}
	//--this else if counts by two thrice
			else
				if(LAST == 3 && countby ==2){
					for (count=0; count<2*LAST ;)
						printf("%d\n", count += 2);
				}
				//--this else if counts by three thrice
				else
				if(LAST == 3 && countby ==3){
					for (count=0; count< 3*LAST ;)
						printf("%d\n", count += 3); 
				}
				//--this else if counts by four thrice
				else
					if(LAST == 3 && countby ==5){
						for (count=0; count<5*LAST ;)
							printf("%d\n", count += 5);
					}
					
	//-- this tree begins if the user wants to count four times				
	if(LAST == 4 && countby == 1){
		for (count=0; count<LAST ;)
			printf("%d\n", count += 1);
	}
			//--this else if counts by two four times
			else
				if(LAST == 4 && countby ==2){
					for (count=0; count<2*LAST ;)
						printf("%d\n", count += 2);
				}
				//--this else if counts by three four times
				else
				if(LAST == 4 && countby ==3){
					for (count=0; count<3*LAST ;)
						printf("%d\n", count += 3); 
				}
				//--this else if counts by five four times
						else
					if(LAST == 4 && countby ==5){
						for (count=0; count<5*LAST ;)
							printf("%d\n", count += 5);
					}
					
	//-- this tree begins if the user wants to count five times				
	if(LAST == 5 && countby == 1){
		for (count=0; count<LAST ;)
			printf("%d\n", count += 1);
	}
			//--this else if counts by two five times
			else
				if(LAST == 5 && countby ==2){
					for (count=0; count<2*LAST ;)
						printf("%d\n", count += 2);
				}
				//--this else if counts by three five times
				else
					if(LAST == 5 && countby ==3){
						for (count=0; count<3*LAST ;)
							printf("%d\n", count += 3); 
					}
					//--this else if counts by five five times
					else
						if(LAST == 5 && countby ==5){
							for (count=0; count<5*LAST ;)
								printf("%d\n", count += 5);
						}
					
	//-- this tree begins if the user wants to count six times				
	if(LAST == 6 && countby ==1){
		for (count=0; count<LAST ;)
			printf("%d\n", count += 1);
	}
			else
				if(LAST == 6 && countby ==2){
					for (count=0; count<2*LAST ;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 6 && countby ==3){
					for (count=0; count<3*LAST ;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 6 && countby ==5){
						for (count=0; count<5*LAST ;)
							printf("%d\n", count += 5);
					}
					
	//-- this tree begins if the user wants to count seven times				
	if(LAST == 7 && countby ==1){
		for (count=0; count<LAST ;)
			printf("%d\n", count += 1);
	}
			else
				if(LAST == 7 && countby ==2){
					for (count=0; count<2*LAST ;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 7 && countby ==3){
					for (count=0; count<3*LAST ;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 7 && countby ==5){
						for (count=0; count<5*LAST ;)
							printf("%d\n", count += 5);
					}
	
	//-- this tree begins if the user wants to count eight times
	if(LAST == 8 && countby ==1 ){
		for (count=0; count<LAST ;)
			printf("%d\n", count += 1);
	}
			else
				if(LAST == 8 && countby ==2){
					for (count=0; count<2*LAST ;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 8 && countby ==3){
					for (count=0; count<3*LAST ;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 8 && countby ==5){
						for (count=0; count<5*LAST ;)
							printf("%d\n", count += 5);
					}
					
	//-- this tree begins if the user wants to count nine times				
	if(LAST == 9 && countby == 1){
		for (count=0; count<LAST ;)
			printf("%d\n", count += 1);
	}
			else
				if(LAST == 9 && countby ==2){
					for (count=0; count<2*LAST ;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 9 && countby ==3){
					for (count=0; count<3*LAST ;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 9 && countby ==5){
						for (count=0; count<5*LAST ;)
							printf("%d\n", count += 5);
					}
	
	//-- this tree begins if the user wants to count ten times
	if(LAST == 10 && countby == 1){
		for (count=0; count<LAST ;)
			printf("%d\n", count += 1);
	}
			else
				if(LAST == 10 && countby ==2){
					for (count=0; count<2*LAST ;)
						printf("%d\n", count += 2);
				}
				else
				if(LAST == 10 && countby ==3){
					for (count=0; count<3*LAST ;)
						printf("%d\n", count += 3); 
				}
						else
					if(LAST == 10 && countby ==5){
						for (count=0; count<5*LAST ;)
							printf("%d\n", count += 5);
} }
		
	return 0;
}

