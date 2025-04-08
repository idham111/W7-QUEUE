// dams.c
#include "dams.h"

void CreateList(List *L) {
    *L = NULL;  // List kosong
}

void Create_Node(address *p, infotype data) {
    *p = (address)malloc(sizeof(ElmtList));  // Alokasi memori untuk node baru
    if (*p != NULL) {
        (*p)->info = data;
        (*p)->next = NULL;
    }
}

void DeAlokasi(address *p) {
    free(*p);  // Membebaskan memori
    *p = NULL;
}

bool isEmpty(List L) {
    return (L == NULL);  // Jika list kosong, maka L adalah NULL
}

void InsVLast(List *L, infotype X) {
    address P;
    Create_Node(&P, X);
    if (P != NULL) {
        if (isEmpty(*L)) {
            *L = P;  // Jika list kosong, node baru menjadi elemen pertama
        } else {
            address temp = *L;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = P;  // Sisipkan di akhir list
        }
    }
}

void DelVFirst(List *L, infotype *X) {
    if (!isEmpty(*L)) {
        address P = *L;
        *X = P->info;
        *L = P->next;  // Pindahkan front ke elemen berikutnya
        DeAlokasi(&P);  // Bebaskan memori
    }
}

void PrintInfo(List L) {
    if (isEmpty(L)) {
        printf("List kosong.\n");
    } else {
        address P = L;
        while (P != NULL) {
            printf("%d ", P->info);
            P = P->next;
        }
        printf("\n");
    }
}
