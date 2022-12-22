//library
#include <stdio.h>
#include <conio.h>

int main() {
	//- judul -//
    printf("Program - Mencari Nilai Terbesar");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
	
	//- deklarasi -//
	int a, b, i;
	int data[100]; // -> array
  
	//- masukkan -> untuk for -//
	printf("Masukkan banyak bilangan: "); scanf("%d", &a);
	printf("\n"); // -> enter
  
	//- for -> masukkan -//
    for(i = 1; i <= a; i++) {
    	
    	//- masukkan -//
		printf("Masukkan bilangan ke-%d: ", i); scanf("%d", &data[i]);
		
	}
	
	//- wadah -> inisialisasi -//
	b = data[1]; // -> data ke-1
	
	//- for -> metode -//
    for(i = 1; i <= a; i++) {
    	
		//- if -> metode -//
		if(data[i] > b) { // -> if: opsi max [>] / min [<]
        	b = data[i];
		} // -> endif
		
    } // -> endfor
    
    //- keluaran -//
	printf("\n"); // -> enter
	printf("Nilai terbesar: %d", b);
}
