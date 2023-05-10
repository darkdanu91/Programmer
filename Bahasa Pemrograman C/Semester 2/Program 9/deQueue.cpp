#include "function.h"

void deQueue(antrian *Q, tInfo *X) {
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

/*
Komentar:
Fungsi ini dapat dijelaskan dengan analogi seperti mengambil buku pertama dari tumpukan buku.

Kita pertama-tama mengecek apakah tumpukan buku kosong atau tidak.
Jika kosong, maka tidak ada buku yang bisa diambil.
Namun jika tidak kosong, kita mengambil buku paling atas atau buku pertama dari tumpukan tersebut, lalu menggeser semua buku ke bawah satu per satu.
Setelah itu, kita menandai bahwa buku paling bawah sudah diambil dengan mengurangi jumlah buku pada tumpukan.

*/


