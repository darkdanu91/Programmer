#include "function.h"

// Fungsi untuk mengambil elemen teratas dari Stack (Pop)
void Pop(Stack *S, TInfo *X) {
    *X = (*S).ArrStack[(*S).Top]; // Menyimpan nilai elemen teratas dalam variabel X
    (*S).Top -= 1; // Mengurangi nilai Top sebesar 1 untuk menggeser ke posisi elemen berikutnya
}

