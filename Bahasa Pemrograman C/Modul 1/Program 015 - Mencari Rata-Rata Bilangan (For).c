// -- PROGRAM Mencari Rata-Rata Bilangan -- //
 
/*
Case :
Mencari Rata-Rata Bilangan.
*/
 
//library
#include <stdio.h>
#include <conio.h>
 
int main() {
	//- judul -//
    system("cls");
	printf("Program - Mencari Rata-Rata Bilangan");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
    
	//- deklarasi -//
	int n, k, bil;
	float jumlah, rata;
    
    //- masukkan -> untuk for -//
    printf("Masukkan banyak bilangan: "); scanf("%d", &n);
    printf("\n");
	
	//- for -//
	for(k = 1; k <= n; k++) {
		
		//- masukkan -//
		printf("Masukkan bilangan ke-%d: ", k); scanf("%d", &bil);
		
		//- wadah -//
		jumlah = jumlah + bil;
		
	} // -> endfor
	
	//- metode -//
	rata = jumlah / n;
	
	//- keluaran -//
	printf("\nRata-rata dari %d bilangan: %.2f", n, rata);
	
	getch();
	
	//- lompat -//
	main();
}
