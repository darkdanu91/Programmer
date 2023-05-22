#include "function.h"

void Print(Stack S) {
    TInfo X; //-declare

    if (EmptyStack(S)) {
        printf("Stack kosong\n");
    } else {
        while (!EmptyStack(S)) {
            Pop(&S, &X);
            printf("Elemen yang dihapus = %d\n", X);
        }

    }
}
