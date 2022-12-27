//library
#include <stdio.h>
#include <conio.h>

//- create struct -//
typedef struct {
	int hari, bulan, tahun;
} tanggal; 

int main() {
	//- deklarasi -//
    tanggal t; // -> use struct
    
    //- paparan -//
    system("cls");
    
    //- judul -//
	    printf("Program - Tanggal Besok");
	    printf("\n"); // -> enter
	    printf("-----------------------");
	    printf("\n\n"); // -> enter x2
    
    //- masukkan -//
    printf("Masukkan tanggal awal dengan pemisah '-' dengan format [hh-mm-yy]: \n\nTanggal hari ini: ");
    scanf("%d-%d-%d", &t.hari, &t.bulan, &t.tahun);
    
    //- if -//
    if(t.bulan == 2) { // -> maka bulan februari
    	
		if(t.tahun % 4 ==0) { // -> maka tahun kabisat
    		
			if(t.hari < 29) {
    			t.hari++;
			} // -> endif-3.1
			
			else if(t.hari == 29) {
				t.hari = 1;
        		t.bulan++;
			} // -> endif-3.2
			
			else {
				//- keluaran -//
				printf("Input tanggal Tahun Kabisat salah!");
			} // -> endif-3.3
			
		} // -> endif-2.1
		
		else { // -> maka tahun basithah
			
			if(t.hari < 28) {
				t.hari++;
			} // -> endif-3.1
			
			else if(t.hari == 28) {
				t.hari = 1;
        		t.bulan++;
			} // -> endif-3.2
			
			else {
				printf("Input tanggal Tahun Basithah salah!");
			} // -> endif-3.3
			
		} // -> endif-2.2
    
	} // -> endif-1.1
	
	else if(t.bulan == 1 || t.bulan == 3 || t.bulan == 5 || t.bulan == 7 || t.bulan == 8 || t.bulan == 10) { // -> maka bulan = 31 hari
		
		if(t.hari < 31) {
			t.hari++;
		} // -> endif-2.1
		
		else if(t.hari == 31) {
			t.hari = 1;
			t.bulan++;
		} // -> endif-2.2
		
		else {
			printf("Input Tanggal Salah!");
		} // -> endif-2.3
			
	} // -> endif-1.2
	
	else if(t.bulan == 2 || t.bulan == 4 || t.bulan == 6 || t.bulan == 9 || t.bulan == 11) { // -> maka bulan = 30 hari
		
		if(t.hari < 30) {
			t.hari++;
		} // -> endif-2.1
		
		else if(t.hari == 30) {
			t.hari = 1;
			t.bulan++;
		} // -> endif-2.2
		
		else {
			printf("Input Tanggal Salah!");
		} // -> endif-2.3
		
	} // -> endif-1.3
	
	else if(t.bulan == 12) { // -> maka bulan ke-12 = 31 hari
		
		if(t.hari < 31) {
			t.hari++;
		} // -> endif-2.1
		
		else if(t.hari == 31) {
			t.hari = 1;
			t.bulan = 1;
			t.tahun++;
		} // -> endif-2.2
		
		else {
			printf("Input Tanggal Salah!");
		} // -> endif-2.3
		
	} // -> endif-1.4
	
	else if(t.bulan < 0 || t.bulan > 12) { // -> maka kasus bulan kurang dari 0, lebih dari 12
		printf("Bulan Tidak Terdefenisi!");
	} // -> endif-1.5
	
	//- keluaran -//
    printf("Tanggal besok: [%d-%d-%d]\n", t.hari, t.bulan, t.tahun);
    getch();
    
    //- lompat -//
	main();
}
