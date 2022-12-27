//- Program Hitung Genap -//

//library
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

//- fungsi Apakah_Genap -//
bool Apakah_Genap(int X) {
	return(X % 2 == 0); //-> return true jika (X % 2 = 0)
}

//- program utama -//
int main() {
    //- judul -//
    printf("Program - Hitung Banyak Bilangan Genap\n");
    printf("-----------------------\n\n");
    
    //- deklarasi -//
	int n; //-> banyak data
	int temp; //-> inisialisasi (wadah bilangan genap)
	int i; //-> for
    int bil; //-> bilangan
    
    //- masukan -> banyak data -//
    printf("Masukan banyak data bilangan bulat: ");
	scanf("%d", &n);
	printf("\n");
	
	//- inisialisasi -//
	temp = 0;
	
    //- for -//
    for(i = 0; i < n; i++) {
    	//- masukan -> bilangan -//
		printf("Masukan bilangan ke %d: ", i + 1);
		scanf("%d", &bil);
		
		//- call fungsi -//
		if(Apakah_Genap(bil)) {
			temp++;
		} //-> endif
	} //- endfor
    
	//- keluaran -//
	printf("\nBanyak bilangan genap: %d", temp);
	
	return 0;
}
