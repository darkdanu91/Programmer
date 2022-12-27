//- Program Jam Hidup -//

//library
#include <stdio.h>
#include <conio.h>

//- create struct -//
typedef struct {
	int hh, mm, ss;
} jam;

void Tambah_1_Detik(jam *j) {
	//-> input/output j: [jam]
	//-> case    : menentukan jam setelah ditambah 1 detik
	//-> K.awal  : J terdefinisi (jam sekarang), p terdefinisi
	//-> K.akhir : J adalah jam sekarang setelah ditambah p
	
	//- deklarasi -//
	int totaldetik, sisa;
	const int p = 1;
	
	//- konversi ke detik -//
    totaldetik = (*j).hh * 3600 + (*j).mm * 60 + (*j).ss + p;
    
    //- kembalikan ke jam -//
    (*j).hh = totaldetik / 3600;
    sisa = totaldetik % 3600;
    (*j).mm = sisa / 60;
    (*j).ss = sisa % 60;
    
    //- percabangan ternary -//
    //-> untuk mem-fix bug [23:59:59]
    (*j).hh >= 24 ? (*j).hh %= 24 : (*j).hh;
}

int main() {
	//- judul -//
    printf("Program - Jam Hidup\n");
    printf("-----------------------\n\n");
    
	//- deklarasi -//
	jam j; // -> use struct
	
	//- masukan -//
    printf("Masukan jam sekarang [hh:mm:ss]: "); scanf("%d:%d:%d", &j.hh, &j.mm, &j.ss);    

    //- call fungsi -//
	Tambah_1_Detik(&j);
    
    //- keluaran -//
    printf("Jam setelah ditambah 1 detik: %d:%d:%d", j.hh, j.mm, j.ss);
}
