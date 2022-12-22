// -- Program - Tukar Dua Bilangan -- //
 
/*
Case :
membaca masukan 2 bilangan, kemudian mempertukarkan kedua bilangan
tersebut dan mencetak hasil pertukarannya.
*/

//library
#include <stdio.h>
#include <conio.h>
 
int main(){
	//- judul -//
    printf("Program - Tukar Dua Bilangan");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
    
    //- deklarasi -//
    int temp, x, y;
    
    //- masukkan -//
    printf("Masukkan bilangan X: "); scanf("%d", &x);
    printf("Masukkan bilangan Y: "); scanf("%d", &y);
    
    //- logika -//
    temp = x;
    x = y;
    y = temp;
    
    //- keluaran -//
    printf("\n"); // -> enter x2
    printf("Bilangan X sekarang: %d", x);
    printf("\n"); // -> enter
    printf("Bilangan Y sekarang: %d", y);
}
