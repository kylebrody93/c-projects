/* THIS code is for a simple calculator to be used in the console. It can continually add, subtract, multiply, and divide.
  Made for my own learning purposes.*/
#include <stdio.h>

#include <stdio.h>

int main(void)
{
	//declaring variables for the user to decide on.
	
	int num1;
	int num2;
	//operation will determine wether the user will add, subtract, multiply, or divide
	
	int operation;
	
	//result will equal the result of the operation
	
	int result;
	
		printf("enter a number: \n\n");
		scanf("%d", &num1);
		
		//--- user picks their intended operation ---
		
		printf("1- add 2- subtract 3- multiply 4- divide \n\n");
		scanf("%d", &operation);
			
		
		
		printf("enter your second number: \n\n");
		scanf("%d", &num2);
		
		//result is determined by the chosen operation
		
			if(operation == 1){
				result=num1+num2;
				printf("%d \n\n", result);
			}
			else if(operation == 2){
					result=num1-num2;
					printf("%d \n\n", result);
				}
				
			else if(operation == 3){
					result=num1*num2;
					printf("%d \n\n", result);
				}
							
			else if(operation == 4){
					result=num1/num2;
					printf("%d \n\n", result);
				}
									
		//here the user can continue to work with their first result. I used an infinite for loop to continue the MATH
		
	for( ; ; ) {	
				
			printf("1- add 2- subtract 3- multiply 4- divide\n\n");
			scanf("%d", &operation);
			
			printf("enter a number: \n\n");
			scanf("%d", &num2);
			//this time the math will use the original result to return a new value for the result variable
			if(operation == 1){
				result=result+num2;
				printf("%d \n\n", result);
			}
			else if(operation == 2){
					result=result-num2;
					printf("%d \n\n", result);
			}
				
			else if(operation == 3){
				result=result*num2;
				printf("%d \n\n", result);
			}
				
			else if(operation == 4){
				result=result/num2;
				printf("%d \n\n", result);
			}
 
									
	}
	return 0;
}	
