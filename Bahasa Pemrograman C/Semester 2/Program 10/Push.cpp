#include "function.h"

void Push(Stack *S, TInfo X) {
    if ((*S).Top < NMax) {
        (*S).Top += 1; // (*S).Top = (*S).Top + 1
        (*S).ArrStack[(*S).Top] = X;
    } else {
        printf("overflow\n");
    }
}
