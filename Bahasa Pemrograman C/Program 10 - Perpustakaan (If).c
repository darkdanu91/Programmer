//library
#include <stdio.h>
#include <conio.h>

//struct
typedef struct {
	int dd, mm, yy;
} date;

int main() {
	//- deklarasi -//
	date d1, d2; // -> use struct
	
	const int dendaperhari = 2000, no_denda = 0;
	const int bataspinjam = 7;
	int th1, th2, lamapinjam, denda;
	
	//- masukkan -//
	printf("Masukkan tanggal pinjam [dd-mm-yy]: ");
	scanf("%d-%d-%d", &d1.dd, &d1.mm, &d1.yy);
	
	printf("Masukkan tanggal kembali [dd-mm-yy]: ");
	scanf("%d-%d-%d", &d2.dd, &d2.mm, &d2.yy);
	
	//- metode -//
	th1 = d1.dd + (d1.mm * 30) + (d1.yy * 365);
	th2 = d2.dd + (d2.mm * 30) + (d2.yy * 365);
	lamapinjam = (th1 > th2) ? th1 - th2 : th2 - th1;
	
	//- if -//
	if(lamapinjam > bataspinjam) {
		denda = (lamapinjam - bataspinjam) * dendaperhari;
		printf("\n");
		printf("Lama meminjam buku: %d", lamapinjam);
		printf(" hari, "); printf("\n");
		printf("Denda: Rp%d", denda);
	}
	
	else {
		denda = (lamapinjam - bataspinjam) * dendaperhari * 0;
		printf("\n");
		printf("Lama meminjam buku: %d ", lamapinjam);
		printf(" hari, "); printf("\n");
		printf("Denda: Rp%d", denda);
	}
}
