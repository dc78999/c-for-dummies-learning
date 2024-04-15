#include<stdio.h>

int main(){
	puts("Start");
	puts("Press ~ then enter to stop");

	while(getchar() != '~');
	printf("Thanks!\n");
	return 0;

}
