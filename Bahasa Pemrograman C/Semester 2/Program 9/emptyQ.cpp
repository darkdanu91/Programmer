#include "function.h"

bool emptyQ(antrian Q) {
    return (Q.head == 0 && Q.tail == 0);
}

// Komentar:
// Fungsi untuk memeriksa apakah antrian kosong atau tidak
// Parameter Q adalah antrian yang ingin diperiksa kekosongan
// Antrian dianggap kosong jika head dan tail-nya berada di indeks 0. 
// Jika antrian kosong, fungsi akan mengembalikan nilai true. Jika tidak, mengembalikan false.
