#include <iostream>
#include <cstdlib> // untuk fungsi atoi

using namespace std;

int main(int argc, char *argv[]) {
    // Memeriksa apakah parameter panjang dan lebar diberikan
    if (argc != 3) {
        cout << "Penggunaan: " << argv[0] << " <panjang> <lebar>" << endl;
        return 1;
    }

    // Mengambil nilai panjang dan lebar dari parameter input
    int panjang = atoi(argv[1]);
    int lebar = atoi(argv[2]);

    // Menghitung luas segi empat
    int luas = panjang * lebar;

    // Menampilkan hasil
    cout << "Luas segi empat dengan panjang " << panjang << " dan lebar " << lebar << " adalah: " << luas << endl;

    return 0;
}

