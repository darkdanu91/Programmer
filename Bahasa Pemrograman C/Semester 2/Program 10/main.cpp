#include "function.h"
Stack S; // global variable

int main() {
    //-declare
    int Choice;
    TInfo X;

    //-algorithm
    CreateStack(&S);
    do {
        printf("Pemrosesan Stack\n");
        printf("1. Penyisipan\n");
        printf("2. Hapus\n");
        printf("3. Cetak\n");
        printf("4. Selesai\n");

        printf("Pilihan [1/2/3/4]: ");
        scanf("%d", &Choice);

        switch (Choice) {
            case 1:
                printf("Info yang akan disisipkan? ");
                scanf("%d", &X);

                Push(&S, X);
                break;

            case 2:
                if (!EmptyStack(S)) {
                    Pop(&S, &X);
                    printf("Elemen yang dihapus adalah %d\n", X);
                } else {
                    printf("Stack kosong\n");
                }
                break;

            case 3:
                Print(S);
                break;

            case 4:
                break;

            default:
                printf("Pilihan tidak valid\n");
                break;
        }
    } while (!Finished(Choice));

    return 0;
}

