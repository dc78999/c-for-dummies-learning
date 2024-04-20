#include <stdio.h>

int main()
{
	char c; 

	printf("Would you like your computer to explode?");
	c = getchar();
	if (c =='Y'|| c == 'y'){
		printf("Okay: Configuring computer to explode now\n");
		printf("BYE");
	}
	else
	{	
		printf("Okay,When!!\n");
	}

	return 0;

}
