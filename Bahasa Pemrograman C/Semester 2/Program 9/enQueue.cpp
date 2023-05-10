#include "function.h"

void enQueue(antrian *Q, tInfo X) {
    if (emptyQ(*Q)) {
        (*Q).head = 1;
        (*Q).tail = 1;
        (*Q).arrQ[(*Q).tail] = X;
    } else if ((*Q).tail < nMax) {
        (*Q).tail++;
        (*Q).arrQ[(*Q).tail] = X;
    } else {
        printf("overflow\n");
    }
}

// Komentar:
// Prosedur untuk menambahkan elemen baru pada antrian
// Parameter Q adalah antrian yang akan ditambahkan elemen baru
// Parameter X adalah elemen yang akan ditambahkan pada antrian
// Jika antrian kosong, elemen X akan ditambahkan pada indeks head dan tail antrian
// Jika tail antrian masih kurang dari nMax, elemen X akan ditambahkan pada tail antrian
// Jika tail antrian sudah sama dengan nMax, maka antrian sudah penuh (overflow), sehingga tidak bisa menambahkan elemen baru.
