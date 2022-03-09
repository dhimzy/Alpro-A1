/*Nama File	: CekHari.c*/
/*Deskripsi	: Mengklasifikasi dan menampilkan nama hari berdasarkan nomor h yang diberikan*/
/*Pembuat	: Dhiya Mazaya - 24060121140151*/
/*Tgl pembuatan	: Rabu, 09-03-2022 11:44 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int h; /*nomor hari, 1 ≤ h ≤ 7*/

/*Algoritma*/
    printf("Masukkan nomor hari: ");
    scanf("%d", &h);
    switch (h) {
        case 1:
            printf("Senin");
            break;
        case 2:
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Jumat");
            break;
        case 6:
            printf("Sabtu");
            break;
        case 7:
            printf("Minggu");
            break;
        default:
            printf("Masukan nomor hari tidak tepat");
            break;
    }
}
