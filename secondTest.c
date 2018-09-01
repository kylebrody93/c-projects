#include <stdio.h>
int main(int argc, char **argv)
{
	printf("type your first and last name!\n");
	int a,b,c,d,e,f;
	char input[20];
	char input01[20];
	scanf("%s", input);
	scanf("%s", input01);
	printf("hello %s ", input);
	printf("%s. please enter two numbers you would like to multiply.", input01);
	scanf("%d", &a);
	scanf("%d", &b);
	c=a*b;
	printf("%d ", c);
	printf("well %s %s... thats all for now!", input, input01);
	return 0;
}
