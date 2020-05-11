#include <stdio.h>
int main() {
	printf("Saputra F1B019129 KLP 26");
  int x,y,baris=2,kolom=2, matriks1[1][1], matriks2[1][1], hasil[1][1];
  printf("\nMasukkan nilai matriks pertama: \n");
  for(x = 0; x < baris; x++){
    for(y = 0; y < kolom; y++){
     scanf("%d",&matriks1[x][y]);
    }
  }
  printf("\nMasukkan Nilai matriks kedua: \n");
  for(x = 0; x < baris; x++){
    for(y = 0; y < kolom; y++){
      scanf("%d",&matriks2[x][y]);
    }
  }
  printf("Hasil Perkalian: \n");
  for(x = 0; x < baris; x++){
    for(y = 0; y < kolom; y++){
      hasil[x][y] = matriks1[x][y] * matriks2[x][y];
      printf("%d",hasil[x][y]);
      printf("\n");
  }
}
  return 0;
}
