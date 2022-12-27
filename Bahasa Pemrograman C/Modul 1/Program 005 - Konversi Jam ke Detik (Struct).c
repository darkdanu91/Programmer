//library
#include <stdio.h>
#include <conio.h>

//- create struct -//
typedef struct {
	int hh, mm, ss;
} jam;

int main() {
	//- judul -//
    printf("Program - Konversi Jam ke Detik");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
	
	//- deklarasi -//
	jam j; // -> use struct
	int totaldetik;
	
	//- masukkan -//
	printf("Masukkan jam [hh:mm:ss]: "); scanf("%d:%d:%d", &j.hh, &j.mm, &j.ss);
	
	//- metode -//
	totaldetik = j.hh * 3600 + j.mm * 60 + j.ss;
	
	//- keluaran -//
	printf("\n"); // -> enter
	printf("Total detik: %d detik", totaldetik);
	getch();
}
