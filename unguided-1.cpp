#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Rayya_2311102313() {
    int jumlahSimpul;

    // Meminta pengguna memasukkan jumlah simpul
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul;

    string *simpul = new string[jumlahSimpul];
    int **bobot = new int*[jumlahSimpul];
    for (int i = 0; i < jumlahSimpul; ++i) {
        bobot[i] = new int[jumlahSimpul];
    }

    // Meminta pengguna memasukkan nama-nama simpul
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> simpul[i];
    }

    // Meminta pengguna memasukkan bobot antar simpul
    cout << "\nSilakan masukkan bobot antar simpul" << endl;
    for (int i = 0; i < jumlahSimpul; i++) {
        for (int j = 0; j < jumlahSimpul; j++) {
            cout << simpul[i] << "--> " << simpul[j] << " = ";
            cin >> bobot[i][j];
        }
    }

    // Menampilkan hasil input pengguna
    cout << "\n";
    cout << setw(15) << " ";
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << setw(15) << simpul[i];
    }
    cout << "\n";

    for (int i = 0; i < jumlahSimpul; i++) {
        cout << setw(15) << simpul[i];
        for (int j = 0; j < jumlahSimpul; j++) {
            cout << setw(15) << bobot[i][j];
        }
        cout << endl;
    }

    // Menghapus memori yang dialokasikan secara dinamis
    delete[] simpul;
    for (int i = 0; i < jumlahSimpul; ++i) {
        delete[] bobot[i];
    }
    delete[] bobot;
}

int main() {
    Rayya_2311102313();
    return 0;
}
