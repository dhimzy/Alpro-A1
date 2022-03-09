/*Nama File	: CekBulan.c*/
/*Deskripsi	: Mengklasifikasi dan menampilkan nama bulan berdasarkan nomor b yang diberikan*/
/*Pembuat	: Dhiya Mazaya - 24060121140151*/
/*Tgl pembuatan	: Rabu, 09-03-2022 11:41 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int b; /*nomor bulan, 1 ≤ b ≤ 12*/

/*Algoritma*/
    printf("Masukkan nomor bulan: ");
    scanf("%d", &b);
    switch (b) {
        case 1:
            printf("Januari");
            break;
        case 2:
            printf("Februari");
            break;
        case 3:
            printf("Maret");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("Mei");
            break;
        case 6:
            printf("Juni");
            break;
        case 7:
            printf("Juli");
            break;
        case 8:
            printf("Agustus");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("Oktober");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("Desember");
            break;
        default:
            printf("Masukan nomor bulan tidak tepat");
            break;
    }
}
