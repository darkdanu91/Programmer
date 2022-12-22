// -- PROGRAM Mencetak Gambar Segitiga -- //
 
/*
Case :
mencetak gambar segitiga sebanyak n baris, setiap baris ke-i
berisi i buah bintang. nilai n dibaca.
*/
 
//library
#include <stdio.h>
#include <conio.h>
 
int main(){
    //- judul -//
    system("cls");
    printf("Program - Mencetak Gambar Segitiga");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
    
    //- deklarasi -//
    int jumlah, i, j;
 
  	
	printf("Input tinggi segitiga: ");
	scanf("%i", &jumlah);
	printf("\n");

	for(i = 1; i <= jumlah; i++){ //- mencetak bintang sebanyak n
		for(j = 1; j <= i; j++){ //- 
    		printf("* ");
    	} //- endfor
    
	printf("\n"); // -> enter
	
  	}
  	
	getch();
	
	//- lompat -//
	main();
}
