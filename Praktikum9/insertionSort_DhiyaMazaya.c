/*Nama file : insertionSort.c*/
/*Deskripsi : Mengurutkan data dengan cara menyisipkan atau memasukan setiap elemen secara berulang berulang*/
/*Pembuat   : Dhiya Mazaya - 24060121140151*/
/*Tgl pembuatan : Rabu, 27-4-2022 01:32 WIB*/

#include <stdio.h>

void insertionSort(int *Data, int n)
{
    int temp, j;

    for (int i = 1; i <= n-1; i++){ //n-1 karena index dimulai dari 0.
        temp = Data[i];
        j = i-1;

    //Data[j] > temp berfungsi untuk mengurutkan data secara ascending.
    //Data[j] < temp berfungsi untuk mengurutkan data secara descending.
        while(j >= 0 && Data[j] < temp){
            Data[j+1] = Data[j];
            j--;
        }
        Data[j+1] = temp;
    }
}

void print(int* Data, int n)
{
    for (int i = 0; i < n; i++){
        printf("%d ", Data[i]);
    }
    printf("\n");
}

int main()
{
    int Data[] = {10,2,11,5,22,4,24,8,28,93};

	//Mencari panjang array dan menyesuaikan ukuran array dari data tersebut.
	int n = sizeof(Data)/sizeof(Data[0]);

    printf("=====Insertion Sort (Secara Descending)=====\n");

    printf("Sebelum Sort: ");
    print(Data, n);

    printf("Sesudah Sort: ");
    insertionSort(Data, n);
    print(Data, n);
    return 0;
}
