#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rnd(int range);
void seedrnd(void);

int main() {
    int x;

    seedrnd();
    puts("Behold! 100 Random Numbers!");
    for (x = 0; x < 100; x++) {
        printf("%d\t", rnd(100));
    }
    return 0;
}

int rnd(int range) {
    int r;
    r = rand() % range;
    return r;
}

void seedrnd(void) {
    srand((unsigned)time(NULL));
}

