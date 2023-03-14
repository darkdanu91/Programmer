#include <stdio.h>

int main() {
   char str[20];

   printf("Masukkan sebuah string (maksimum 19 karakter): ");
   fgets(str, 20, stdin);
   
   printf("String yang dimasukkan: %s\n", str);
   
   return 0;
}
