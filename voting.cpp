#include<iostream>
using namespace std;

int main() {
    int pilihan;
    char ulang;
    int kandidatA = 0;
    int kandidatB = 0;

    do {
        cout << "=== voting ketua osis ===" << endl;
        cout << "1. kandidat A" << endl;
        cout << "2. kandidat B" << endl;
        cout << "masukan pilihan taerpercaya anda (1/2): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                kandidatA++;
                 cout << "anda memilih kandidat A" << endl;
                 break;
            case 2:
                kandidatB++;
                  cout << "anda memilih kandidat B" << endl;
                  break;
            default:
                cout << "pilihan tidak valid. silahkan coba lagi." << endl;
                break;
        }
        cout << "apakah anda ingin melanjutkan voting? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    cout << "\n==== hasil voting siswa ====" << endl;
    cout << "kandidat A mendapatkan " << kandidatA << " suara." << endl;
    cout << "kandidat B mendapatkan " << kandidatB << "suara." << endl;
    if (kandidatA > kandidatB) {
        cout << "kandidat A memenangkan pemilhan." << endl;
    } else if (kandidatB > kandidatA) {
        cout << "kandidat B memenangkan pemilihan." << endl;
    } else {
        cout << "hasil pemilihan imbang." << endl;

        return 0;
    }
}