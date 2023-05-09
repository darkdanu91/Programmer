#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int nMax = 5;
typedef int tInfo;
typedef int address;

typedef struct {
    address head;
    address tail;
    tInfo arrQ[nMax];
} antrian;

void createQ(antrian *Q);
bool emptyQ(antrian Q);
void enQueue(antrian *Q, tInfo X);
void DeQueue(antrian *Q, tInfo *X);
void printQ(antrian Q);
