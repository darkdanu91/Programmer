#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int NMax = 5; // Konstanta untuk ukuran maksimum Stack
typedef int TInfo; // Tipe data untuk elemen Stack
typedef int Address; // Tipe data untuk alamat Stack

typedef struct {
    Address Top; // Indeks dari elemen teratas Stack
    TInfo ArrStack[NMax+1]; // Array untuk menyimpan elemen-elemen Stack
} Stack;

// prosedur-prosedur
void CreateStack(Stack *S); // Prosedur untuk menginisialisasi Stack
bool EmptyStack(Stack S); // Fungsi untuk memeriksa apakah Stack kosong
void Push(Stack *S, TInfo X); // Prosedur untuk menambahkan elemen ke Stack
void Pop(Stack *S, TInfo *X); // Prosedur untuk menghapus elemen teratas dari Stack
void Print(Stack S); // Prosedur untuk mencetak elemen-elemen dalam Stack

// fungsi
bool Finished(int Choice); // Fungsi untuk memeriksa apakah program selesai
