#include<stdio.h>
#include<stdlib.h>

int main(){
	int tax1,tax2;
	char height[4], temp[4], favnum[5];

	printf("Enter your height in inches:");
	fgets(height,sizeof(height),stdin);
	printf("What temperature is it outside");
	fgets(temp,sizeof(temp),stdin);
	printf("Enter your favorite number");
	fgets(favnum,sizeof(favnum),stdin);

	tax1 = atoi(height)*atoi(favnum);
	tax2 = atoi(temp)*atoi(favnum);

	if(tax1>tax2){
		printf("Your owe $%d in taxes.\n",tax1*10);
	
	}
	else{
		printf("You owe $%d in taxes.\n", tax2*10);
	
	}
	return 0;


}
