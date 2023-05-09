#include "function.h"

void enQueue(antrian *Q, tInfo X) {
    if (emptyQ(*Q)) {
        (*Q).head = 1;
        (*Q).tail = 1;
        (*Q).arrQ[(*Q).tail] = X;
    } else if ((*Q).tail < nMax) {
        (*Q).tail++;
        (*Q).arrQ[(*Q).tail] = X;
    } else {
        printf("overflow\n");
    }
}
