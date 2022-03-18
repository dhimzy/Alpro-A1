/*Nama File	: CekPrima_Dhiya Mazaya.c*/
/*Deskripsi	: Menentukan apakah masukan bilangan integer sembarang (N) adalah bilangan prima atau bukan*/
/*Pembuat	: Dhiya Mazaya - 24060121140151*/
/*Tgl pembuatan	: Jumat, 18-03-2022 15:44 WIB*/

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
        if (N > 0){
            for (i = 2; i < N; i++) {
                if (N % i == 0) {
                    printf("Bukan Bilangan Prima\n");
                    return 0;
                }
            }
            printf("Bilangan Prima\n");
            return 0;
        }
        else{
            printf("N harus bilangan positif\n");
            return 0;
        }
}
