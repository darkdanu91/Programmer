//library
#include <stdio.h>
#include <conio.h>

//- create typedef string -//
typedef char string[200];

//- create struct -//
typedef struct satu {
	string nama, nip;
	float gaji;
} data_pegawai; // -> typedef

int main() {	
	//- judul -//
    printf("Program - Hitung Gaji");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
	
	//- deklarasi -//
	data_pegawai pegawai; // -> use struct
	
	const float persen_pajak = 0.1;
	const float persen_tunjangan = 0.15;
	float penghasilan;
	
	//- masukkan -//
	fflush(stdin); // -> fflush
	printf("Masukkan nama pegawai: "); gets(pegawai.nama);
	printf("Masukkan NIP: "); gets(pegawai.nip);
	
	printf("Masukkan gaji: "); scanf("%f", &pegawai.gaji);
  
	//- metode -//
	penghasilan = pegawai.gaji + persen_tunjangan * pegawai.gaji - persen_pajak * pegawai.gaji;
  
	//- keluaran -//
	printf("\n"); // -> enter
	printf("Penghasilan pegawai: Rp%.2f", penghasilan);
	getch();
}
