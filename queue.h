// queue.h
#ifndef QUEUE_H
#define QUEUE_H

#include "boolean.h"
#include "dams.h"  // Menggunakan header dams.h untuk linked list

// Struktur Queue
typedef struct {
    address front;  // Elemen pertama dalam queue
    address rear;   // Elemen terakhir dalam queue
} Queue;

// Fungsi untuk membuat queue baru dengan front dan rear diinisialisasi sebagai NULL
void CreateQueue(Queue *Q);

// Fungsi untuk memeriksa apakah queue kosong
boolean is_Empty(Queue Q);

// Fungsi untuk memeriksa apakah queue penuh
boolean is_Full(Queue Q);

// Fungsi untuk menambahkan elemen ke dalam queue
void EnQueue(Queue *Q, infotype X);

// Fungsi untuk menghapus elemen dari queue
void deQueue(Queue *Q, infotype *X);

// Fungsi untuk menampilkan seluruh elemen dalam queue
void printQueue(Queue Q);

#endif
