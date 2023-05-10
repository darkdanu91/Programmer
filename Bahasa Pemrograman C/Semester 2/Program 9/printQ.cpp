#include "function.h"

// Fungsi untuk mencetak isi antrian Q ke layar
void printQ(antrian Q) {
    // Cek apakah antrian kosong
    if (emptyQ(Q)) {
        printf("Antrian kosong\n"); // jika iya, cetak "antrian kosong"
        return; // kembalikan
    }

    tInfo X; // deklarasi
    while (!emptyQ(Q)) {
        DeQueue(&Q, &X); // Dequeue elemen dari antrian
        printf("%d ", X); // Cetak elemen yang di-dequeue
    }
}
