//library
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

//- create struct -//
typedef struct {
	int hh, mm, ss;
} jam;

void Tentukan_Jam_PDetik(jam *j, int p) {
	// input/output j: [jam], input p: [integer]
	// -> K.awal:  J terdefinisi (jam sekarang), p terdefinisi
	// -> K.akhir: J adalah jam sekarang setelah ditambah p
	
	//- deklarasi -//
	int totaldetik, sisa;
	
	//- metode -//
    totaldetik = (*j).hh * 3600 + (*j).mm * 60 + (*j).ss + p;
    
    (*j).hh = totaldetik / 3600;
    sisa = totaldetik % 3600;
    (*j).mm = sisa / 60;
    (*j).ss = sisa % 60;
}

int main () {
	//- deklarasi -//
	jam j; // -> use struct
	int totaldetik, sisa, p;
	
	//- masukkan -//
    printf("Masukkan jam [hh:mm:ss]: "); scanf("%d:%d:%d", &j.hh, &j.mm, &j.ss);
    printf("Masukkan Pdetik: "); scanf("%d", &p);
    
    //- metode -//
	Tentukan_Jam_PDetik(&j, p); // -> call fungsi dan ambil value 'j'
    
    //- keluaran -//
    printf("Jam sekarang setelah ditambah %d detik: %d:%d:%d", p, j.hh, j.mm, j.ss);
}
