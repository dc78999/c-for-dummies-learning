#include <stdio.h>
#define COUNT 20000000

void dropBomb(void);
void delay(void);

int deaths;

int main(){
	char x;
	deaths = 0;
	for(;;){
	printf("Press Enter to drop the bomb");
	x= getchar();
	fflush(stdin);
	if(x =='~'){
		break;
	}
		dropBomb();
		printf("key code%d used to drop bomb\n",x);
	}
	return 0;

}

void dropBomb(){
	int x;
	for(x = 20; x >1;x--)
	{
		puts("       *");
		delay();
	}
	puts("       Boom!");
	deaths +=1500;
	printf("The number of deaths is %i",deaths);
}

void delay(){
	long int x;
	for(x = 0; x <COUNT; x++);


	}

