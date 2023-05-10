#include "function.h"

void createQ(antrian *Q) {
    (*Q).head = 0;
    (*Q).tail = 0;
}

// Komentar:
// Prosedur untuk membuat antrian kosong
// Parameter Q adalah pointer ke antrian yang ingin dibuat kosong
// Head dan tail diatur ke 0, menunjukkan antrian kosong.
