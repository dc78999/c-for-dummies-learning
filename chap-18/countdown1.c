#include <stdio.h>

int main(){
	int start;
	long delay;

	do{
	printf("Please provide me a number to start");
	printf("the count from 1 to 100");
	scanf("%d",&start);
	}while(start<1 || start>100);

	do{
		printf("T minus %d\n",start);
		start--;
		for(delay=0;delay<100000;delay++);
	}
	while(start>0);
	
	
	printf("Zero!\n Blast off!\n");
	return(0);


}
