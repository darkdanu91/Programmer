//library
#include <stdio.h>
#include <conio.h>

//- create struct -//
typedef struct {
	int hh, mm, ss;
} jam;

int main() {
	//- judul -//
    printf("Program - Selisih Jam");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
	
	//- deklarasi -//
	jam j1, j2, j3; // -> use struct
	int totaldetik1, totaldetik2, selisihdetik, sisa;
	
	//- masukkan -//
	printf("masukkan jam pertama [hh:mm:ss]: "); scanf("%d:%d:%d", &j1.hh, &j1.mm, &j1.ss);
	printf("masukkan jam kedua [hh:mm:ss]: "); scanf("%d:%d:%d", &j2.hh, &j2.mm, &j2.ss);
  
	//- metode -//
	totaldetik1 = j1.hh * 3600 + j1.mm * 60 + j1.ss;
	totaldetik2 = j2.hh * 3600 + j2.mm * 60 + j2.ss;
	
	selisihdetik = (totaldetik1 < totaldetik2) ?  totaldetik2 - totaldetik1 :  totaldetik1 - totaldetik2; // -> ternary (if)
	
	j3.hh = selisihdetik / 3600;
	sisa = selisihdetik % 3600;
	j3.mm = sisa / 60;
	j3.ss = sisa % 60;
  
	//- keluaran -//
	printf("\n"); // -> enter
	printf("selisih jam: %d:%d:%d", j3.hh, j3.mm, j3.ss);
	getch();
}
