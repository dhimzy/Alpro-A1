/*Nama file : bubbleSort.c*/
/*Deskripsi : Mengurutkan data dengan membandingkan dua data yang berdekatan dan menukarnya sampai dalam urutan yang diinginkan*/
/*Pembuat   : Dhiya Mazaya - 24060121140151*/
/*Tgl pembuatan : Selasa, 26-4-2022 23:32 WIB*/

#include <stdio.h>

//Melakukan pertukaran jika data tidak sesuai.
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int N)
{
	for(int i = 0; i < N-1; i++){ //N-1 karena index dimulai dari 0.

		//Melakukan looping untuk mengakses array pada setiap data.
		for(int j = 0; j < N-1-i; j++){

			//Tanda > mengurutkan secara ascending.
			//Tanda < mengurutkan secara descending.
			if(arr[j] < arr[j+1]){
			//Memanggil function swap yang berfungsi untuk menukar data.
			swap(&arr[j], &arr[j+1]);

		}
	}
}
}

void print(int arr[], int N)
{
	for(int i = 0; i < N; i++){
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = {10,2,11,5,22,4,24,8,28,93};

	 //Mencari panjang array dari data tersebut.
	int N = sizeof(arr)/sizeof(arr[0]);

	printf("======Bubble Sort (Secara Descending)======\n");

	printf("Sebelum Sort: ");
	print(arr,N);
	puts("");

	printf("Sesudah Sort: ");
	bubbleSort(arr, N);
	print(arr, N);
	puts("");

	return 0;
}
