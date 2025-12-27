#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int i;
    int jumlah = 0;
    float rata;
    int indexB = 0, indexC = 0;

    // Menghitung jumlah dan rata-rata nilai array A
    for (i = 0; i < 12; i++) {
        jumlah += A[i];
    }
    rata = (float)jumlah / 12;

    // Memindahkan nilai ke array B dan C
    for (i = 0; i < 12; i++) {
        if (A[i] > rata) {
            B[indexB] = A[i];
            indexB++;
        } else if (A[i] < rata) {
            C[indexC] = A[i];
            indexC++;
        }
    }

    // Menampilkan isi array A
    printf("Isi Array A:\n");
    for (i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }

    // Menampilkan isi array B
    printf("\n\nIsi Array B (nilai > rata-rata):\n");
    for (i = 0; i < indexB; i++) {
        printf("%d ", B[i]);
    }

    // Menampilkan isi array C
    printf("\n\nIsi Array C (nilai < rata-rata):\n");
    for (i = 0; i < indexC; i++) {
        printf("%d ", C[i]);
    }

    printf("\n\nRata-rata nilai = %.2f", rata);

    return 0;
}
