// -- PROGRAM Mencari Banyak Karakter -- //
 
/*
Case :
mencari banyak karakter.
*/
 
//library
#include <stdio.h>
#include <conio.h>
 
int main(){
	//- judul -//
	system("cls");
    printf("Program - Mencari Banyak Karakter");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
    
	//- deklarasi -//
	int n;
	char c; // -> 1 karakter
    
    //- masukkan -> untuk for -//
    printf("Masukkan karakter, selesai jika tanda titik (.)");
	
	printf("\n\nMasukkan karakter ke-1: ");
	c = getche(); // -> membatasi 1 karakter dan karakter akan tampil
    printf("\n");
    
    //- while-do -//
    while(c != '.'){
    	n++; // -> increment
		
		//- masukkan -//
		printf("Masukkan karakter ke-%d: ", n + 1);
		c = getche(); // -> digunakan untuk membatasi 1 karakter
		printf("\n");
	} // -> endwhile
    
	//- keluaran -//
	printf("\nBanyak karakter adalah: %d", n);
	
	getch();
	
	//- lompat -//
	main();
}
