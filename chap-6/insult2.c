#include <stdio.h>

int main(){
        char jerk[20];
        puts("Name some jerk you know");
        fgets(jerk, sizeof(jerk), stdin);
        printf("Yeah, I think %s is a jerk,too",jerk);
        return(0);


}
