#include <stdio.h>

int main(){
	char kitty[20];
	printf("what would you like to name your cat?");
	fgets(kitty,sizeof(kitty),stdin);
	printf("%s is a nice name. What else do you have in mind?",kitty);
	return(0);

}
