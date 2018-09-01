#include <stdio.h>

int main(int argc, char **argv)
{
	printf("type 3 insults and I will say them to you in reverse!\n\n");
		
	char input[20];
	char input01[20];
	char input02[20];
	scanf("%s", input);
	scanf("%s", input01);
	scanf("%s", input02);
	
	printf("%s ", input02);
	printf("%s ", input01);
	printf("%s asshole\n", input);
	
	return 0;
}
