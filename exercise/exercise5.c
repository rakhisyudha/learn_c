#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int jumlah_iterasi;

    // Cek apakah jumlah argumen yang diterima cukup
    if (argc == 2) {
        // Konversi argumentasi ke integer
        jumlah_iterasi = atoi(argv[1]);
    } else {
        // Jika tidak ada argumen, minta input dari pengguna
        printf("Masukkan jumlah iterasi: ");
        scanf("%d", &jumlah_iterasi);
    }

    // Variabel untuk menyimpan hasil operasi perkalian berulang
    register int result = 1; // Register variable untuk efisiensi
    clock_t start, end;       // Variabel untuk menghitung waktu eksekusi

    // Mulai menghitung waktu
    start = clock();

    // Loop operasi perkalian berulang
    for (register int i = 1; i <= jumlah_iterasi; i++) {
        result *= 2; // Melakukan operasi perkalian
    }

    // Selesai menghitung waktu
    end = clock();

    // Hitung waktu eksekusi
    double waktu_eksekusi = (double)(end - start) / CLOCKS_PER_SEC;

    // Tampilkan hasil dan waktu eksekusi
    printf("Hasil operasi setelah %d iterasi: %d\n", jumlah_iterasi, result);
    printf("Waktu eksekusi: %f detik\n", waktu_eksekusi);

    return 0;
}
