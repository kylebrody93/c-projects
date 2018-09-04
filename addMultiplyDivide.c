
#include <stdio.h>
int main(void)
{	
	int a;
	//main is label for "goto" at the end of the script 
	main:
	printf("What would you like to do? 1. add 2. multiply 3. divide. \n");
	scanf("%d", &a);
	//if the user enters "1" they can add
		if (a == 1){
			printf("enter two numbers you would like to add, then press enter:  \n");
			int b, c, d;
			scanf("%d", &b);
			scanf("%d", &c);
			d=b+c;
			printf("%d \n", d);
		}
	//if the user enters "2" they can multiply
		if (a == 2){
			printf("enter two numbers you would like to multiply, then press enter: \n ");
			int e, f, g;
			scanf("%d", &e);
			scanf("%d", &f);
			g=e*f;
			printf("%d \n\n", g);
		}
	//if the user enters"3" they can divide
		if (a == 3){
			printf("enter two numbers you would like to divide, then press enter: \n");
			int h, i, j;
			scanf("%d", &h);
			scanf("%d", &i);
			j=h/i;
			printf("%d \n\n", j);
		}
		//if the user enters an invalid # when prompted, i.e. '5'
		else{
			printf("error. you must enter 1, 2, or 3... \n\n");
		}
	//loops the script
	goto main;
	return 0;
}
