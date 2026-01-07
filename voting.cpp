#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    string kandidat[2] = {"Kandidat A", "Kandidat B"};
    int suara[2] = {0, 0};
    int pilihan;
    char ulang;

    do {
        cout << "\n==============================" << endl;
        cout << "      SISTEM VOTING SEDERHANA " << endl;
        cout << "==============================" << endl;

        // Menampilkan kandidat
        cout << "Daftar Kandidat:" << endl;
        cout << "1. " << kandidat[0] << endl;
        cout << "2. " << kandidat[1] << endl;
        cout << "Pilih Kandidat (1-2): ";
        cin >> pilihan;

        // Percabangan
        if (pilihan == 1) {
            suara[0]++;
            cout << "Suara untuk " << kandidat[0] << " berhasil ditambahkan." << endl;
        } else if (pilihan == 2) {
            suara[1]++;
            cout << "Suara untuk " << kandidat[1] << " berhasil ditambahkan." << endl;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }

        // Perulangan
        cout << "\nAda pemilih lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    // Menampilkan hasil voting
    cout << "\n========== HASIL VOTING ==========" << endl;
    cout << kandidat[0] << " : " << suara[0] << " suara" << endl;
    cout << kandidat[1] << " : " << suara[1] << " suara" << endl;
    cout << "=================================" << endl;

    return 0;
}
