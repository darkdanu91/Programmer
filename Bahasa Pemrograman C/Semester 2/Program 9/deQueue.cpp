#include "function.h"

void DeQueue(antrian *Q, tInfo *X) {
    *X = (*Q).arrQ[(*Q).head];
    if ((*Q).tail == (*Q).head) {
        (*Q).tail = 0;
        (*Q).head = 0;
        return;
    }
    for (int k = 2; k <= (*Q).tail; k++) {
        (*Q).arrQ[k-1] = (*Q).arrQ[k];
    }
    (*Q).tail--;
}


