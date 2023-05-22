#include "function.h"

// Fungsi untuk mencetak elemen-elemen dalam Stack
void Print(Stack S) {
    TInfo X; // Deklarasi variabel X untuk menyimpan nilai elemen yang dihapus
    if (EmptyStack(S)) {
        printf("Stack kosong\n"); // Menampilkan pesan jika Stack kosong
    } else {
        while (!EmptyStack(S)) { // Melakukan perulangan selama Stack tidak kosong
            Pop(&S, &X); // Menghapus elemen teratas dari Stack dan menyimpan nilainya dalam variabel X
            printf("Elemen yang dihapus = %d\n", X); // Menampilkan nilai elemen yang dihapus
        }
    }
}

