//library
#include <stdio.h>
#include <conio.h>

//- create struct -//
typedef struct {
	int hh, mm, ss;
} jam;

int main() {
	//- judul -//
    printf("Program - Konversi Detik ke Jam");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
	
	//- deklarasi -//
	jam j; // -> use struct
	int totaldetik, sisa;
	
	//- masukkan -//
	printf("Masukkan total detik: "); scanf("%d",&totaldetik);
  
	//- metode -//
	j.hh = totaldetik / 3600;
	sisa = totaldetik % 3600;
	j.mm = sisa / 60;
	j.ss = sisa % 60;
	
	//- keluaran -//
	printf("\n"); // -> enter
	printf("Konversi jam [hh:mm:ss]: %d:%d:%d", j.hh, j.mm, j.ss);
	getch();
}
