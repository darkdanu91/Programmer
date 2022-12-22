//library
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

//library fungsi
#include "Program S2E1 Variasi 2 - Fungsi.c"
bool Apakah_Ganjil(int X);

int main(){
    //- judul -//
    printf("Program - Hitung Banyak Bilangan Ganjil");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
    
    //- deklarasi -//
    int i; // -> for
	int n; // -> banyak data
	int temp; // -> inisialisasi (wadah bilangan ganjil)
    int bil[100]; // -> array untuk bilangan
    
    //- masukkan -> untuk for -//
    printf("Masukkan banyak data bilangan bulat: ");
	scanf("%d", &n);
	printf("\n"); // -> enter
	
	//- inisialisasi -//
	temp = 0;
	
    //- for -//
    for(i = 0; i < n; i++){ //- input perulangan
    	//- masukkan -//
		printf("Masukkan bilangan ke %d: ", i + 1);
		scanf("%d", &bil[i]);
		
		if(Apakah_Ganjil(bil[i])){ // -> use fungsi
			temp++;
		} //- endif
	} //- endfor
    
	//- keluaran -//
	printf("\n"); // -> enter
	printf("Banyak bilangan ganjil: %d", temp);
	
	return 0;
}
