#include <stdio.h>
int main(){
	char c,d;

	printf("Enter the character code for self-destruct?");
	c = getchar();
	while (getchar() != '\n');

	printf("Input number code to confirm self-destruct?");
	d = getchar();

	if (c == 'G' && d == '0')
	{
		printf("Auto DESTRUCT ENABLED!\n");
		printf("Bye!\n");
	}
	else 
	{
		printf("Okay,When!");
	}

	return(0);
}
