//library
#include <stdio.h>
#include <conio.h>

//- create string -//
typedef char string[200];
 
int main() {
	//- judul -//
	system("cls");
    printf("Program - Mencari Rata-Rata Mahasiswa");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
    
    //- deklarasi -//
    string nama;
    
    int k, i; // -> for
    int n, m;
    float nilai, jumlah, rata;
    
    //- masukkan -> untuk for -//
    printf("Masukkan jumlah mahasiswa: "); scanf("%d", &m);
    printf("Masukkan banyak mata kuliah: "); scanf("%d", &n);
    
	printf("\n");
	printf("-----------------------\n\n");
    
    //- for -//
    for(k = 1; k <= n; k++) {
    	
		//- inisialisasi -//
		jumlah = 0;
		
		//- masukkan -//
		fflush(stdin); // -> fflush
		printf("Masukkan nama mahasiswa: "); gets(nama);
		
		//- for in for -//
		for(i = 1; i <= m; i++) {
			
			//- masukkan -//
			printf("Masukkan nilai mata kuliah ke-%d: ", i);
			scanf("%f", &nilai);
			
			//- wadah -//
			jumlah = jumlah + nilai;
			
		} // -> endfor i
		
		//- metode -//
		rata = jumlah / m;
			
		//- keluaran -//
		printf("\n");
		printf("Rata-rata: %.2f", rata);
		
		printf("\n");
		printf("-----------------------\n\n");
		
	} // -> endfor
	
	getch();
	
	//- lompat -//
	main();
}
