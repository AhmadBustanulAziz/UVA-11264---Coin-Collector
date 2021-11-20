/*
    Nama      : Ahmad Bustanul Aziz
    NIM       : 24060118120022
    Matkul    : Analisis dan Strategi Algoritma
    Tanggal   : 18 November 2021
    Deskripsi : Permasalahan UVa 11264 - Coin Collector
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Kamus Lokal
    int T, n, C[100], Coin, i, j, k = 0, temp, Array[100];
    //Algoritma
    cin >> T;
    while (T>0) {
        cin >> n;
        for (i=0; i<n; i++) {
            cin >> C[i];
        }
        Coin = 1;
        temp = C[0];
        for (j=1; j<n; j++) {
            if (temp < C[j]) {
                temp += C[j];
                Coin++;
            }
        }
        Array[k] = Coin;
        k++;
        T--;
    }

    for (int l=0; l<k; l++) {
        cout << Array[l] << "\n";
    }

    return 0;
}
