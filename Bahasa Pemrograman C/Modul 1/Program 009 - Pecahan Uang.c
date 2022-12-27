// -- PROGRAM Pecahan Uang -- //
 
/*
Case :
{membaca masukan tanggal check-in (D1) dan tanggal check out (D2), 
menghitung lama menginap,
menghitung biaya menginap = lama menginap * tarif, pajak = 10% dari biaya menginap,
menghitung dan mencetak total biaya = biaya menginap + pajak. Asumsi 1tahun = 365 hari, 1 bulan = 30 hari, D2> D1
*/

//library
#include <stdio.h>
#include <conio.h>

int main() {
	//- judul -//
    printf("Program - Pecahan Uang");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
	
	//- deklarasi -//
	int nilai, a, b, c, d, e, f, g, h;
	const int goceng = 5000, seceng = 1000;
	const int gopek = 500, cepek = 100;
	
	//- masukkan -//
	printf("Masukkan uang: "); scanf("%d", &nilai);
	
	//- metode -//
	a = nilai / goceng;
	b = nilai % goceng;
	c = b / seceng;
	d = b % seceng;
	e = d / gopek;
	f = d % gopek;
	g = f / cepek;
	h = f % cepek;

    //- keluaran -//
	printf("\n\n");
	printf("uang %d,", nilai); printf("\n");
	printf("menghasilkan pecahan uang :"); printf("\n\n");
	printf("5000, %d lembar;", a); printf("\n");
	printf("1000, %d lembar;", c); printf("\n");
	printf("500, %d koin;", e); printf("\n");
	printf("100, %d koin.", g); printf("\n");
}
