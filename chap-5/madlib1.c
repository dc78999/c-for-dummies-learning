/* Madlib1.c source code
 * written by silvia*/

#include <stdio.h>

int main(){
	char adjective[20];
	char food[20];
	char chore[20];
	char furniture[20];

/*Get the words to use in the maddlib*/
	printf("Enter an adjective:");
	scanf("%s",adjective);
	printf("Enter a food:");
	scanf("%s",food);
	printf("Enter a household chore(past tense):");
	scanf("%s",chore);
	printf("Enter a item of furnitune");
	scanf("%s",furniture);
	printf("\n\nDon't touch that %s %s!\n",adjective,food);
	printf("I jusr %s the %s!\n", chore,furniture);
	return 0;
/*Display the output*/
}
