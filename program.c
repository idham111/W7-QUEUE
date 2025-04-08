// main.c
#include <stdio.h>
#include "queue.h"

int main() {
    Queue Q;
    CreateQueue(&Q);  // Membuat queue kosong
    int pilihan, nomor = 0, diproses;

    do {
        printf("\n=== SELAMAT DATANG DI BANK ===\n");
        printf("1. Ambil Nomor Antrian\n");
        printf("2. Panggil Nomor Antrian\n");
        printf("3. Lihat Daftar Antrian\n");
        printf("4. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                nomor++;
                EnQueue(&Q, nomor);  // Menambahkan nomor antrian ke queue
                printf("Nomor antrian Anda adalah %d. Silakan menunggu giliran.\n", nomor);
                break;

            case 2:
                if (!is_Empty(Q)) {
                    deQueue(&Q, &diproses);  // Menghapus nomor antrian pertama
                    printf("Nomor antrian %d dipanggil ke loket.\n", diproses);
                } else {
                    printf("Tidak ada pelanggan dalam antrian.\n");
                }
                break;

            case 3:
                printQueue(Q);  // Menampilkan seluruh antrian
                break;

            case 4:
                printf("Terima kasih telah menggunakan layanan kami. Selamat datang kembali!\n");
                break;

            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }

    } while (pilihan != 4);

    return 0;
}
