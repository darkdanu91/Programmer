//- Program Min_Maks -//

//library
#include <stdio.h>
#include <conio.h>

void Tentukan_Harga_Ekstrim(int n, int *min, int *maks) {
	//-> in: [int], in/out min: [int], in/out maks: [int]
	//-> K.awal  : n terdefinisi
	//-> K.akhir : min dan maks terdefinisi, yaitu harga minimum dan maksimum
	
	//- deklarasi -//
	int i;
	int bil;
	
	//- masukan -//
	printf("Masukan bilangan ke-1: "); scanf("%d", &bil);
	
	//- inisialisasi -//
	*min = bil;
	*maks = bil;
	
	//- for -//
	for(i = 2; i <= n; i++) {
		//- masukan -> bilangan -//
		printf("Masukan bilangan ke-%d: ", i);
		scanf("%d", &bil);
		
		//- if -//
		if(bil < *min) {
			*min = bil;
		} //-> endif
		
		if(bil > *maks) {
			*maks = bil;
		} //-> endif
	} //-> endfor
}

int main() {
	//- judul -//
    printf("Program - Min_Maks\n");
    printf("-----------------------\n\n");
	
	//- deklarasi -//
	int n; //-> banyak data
	int min, maks;
	
	//- masukan -> banyak data -//
    printf("Masukan banyak data bilangan bulat: ");
	scanf("%d", &n);
	printf("\n");
	
	//- call fungsi -//
	Tentukan_Harga_Ekstrim(n, &min, &maks);
	
	//- keluaran -//
	printf("\nBilangan terbesar %d, dan terkecil %d", maks, min);
	
	return 0;
}
