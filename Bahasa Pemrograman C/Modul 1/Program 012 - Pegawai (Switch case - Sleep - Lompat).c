//library
#include <stdio.h>
#include <conio.h>

int main() {
	//- deklarasi -//
	int gol, gaji, o;
	float tunjangan, penghasilan;
	char nama[200];
	char yon[5];
	
	//- paparan -//
	system("cls");
	
		//- judul -//
	    printf("Program - Pegawai");
	    printf("\n"); // -> enter
	    printf("-----------------------");
	    printf("\n\n"); // -> enter x2
	
	printf("Golongan yang terdaftar:\n");
	printf("Golongan 1: 1\n");
	printf("Golongan 1: 2\n");
	printf("Golongan 1: 3\n");
	printf("Golongan 1: 4\n\n");
	
	//- masukkan -//
	fflush(stdin); // -> fflush
	printf("Masukkan nama: "); gets(nama);
	
	printf("Masukkan golongan pegawai: "); scanf("%d", &gol);
	
	//- switch case -//
	switch(gol) {
		case 1:
			gaji = 3000000;
			break;
		
		case 2:
			gaji = 4200000;
			break;
		
		case 3:
			gaji = 5500000;
			break;
		
		case 4:
			gaji = 7000000;
			break;
		
		default:
			printf("Pilihan yang anda pilih tidak ada, silahkan kembali ke awal !\n");
			
			//- for -//
			for(o = 1; o < 6; o++) {
          		printf("Program akan kembali dalam %d\n", o);
          		Sleep(500);
        	} // -> endfor
        	
        	//- lompat -//
        	main();
	}
	
	//- metode -//
	tunjangan = 0.2 * gaji;
    penghasilan = gaji + tunjangan;
    
    //- keluaran -//
    printf("\n");
	printf("Nama pegawai: %s\n", nama);
	printf("Gaji Pegawai: Rp%d\n", gaji);
    printf("Tunjangan pegawai: Rp%.2f\n", tunjangan);
    printf("Penghasilan pegawai: Rp%.2f\n", penghasilan);
    
    getch();
    
    //- lompat -//
	main();
}

