#include <stdio.h>
#include <stdlib.h>

int main(){
	char weight[4];
	int w;

	printf("Enter your weight:");
	fgets(weight, sizeof(weight),stdin);
        w = atoi(weight);

        printf("Here is what you weigh now:%i\n",w);
        w++;
        printf("Your weight after the mutton:%i\n",w);
        w++;
        printf("Here is your weight after potatoes:%i\n",w);
        w = w + 8;
        printf("And your weight after dessert:%i\n",w);
        printf("Lardo!\n");
        return(0);



}
