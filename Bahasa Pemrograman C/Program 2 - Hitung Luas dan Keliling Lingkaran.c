// -- PROGRAM Lingkaran -- //
 
/*
Case :
membaca masukan jari-jari lingkaran, kemudian menghitung
luas lingkaran = pi * jari2 * jari2, cetak luas lingkaran.
*/
 
//library
#include <stdio.h>
#include <conio.h>
 
int main(){
	//- judul -//
    printf("Program - Hitung Luas dan Keliling Lingkaran");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
    
    //- deklarasi -//
    int a;
	float r, L, K;
    const float pi = 3.14;
    const float real_pi = 22/7;
    
    //- masukkan -//
    printf("Masukkan jari-jari lingkaran: "); scanf("%f", &r);
    
    //- konversi -//
    a = (int)r;
    
    //- if -//
	    if(a % 7 == 0){//- maka pakai pi2
	    	L = real_pi * r * r;
			K = 2 * real_pi * r;}
	    
	    else{//- maka pakai pi1
	    	L = pi * r * r;
			K = 2 * pi * r;}
	
    //- keluaran -//
    printf("\n"); // -> enter
    printf("Luas lingkaran: %.2f", L);
    printf("\n"); // -> enter
    printf("Keliling lingkaran: %.2f", K);
    
    getch();
}
