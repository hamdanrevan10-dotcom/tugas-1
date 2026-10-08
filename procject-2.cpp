#include <iostream>
using namespace std;

int main() {
    int menu, jumlah;
    int total = 0;
    char ulang;

    do {
        cout << "MENU MAKANAN DAN MINUMAN\n";
        cout << "1. Soto  Rp15000\n";
        cout << "2. Rawon Rp20000\n";
        cout << "3. Pecel Rp10000\n";
        cout << "4. Teh   Rp3000\n";
        cout << "5. Kopi  Rp5000\n";

        cout << "Pilih menu : ";
        cin >> menu;

        cout << "Jumlah : ";
        cin >> jumlah;

        if (menu == 1) {
            total += 15000 * jumlah;
        } else if (menu == 2) {
            total += 20000 * jumlah;
        } else if (menu == 3) {
            total += 10000 * jumlah;
        } else if (menu == 4) {
            total += 3000 * jumlah;
        } else if (menu == 5) {
            total += 5000 * jumlah;
        }

        cout << "Mau pesan lagi? y/n : ";
        cin >> ulang;

    } while (ulang == 'y');

    cout << "Total = Rp" << total << endl;

    return 0;
}
