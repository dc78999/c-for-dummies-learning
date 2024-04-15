#include <stdio.h>
#include <stdlib.h>

int main(){
	int diff;
	int methus;
	int you;
	char year[8];

	printf("How old are you ?");
	fgets(year,sizeof(year),stdin);
	you = atoi(year);

	methus =969;
	diff = methus - you;
	printf("you are %d year younger than Methuselah.\n", diff);
	return(0);

}
