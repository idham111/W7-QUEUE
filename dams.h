// dams.h
#ifndef DAMS_H
#define DAMS_H

#include <stdbool.h>  // Menambahkan ini untuk mendeklarasikan tipe bool
#include <stdio.h>
#include <stdlib.h>

typedef int infotype;  // Tipe data untuk elemen list (bisa disesuaikan dengan kebutuhan)
typedef struct tElmtList *address;  // Deklarasi tipe pointer untuk elemen list

// Struktur untuk elemen list
typedef struct tElmtList {
    infotype info;
    address next;
} ElmtList;

// Definisi List sebagai pointer ke elemen list
typedef address List;

// Fungsi untuk membuat list kosong
void CreateList(List *L);

// Fungsi untuk membuat node baru
void Create_Node(address *p, infotype data);

// Fungsi untuk menghapus node
void DeAlokasi(address *p);

// Fungsi untuk memeriksa apakah list kosong
bool isEmpty(List L);

// Fungsi untuk menyisipkan elemen di akhir list
void InsVLast(List *L, infotype X);

// Fungsi untuk menghapus elemen pertama
void DelVFirst(List *L, infotype *X);

// Fungsi untuk mencetak informasi list
void PrintInfo(List L);

#endif
