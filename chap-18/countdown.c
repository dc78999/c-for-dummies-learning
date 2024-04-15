#include <stdio.h>

int main(){
	int start;
	while(start <1 || start >100){
	printf("Please provide me a number to start\n");
	printf("the count from 1 to 100");
	scanf("%d",&start);}

	do{
		printf("T-minus %d\n",start);
		start--;
	
	}
	while(start >=1);

	printf("Zero!\nB;ast off!\n");
	return(0);

}
