#include "function.h"
antrian Q; // variabel global

int main() {
    int choice, val; // deklarasi
    createQ(&Q); // inisialisasi antrian Q dengan fungsi createQ()

    do {
        // Menampilkan menu pilihan
        printf("\n\nPemrosesan Antrian\n");
        printf("1. Penyisipan\n");
        printf("2. Hapus\n");
        printf("3. Cetak\n");
        printf("4. Keluar\n");
        printf("Pilihan [1-4]: ");
        scanf("%d", &choice);
        
        // Switch case untuk memproses pilihan menu
        switch (choice) {
            case 1:
                // Menambahkan elemen ke antrian menggunakan fungsi enQueue()
                printf("\nMasukkan nilai: ");
                scanf("%d", &val);
                enQueue(&Q, val);
                printf("Nilai %d berhasil disisipkan ke dalam antrian.\n", val);
                break;
            case 2:
                // Menghapus elemen dari antrian menggunakan fungsi deQueue()
                if (emptyQ(Q)) {
                    printf("\nAntrian kosong.\n");
                } else {
                    DeQueue(&Q, &val);
                    printf("\nElemen yang dihapus adalah %d.\n", val);
                }
                break;
            case 3:
                // Mencetak isi antrian menggunakan fungsi printQ()
                printf("\nIsi antrian: ");
                printQ(Q);
                break;
            case 4:
                // Keluar dari program
                printf("\nProgram selesai.\n");
                exit(0);
            default:
                // Jika pilihan tidak valid
                printf("\nPilihan tidak valid.\n");
                break;
        }
    } while (true);

    return 0;
}
