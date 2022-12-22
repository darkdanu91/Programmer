//library
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

//struct
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

void Jika_Jam12(jam *j) {
	// -> fix bug di jam 12 malam
	
	if((*j).hh == 24) {
		(*j).hh = 0;
	}
	
	else if((*j).hh > 24) {
		(*j).hh = (*j).hh % 24;
	}
}
