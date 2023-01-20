#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int param = -1;
    if(argc > 1) {
        param = atoi(argv[1]);
    }
    int max;
    int step;
    if (param != -1) {
        max = param;
        step = 1;
    } else {
        max = 1;
        step = 0;
    }
    for(int j = 0; j < max; j += step) {
        int m = rand() % 10 + 2;
        int acc = 0;
        for(int i= 0; i < m; i++) {
            int term = rand() % 1000 + 1;
            printf("%d", term);
            acc += term;
        }
        printf("=%d\n", acc);
    }
}
