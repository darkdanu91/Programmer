// -- PROGRAM Hotel -- //
 
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

//- create struct -//
typedef struct {
	int dd, mm, yy;
} date;

int main() {
	//- judul -//
    printf("Program - Check In dan Check Out");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
	
	//- deklarasi -//
	date d1, d2; // -> use struct

	const int biaya_perbulan = 300000;
	const int bulan = 30;
	const float persen_pajak = 0.1;
	int total_hari1, total_hari2, selisih_hari, banyak_bulan;
	int banyak_hari, harga, per_bulan, pajak, total_biaya;
	
	//- masukkan -//
		// -> tanggal check-in
		printf("masukkan tanggal check-in [dd-mm-yy]: ");
		scanf("%d-%d-%d", &d1.dd, &d1.mm, &d1.yy);
	  
		//-- tanggal check-out
		printf("masukkan tanggal check-out [dd-mm-yy]: ");
		scanf("%d-%d-%d", &d2.dd, &d2.mm, &d2.yy);
	
	//- metode -//
	total_hari1 = (d1.yy * 365) + (d1.mm * 30) + d1.dd;
	total_hari2 = (d2.yy * 365) + (d2.mm * 30) + d2.dd;
	selisih_hari = total_hari2 - total_hari1;
	banyak_bulan = selisih_hari / bulan;
	banyak_hari = selisih_hari % bulan;
	
	//- if -//
	if(selisih_hari % bulan == 0) {
        per_bulan = selisih_hari / bulan;
		harga = biaya_perbulan * per_bulan;
		pajak = persen_pajak * harga;
		total_biaya = harga + pajak;
    } // -> end
	
	else {
        harga = selisih_hari * (biaya_perbulan / bulan);
        pajak = persen_pajak * harga;
		total_biaya = harga + pajak;
    } // -> end
    
    //-- keluaran --//
    printf("\nlama sewa: %d bulan, %d hari;\n", banyak_bulan, banyak_hari);
    printf("biaya sewa: Rp%d", total_biaya);
    getch();
}
