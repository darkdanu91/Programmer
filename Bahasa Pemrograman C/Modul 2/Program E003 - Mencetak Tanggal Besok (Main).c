//library
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

//library fungsi
#include "Program S2E3-V2 - Mencetak Tanggal Besok (Fungsi).c"
void Tanggal_Besok(date t, date *j);

int main() {
	//- judul -//
    printf("Program - Mencetak Tanggal Besok");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
	
	//- deklarasi -//
	date d, j;
	char y;
	
	do {
		//- masukkan -//
		system("cls");
		printf("Masukkan tanggal hari ini [dd-mm-yy]: ");
		scanf("%d-%d-%d", &d.hari, &d.bulan, &d.tahun);
		
		//- metode -//
		Tanggal_Besok(d, &j);
		
		//- keluaran -//
		printf("\n\nTanggal besok: %d-%d-%d", j.hari, j.bulan, j.tahun);
		printf("\n\nIngin lanjut? Y/N: "); y = getch();
		printf("\n------------------------------");
		printf("\n\n");
	} while(y == 'y');
	
	printf("Terima kasih! Tekan enter untuk tutup!");
	getch();
}
