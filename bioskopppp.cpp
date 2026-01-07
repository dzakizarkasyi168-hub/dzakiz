#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel & array
    string film[3] = {"Avengers", "Spiderman", "Batman"};
    int pilihanFilm, pilihanJam;
    int jumlahTiket;
    int hargaTiket = 50000;
    int totalHarga;
    char ulang;

    do {
        cout << "\n====================================" << endl;
        cout << "     SISTEM PEMESANAN TIKET BIOSKOP  " << endl;
        cout << "====================================" << endl;

        // Menu film
        cout << "\nDaftar Film:" << endl;
        cout << "1. Avengers" << endl;
        cout << "2. Spiderman" << endl;
        cout << "3. Batman" << endl;
        cout << "Pilih Film (1-3): ";
        cin >> pilihanFilm;

        // Menu jam tayang
        cout << "\nJam Tayang:" << endl;
        cout << "1. 10.00" << endl;
        cout << "2. 13.00" << endl;
        cout << "3. 16.00" << endl;
        cout << "Pilih Jam Tayang (1-3): ";
        cin >> pilihanJam;

        // Input jumlah tiket
        cout << "\nMasukkan Jumlah Tiket: ";
        cin >> jumlahTiket;

        // Proses perhitungan
        totalHarga = jumlahTiket * hargaTiket;

        // Output struk
        cout << "\n=========== STRUK PEMESANAN ===========" << endl;
        cout << "Film        : " << film[pilihanFilm - 1] << endl;

        switch (pilihanJam) {
            case 1: cout << "Jam Tayang  : 10.00" << endl; break;
            case 2: cout << "Jam Tayang  : 13.00" << endl; break;
            case 3: cout << "Jam Tayang  : 16.00" << endl; break;
            default: cout << "Jam Tayang  : Tidak Valid" << endl;
        }

        cout << "Jumlah Tiket: " << jumlahTiket << endl;
        cout << "Harga Tiket : Rp " << hargaTiket << endl;
        cout << "Total Harga : Rp " << totalHarga << endl;
        cout << "======================================" << endl;

        // Perulangan
        cout << "\nPesan tiket lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nTerima kasih telah memesan tiket!" << endl;
    return 0;
}
