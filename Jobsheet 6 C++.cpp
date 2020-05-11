#include <iostream>
using namespace std;
main (){
	int a,b,matriks [5][5];
	cout << "Saputra F1B019129\n";
	cout << "Masukkan jumlah baris = ";
	cin >> a;
	cout << "Masukkan jumlah kolom = ";
	cin >> b;
	
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout << "Masukkan nilai index " << i << "," << j << ":";
			cin >> matriks [i][j];
		}
	}
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout <<matriks [i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"Hasil transpose :\n";
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout <<matriks [j][i]<<" ";
		}
	cout<<"\n";
	}
}
