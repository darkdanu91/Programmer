//library
#include <stdio.h>
#include <conio.h>

int main () {
	//- paparan -//
    system("cls");
    
    //- judul -//
	    printf("Program - Cetak Bilangan");
	    printf("\n"); // -> enter
	    printf("-----------------------");
	    printf("\n\n"); // -> enter x2
	
	//- deklarasi -//
	int n, k;
	
	//- masukkan -> untuk for -//
	printf("Masukkan bilangan bulat N: "); scanf("%d", &n);
	printf("\n");
	
	//- for -> keluaran -//
	for(k = 1; k <= n; k++) {
		printf("%d ", k);
	} // -> endfor
	
	getch();
	
	//- lompat -//
	main();
}
