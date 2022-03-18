/*Nama File	: FaktorBil_Dhiya Mazaya.c*/
/*Deskripsi	: Menentukan faktor bilangan dari masukan bilangan integer sembarang (N)*/
/*Pembuat	: Dhiya Mazaya - 24060121140151*/
/*Tgl pembuatan	: Rabu, 16-03-2022 07:43 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int N; /*bilangan integer sembarang, N > 0*/
    int i; /*counter*/

/*Algoritma*/
    printf("Masukkan Bilangan : ");
    scanf("%d", &N);
    if (N <= 0){
        printf("N harus bilangan positif\n");
    }
        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                printf("%d ", i);
            }
        }
    return 0;
}
