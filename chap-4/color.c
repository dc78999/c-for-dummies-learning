#include <stdio.h>

int main(){
	char name[20];
	char color[20];

	printf("What is your name\n");
	scanf("%s",name);
	printf("what is your favorite color\n?");
	scanf("%s",color);
	printf("%s' favorite color is %s\n",name,color);
	return(0);
}
