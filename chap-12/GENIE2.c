#include <stdio.h>
#include <stdlib.h>

int main(){
        char num[2];
        int number;

        printf("I am your computer genie!\n");

        printf("Enter a number from 0 to 9");
        fgets(num,sizeof(num),stdin);
        number=atoi(num);
	
        if(number==5){
                printf("That number is 5!\n");
        }

	else if(number<5){
                printf("That number is less thaan 5!\n");
                printf("By goodness, aren't I smart?/n");
        }

	else{
		printf("That number is mmore than 5!]n");
	}

        printf("The genie knows all,see all!\n");
        return 0;


}
