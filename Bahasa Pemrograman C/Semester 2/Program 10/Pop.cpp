#include "function.h"

void Pop(Stack *S, TInfo *X) {
    *X = (*S).ArrStack[(*S).Top];
    (*S).Top -= 1; // (*S).Top = (*S).Top - 1
}
