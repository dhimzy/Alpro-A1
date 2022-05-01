/*Nama file : countingSort.c*/
/*Deskripsi : Mengurutkan data dengan cara menghitung jumlah kemunculan dari setiap data yang berada di dalam array*/
/*Pembuat   : Dhiya Mazaya - 24060121140151*/
/*Tgl pembuatan : Minggu, 1-5-2022 12:59 WIB*/


#include <stdio.h>

//Program Utama
int main()
{
    //Kamus
  	int i, j;
    int arr[] = {10,2,11,5,22,4,24,8,28,93};
    int temp = 0;

    //Algoritma
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("===Counting Sort (Secara Descending)===\n");

    printf("Sebelum Sort: ");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < length; i++) {
        for (j = i+1; j < length; j++) {
           if(arr[i] < arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
        }
    }
    printf("\n");

    //Display elements array setelah sorting
    printf("Sesudah Sort: ");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
