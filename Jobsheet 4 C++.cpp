#include <iostream>
using namespace std;
int main() {
	cout<<"Saputra F1B019129 KLP 26";
  int x,y,baris=2,kolom=2, matriks1[1][1], matriks2[1][1], hasil[1][1];
  cout<<"\nMasukkan nilai matriks pertama: \n";
  for(x = 0; x < baris; x++){
    for(y = 0; y < kolom; y++){
     cin>>matriks1[x][y];
    }
  }
  cout<<"\nMasukkan Nilai matriks kedua: \n";
  for(x = 0; x < baris; x++){
    for(y = 0; y < kolom; y++){
      cin>>matriks2[x][y];
    }
  }
 cout<<"Hasil Pengurangan: \n";
  for(x = 0; x < baris; x++){
    for(y = 0; y < kolom; y++){
      hasil[x][y] = matriks1[x][y] - matriks2[x][y];
      cout<<hasil[x][y];
      cout<<"\n";
  }
}
  return 0;
}
