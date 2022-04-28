/*Nama file : selectionSort.c*/
/*Deskripsi : Mengurutkan data dengan membandingkan semua data, lalu setelah data yang terkecil ditemukan maka data tersebut menjadi acuannya.*/
/*            Nilai yang sudah ditetapkan tidak akan dibandingkan lagi.*/
/*Pembuat   : Dhiya Mazaya - 24060121140151*/
/*Tgl pembuatan : Rabu, 27-4-2022 02:32 WIB*/

#include <stdio.h>

//Melakukan pertukaran jika data tidak sesuai.
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void SelectionSort (int Data[ ], int n)
{
        // variabel sementara untuk menyimpan posisi data minimum.
	    int min;

	    // mengurangi ukuran efektif array sebanyak satu di setiap iterasi.

        for(int i = 0; i < n-1 ; i++)  {

           // anggap saja data pertama menjadi minimum dari array yang tidak disortir.
             min = i ;

          // memberikan ukuran efektif dari array yang tidak disortir.

            for(int j = i+1; j < n ; j++ ) {

                //Tanda > mengurutkan secara descending.
                //Tanda < mengurutkan secara ascending.
                if(Data[j] > Data[min])  {   //mencari data minimum.
                min = j ;
                }
             }

          // meletakkan data minimum pada posisi yang tepat.
          swap (&Data[min], &Data[i]) ;
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

    printf("======Selection Sort (Secara Descending)======\n");

    printf("Sebelum Sort: ");
    print(Data, n);

    printf("Sesudah Sort: ");
    SelectionSort(Data, n);
    print(Data, n);
    return 0;
}
