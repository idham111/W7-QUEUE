// queue.c
#include "queue.h"

void CreateQueue(Queue *Q) {
    CreateList(&(Q->front));  // Membuat list kosong untuk front
    Q->rear = NULL;  // Rear juga diinisialisasi NULL
}

boolean is_Empty(Queue Q) {
    return isEmpty(Q.front);  // Mengecek apakah queue kosong
}

boolean is_Full(Queue Q) {
    return false;  // Queue tidak akan penuh karena menggunakan linked list
}

void EnQueue(Queue *Q, infotype X) {
    InsVLast(&(Q->front), X);  // Menambahkan elemen ke dalam list
    if (Q->rear == NULL) {  // Jika queue kosong, rear menunjuk ke front
        Q->rear = Q->front;
    } else {
        Q->rear = Q->rear->next;  // Rear pindah ke elemen terakhir
    }
}

void deQueue(Queue *Q, infotype *X) {
    if (!is_Empty(*Q)) {
        DelVFirst(&(Q->front), X);  // Menghapus elemen pertama
        if (Q->front == NULL) {
            Q->rear = NULL;  // Jika queue kosong, rear juga NULL
        }
    }
}

void printQueue(Queue Q) {
    if (is_Empty(Q)) {
        printf("Queue kosong.\n");
    } else {
        address P = Q.front;
        printf("Antrian saat ini: ");
        while (P != NULL) {
            printf("%d ", P->info);
            P = P->next;
        }
        printf("\n");
    }
}
