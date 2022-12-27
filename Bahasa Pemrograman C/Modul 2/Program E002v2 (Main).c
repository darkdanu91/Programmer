//library
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

//library fungsi
#include "Program S2E2 Variasi 2 - Fungsi.c"
void Tentukan_Jam_PDetik(jam *j, int p);

int main () {	
	//- judul -//
    printf("Program - Membaca Masukkan Jam Tambah Pdetik");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
	
	//- deklarasi -//
	jam j; // -> use struct
	int totaldetik, sisa, p;
	
	//- masukkan -//
    printf("Masukkan jam [hh:mm:ss]: "); scanf("%d:%d:%d", &j.hh, &j.mm, &j.ss);
    printf("Masukkan Pdetik: "); scanf("%d", &p);
    
    //- metode -//
	Tentukan_Jam_PDetik(&j, p); // -> call prosedur dan ambil value 'j'
	Jika_Jam12(&j); // -> call prosedur untuk fix bug di jam 12 malam
    
    //- keluaran -//
    printf("\nJam sekarang setelah ditambah %d detik: %d:%d:%d", p, j.hh, j.mm, j.ss);
}
