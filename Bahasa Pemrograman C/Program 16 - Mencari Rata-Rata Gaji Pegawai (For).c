// -- PROGRAM Mencari Rata-Rata Gaji Pegawai -- //
 
/*
Case :
mencari rata-rata gaji pegawai.
*/
 
//library
#include <stdio.h>
#include <conio.h>
 
int main(){
	//- judul -//
	system("cls");
    printf("Program - Mencari Rata-Rata Gaji Pegawai");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
    
    //- create string -//
    typedef char string[200];
    
	//- deklarasi -//
    string nama;
	
	int n, k;
    float gapok, tunj, pajak, gaji_bersih, jumlah, rata_gaji;

    const float per_tunj = 0.2;
    const float per_paj = 0.05;
 
    //- masukkan -> untuk for -//
    printf("Masukkan banyak pegawai: "); scanf("%d", &n);
    printf("\n");
    
    //- for -//
    for(k = 1; k <= n; k++){
    	
		//- masukkan -//
		fflush(stdin); // -> fflush
    	printf("Masukkan nama pegawai ke-%d: ", k); gets(nama);
    	
    	printf("Masukkan gaji pokok pegawai: "); scanf("%f", &gapok);
    	printf("\n");
    	
    	//- metode -//
    	printf("Nama pegawai: %s\n", nama);
    	
    	tunj = per_tunj * gapok;
    	printf("Tunjangan: Rp%.2f\n", tunj);
    	
    	pajak = per_paj * (gapok + tunj);
    	printf("Pajak: Rp%.2f\n", pajak);
    	
    	gaji_bersih = gapok + tunj - pajak;
    	printf("Gaji bersih: Rp%.2f\n", gaji_bersih);
    	
    	printf("-----------------------\n\n");
    	
    	//- wadah -//
    	jumlah = jumlah + gaji_bersih;
    	
	} // -> endfor
	
	//- metode akhir -//
	rata_gaji = jumlah / n;
	
	//- keluaran -//
	printf("\nRata-rata gaji untuk %d pegawai: Rp%.2f", n, rata_gaji);
	
	getch();
	
	//- lompat -//
	main();
}
