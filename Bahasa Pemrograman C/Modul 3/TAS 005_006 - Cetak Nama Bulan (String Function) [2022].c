//library
#include <stdio.h>
#include <conio.h>

char *NamaBulan(int mm) {
	//- switch -//
	switch(mm) {
		case 1:
			return("Januari");
			break;
		case 2:
			return("Februari");
			break;
		case 3:
			return("Maret");
			break;
		case 4:
			return("April");
			break;
		case 5:
			return("Mei");
			break;
		case 6:
			return("Juni");
			break;
		case 7:
			return("Juli");
			break;
		case 8:
			return("Agustus");
			break;
		case 9:
			return("September");
			break;
		case 10:
			return("Oktober");
			break;
		case 11:
			return("November");
			break;
		case 12:
			return("Desember");
			break;
		default:
			return("tidak ada");
	}
}

int main() {
	//- judul -//
    printf("Program - Cetak Nama Bulan\n");
    printf("-----------------------\n\n");
	
	//- deklarasi -//
	int mm;
	
	//- masukan -//
	printf("Masukan nomor bulan: "); scanf("%d", &mm);
	
	//- call fungsi -//
	printf("Nama bulan: %s", NamaBulan(mm));
}
