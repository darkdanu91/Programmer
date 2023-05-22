#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define info(p) (p)->info
#define next(p) (p)->next

const int NMax = 5;
typedef int TInfo;
typedef int Address;

typedef struct {
    Address Top;
    TInfo ArrStack[NMax+1];
} Stack;

// prosedur
void CreateStack(Stack *S);
bool EmptyStack(Stack S);
void Push(Stack *S, TInfo X);
void Pop(Stack *S, TInfo *X);
void Print(Stack S);

// fungsi
bool Finished(int Choice);


