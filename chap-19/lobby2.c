#include <stdio.h>

int main(){
        char c;

        printf("Please make sure your treat selection:\n");
        printf("1. Beverage.\n");
        printf("2. Candy.\n");
        printf("3. Hot dog.\n");
        printf("4. Popcorn.\n");
        printf("Your Choice");

        c=getchar();
	switch(c){
        	case 1:
                	printf("Beverage\nThat will be $8.00\n");
        		break;
		case 2:
                	printf("Candy\nThat will be $5.5\n");
			break;

        	case 3:
                	printf("Hot dog\nThat will be $10.00\n");
        
			break;
		case 4:
                	printf("Popcorn\nThat will be $7.5\n");
			break;
		default:
                printf("That is not a proper selection\n");
                printf("I'll assume you are just not hungry\n");
                printf("Can I help whoever's next?\n");

        }
        return 0;


}
          
