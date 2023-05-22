#include "function.h"

// Fungsi untuk menambahkan elemen ke Stack (Push)
void Push(Stack *S, TInfo X) {
    if ((*S).Top < NMax) {
        (*S).Top += 1; // Menaikkan nilai Top sebesar 1 untuk menunjukkan posisi baru elemen teratas
        (*S).ArrStack[(*S).Top] = X; // Menyimpan nilai X pada posisi elemen teratas dalam Array Stack
    } else {
        printf("overflow\n"); // Menampilkan pesan overflow jika Stack penuh
    }
}

