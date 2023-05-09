#include "function.h"

void printQ(antrian Q) {
    if (emptyQ(Q)) {
        printf("Antrian kosong\n");
        return;
    }

    tInfo X;
    while (!emptyQ(Q)) {
        DeQueue(&Q, &X);
        printf("%d ", X);
    }
}
