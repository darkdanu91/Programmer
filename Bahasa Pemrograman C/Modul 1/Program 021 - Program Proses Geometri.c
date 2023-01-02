#include <stdio.h>
#include <conio.h>

void HitungLuasSegi3() {
	//- dek -//
	float a, t, luas;
	
	//- input -//
	printf("\nLuas segitiga: ");
	printf("\n-----------------------");
	printf("\nMasukkan tinggi segitiga [cm]: "); scanf("%f", &t);
	printf("Masukkan alas segitiga [cm]: "); scanf("%f", &a);
	
	//- method -//
	luas = 0.5 * t * a;
	
	//- output -//
	printf("\nluas segitiga: %.2f cm\n\n", luas);
}

void HitungLuasSegi4(float p, float l) {
	//- dek -//
	float luas;
	
	//- method -//
	luas = p * l;
	
	//- output -//
	printf("\nluas segi empat: %.2f cm\n\n", luas);
}

void HitungLuasLingkaran(float r) {
	//- dek -//
	const float pi = 22.0/7.0;
	float luas;
	
	//- method -//
	luas = pi * r * r;
	
	//- output -//
	printf("luas lingkaran: %.2f\n\n", luas);
}

int main() {
	//- dek -//
	system("cls");
	int pil;
	char a;
	float p, l, r, luas;
	
	//- judul -//
    printf("Program - Pemrosesan Geometri\n");
    printf("-----------------------\n\n");
	
	//- method -//
	do {
		system("cls");
		printf("1. Hitung Luas Segitiga\n");
		printf("2. Hitung Luas Segi Empat\n");
		printf("3. Hitung Luas Lingkaran\n");
		printf("4. Clear\n");
		printf("\nMasukan pilihan [1/2/3/4]: "); scanf("%i", &pil);
		
		switch(pil){
			case 1:
				HitungLuasSegi3();
				while(getchar() != '\n');
				printf("Ingin lanjut (Y/N)?: "); a = getchar();
				break;
				
			case 2:
				printf("\nLuas segi empat: ");
				printf("\n-----------------------\n");
				printf("Panjang segi empat [cm]: "); scanf("%f", &p);
				printf("Lebar segi empat [cm]: "); scanf("%f", &l);
				HitungLuasSegi4(p, l);
				
				while(getchar() != '\n');
				printf("Ingin lanjut (Y/N)?: "); a = getchar();
				break;
				
			case 3:
				printf("jari-jari lingkaran? "); scanf("%f", &r);
				HitungLuasLingkaran(r);
				while(getchar() != '\n');
				printf("Ingin lanjut (Y/N)?: "); a = getchar();
				break;
				
			default:
				printf("Input salah!");
				sleep(2);
				a = 'y';
		} // -> endcase
	} while(tolower(a) == 'y');
	
}
