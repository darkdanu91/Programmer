#include "function.h"
Stack S; // Variabel global Stack

int main() {
    //-declare
    int Choice; // Variabel untuk menyimpan pilihan pengguna
    TInfo X; // Variabel untuk menyimpan nilai elemen

    //-algorithm
    CreateStack(&S); // Menginisialisasi Stack sebelum penggunaan

    do {
        printf("Pemrosesan Stack\n");
        printf("1. Penyisipan\n");
        printf("2. Hapus\n");
        printf("3. Cetak\n");
        printf("4. Selesai\n");

        printf("Pilihan [1/2/3/4]: ");
        scanf("%d", &Choice); // Membaca pilihan pengguna

        switch (Choice) {
            case 1:
                printf("Info yang akan disisipkan? ");
                scanf("%d", &X); // Membaca nilai elemen yang akan disisipkan

                Push(&S, X); // Menyisipkan elemen ke Stack
                break;

            case 2:
                if (!EmptyStack(S)) {
                    Pop(&S, &X); // Menghapus elemen teratas dari Stack
                    printf("Elemen yang dihapus adalah %d\n", X); // Menampilkan nilai elemen yang dihapus
                } else {
                    printf("Stack kosong\n"); // Menampilkan pesan jika Stack kosong
                }
                break;

            case 3:
                Print(S); // Mencetak elemen-elemen dalam Stack
                break;

            case 4:
                break; // Keluar dari loop

            default:
                printf("Pilihan tidak valid\n"); // Menampilkan pesan jika pilihan tidak valid
                break;
        }
    } while (!Finished(Choice)); // Melakukan perulangan selama program belum selesai

    return 0;
}
