#include <stdio.h>

int main(){
	char a,b;
	printf("Which character is greater?\n");
	a = getchar();
	printf("Type another characther\n");
	b = getchar();

	if (a > b)
	{
		printf("'%c' is greather than '%c'!\n",a,b);
	}
	else if (b > a)
	{
		printf("'%c' os greater than '%c'!\n",b,a);
	}
	else
	{
		printf("Next time, don't type the same character twice.");
	}
	return(0);
}
