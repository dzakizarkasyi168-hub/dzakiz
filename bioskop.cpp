#include<iostream>
using namespace std;

int main() {
    int pilihan, jumlah;
    char ulang;
    int harga =50000;
    int total;

    do{
        cout << "\n====pemesanan tiket bioskop====" << endl;
        cout << "1.avengers" << endl;
        cout << "2.spiderman" << endl;
        cout << "3.batman" << endl;
        cout << "pilih film (1-3): ";
        cin >> pilihan;  

        cout << "jumlah tiket yang di pesan; " ;
        cin >> jumlah;
        total = harga * jumlah;
        cout << "total pembayaran: " << total << endl;
        cout << "apakah ingin memesan tiket lagi? (y/n): ";
        cin >> ulang;
    } while(ulang == 'y' || ulang == 'Y');
     cout << "terimaksih telah memesan tiket" << endl;

     return 0;

}