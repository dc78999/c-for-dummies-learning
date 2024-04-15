#include <stdio.h>

int main(){
	char key;

	printf("Press a key:");
	key = getchar();
	printf("Your pressed thr'%c' key\n",key);
	printf("Its ASCII value is %d.\n",key);

	return 0;

}
