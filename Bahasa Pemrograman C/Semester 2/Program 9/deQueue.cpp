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

// Komentar:
// Fungsi untuk menghapus elemen pertama dari antrian
// Parameter Q adalah antrian yang akan dihapus elemennya
// Parameter X adalah elemen yang dihapus
// Elemen yang dihapus adalah elemen pertama pada antrian (head)
// Jika antrian kosong (head == tail), maka kedua pointer diatur ke 0
// Jika antrian tidak kosong, elemen pada indeks 2 hingga tail digeser ke kiri
// tail dikurangi 1 agar menunjuk ke elemen terakhir pada antrian yang baru.
