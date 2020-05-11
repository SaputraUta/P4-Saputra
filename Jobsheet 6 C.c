#include <stdio.h>
int main (){
	int matriks[10][10]; 
	int i,j,a,b;
	printf("Saputra F1B019129");
	printf ("\nMasukkan jumlah baris = ");
	scanf ("%i", &a);
	printf ("Masukkan jumlah kolom = ");
	scanf ("%i", &b);
	for (i = 0; i < a; i++){
		for (j = 0; j < b; j++){
			printf ("Masukkan nilai index %d, %d = ", i, j);
			scanf ("%d",&matriks[i][j]);
		}
	}
	for (i = 0; i < b; i++){
		for (j = 0; j < a; j++){
			printf ("%d ",matriks[i][j]);
		}
		printf ("\n");
	}
	printf ("TRANSPOSE MATRIX  \n");
	for (i = 0; i < b; i++){
		for (j = 0; j < a; j++){
			printf ("%d",matriks[j][i]);
		}
	printf ("\n");
	}
	return 0;
}
