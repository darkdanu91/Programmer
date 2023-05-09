#include "function.h"
antrian Q; // global variable

int main() {
    int choice, val;
    createQ(&Q);

    do {
        printf("\n\nPemrosesan Antrian\n");
        printf("1. Penyisipan\n");
        printf("2. Hapus\n");
        printf("3. Cetak\n");
        printf("4. Keluar\n");
        printf("Pilihan [1-4]: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nMasukkan nilai: ");
                scanf("%d", &val);
                enQueue(&Q, val);
                printf("Nilai %d berhasil disisipkan ke dalam antrian.\n", val);
                break;
            case 2:
                if (emptyQ(Q)) {
                    printf("\nAntrian kosong.\n");
                } else {
                    DeQueue(&Q, &val);
                    printf("\nElemen yang dihapus adalah %d.\n", val);
                }
                break;
            case 3:
                printf("\nIsi antrian: ");
                printQ(Q);
                break;
            case 4:
                printf("\nProgram selesai.\n");
                exit(0);
            default:
                printf("\nPilihan tidak valid.\n");
                break;
        }
    } while (true);

    return 0;
}
