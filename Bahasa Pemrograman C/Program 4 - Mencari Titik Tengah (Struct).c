//library
#include <stdio.h>
#include <conio.h>

//- create struct -//
typedef struct {
	float x, y;
} titik;

int main() {
	//- judul -//
    printf("Program - Mencari Titik Tengah");
    printf("\n"); // -> enter
    printf("-----------------------");
    printf("\n\n"); // -> enter x2
	
	//- deklarasi -//
	titik p1, p2, p3; // -> use struct
	
	//- masukkan -//
	printf("p1.x: "); scanf("%f", &p1.x); printf("p1.y: "); scanf("%f", &p1.y);
	printf("p2.x: "); scanf("%f", &p2.x); printf("p2.y: "); scanf("%f", &p2.y);
	
	//- metode -//
	p3.x = (p1.x + p2.x) / 2;
	p3.y = (p1.y + p2.y) / 2;
	
	//- keluaran -//
	printf("\n"); // -> enter
	printf("titik tengah = x: %.2f | y: %.2f", p3.x, p3.y);
}
