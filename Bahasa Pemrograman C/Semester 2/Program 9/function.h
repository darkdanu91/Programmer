// Header
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Nilai Konstan
const int nMax = 5; // ukuran maksimal array

// Tipe Data Baru
typedef int tInfo; // tipe data: elemen antrian
typedef int address; // tipe data: indeks antrian

typedef struct {
    address head; // indeks kepala antrian
    address tail; // indeks ekor antrian
    tInfo arrQ[nMax]; // panjang antrian
} antrian; // tipe data: antrian

// Prosedur
void createQ(antrian *Q); // membuat antrian kosong
void enQueue(antrian *Q, tInfo X); // memasukkan elemen ke antrian
void DeQueue(antrian *Q, tInfo *X); // mengeluarkan elemen dari antrian
void printQ(antrian Q); // mencetak seluruh elemen antrian

// Fungsi
bool emptyQ(antrian Q); // memeriksa apakah antrian kosong
