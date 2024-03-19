#include <iostream>
using namespace std;

string bunga[10];
int harga[10];
int login = 0;

bool loginProcess() {
    cout << " (Masukkan Nama): ";
    string nama_user;
    cin >> nama_user;
    cout << "(Masukkan Nim): ";
    int nim_user;
    cin >> nim_user;

    if (nama_user == "Junesty" && nim_user == 140) {
        cout << "Login berhasil!\n";
        return true;
    } else {
        cout << "Login gagal. Silakan coba lagi.\n";
        login++;
        if (login >= 3) {
            cout << "Anda telah mencapai batas maksimum percobaan login. Program berhenti.\n";
            return false;
        }
        return false;
    }
}


void displayMenu() {
    cout << "\nSelamat Datang di Toko Bunga!\n";
    cout << "1. Tambah Bunga\n";
    cout << "2. Hapus Bunga\n";
    cout << "3. Ubah Bunga\n";
    cout << "4. Lihat Jenis Bunga yang Tersedia\n";
    cout << "5. Keluar\n";
    cout << "Pilih menu: ";
}


void addFlower() {
    cout << "Masukkan Nama Bunga: ";
    cin >> bunga[0];
    cout << "Masukkan Harga Bunga: ";
    cin >> harga[0];
    cout << "Bunga Berhasil Ditambahkan!\n";
}


void deleteFlower() {
    cout << "Masukkan Nama Bunga Yang Ingin dihapus: ";
    cin >> bunga[0];
    cout << "Masukkan Harga Bunga Yang Ingin dihapus: ";
    cin >> harga[0];
    cout << "Bunga Berhasil dihapus!\n";
}


void updateFlower() {
    cout << "Masukkan Nama Bunga Yang Ingin diubah: ";
    cin >> bunga[0];
    cout << "Masukkan Harga Bunga Yang Ingin diubah: ";
    cin >> harga[0];
    cout << "Masukkan Nama Bunga Baru: ";
    cin >> bunga[0];
    cout << "Masukkan Harga Bunga Baru: ";
    cin >> harga[0];
    cout << "Bunga Berhasil Diubah!\n";
}


void displayFlowers() {
    for (int i = 0; i < 10; i++) {
        cout << "Nama Bunga: " << bunga[i] << "\n";
        cout << "Harga Bunga: " << harga[i] << "\n";
    }
}
void printReverse(int n) {
    if (n == 0)
        return;
    else {
        cout << n << " ";
        printReverse(n - 1);
    }
}
int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void recursiveLogin() {
    if (!loginProcess()) {
        recursiveLogin();
    }
}

int main() {
    recursiveLogin();

    int pilihan;
    while (true) {
        displayMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                addFlower();
                break;

            case 2:
                deleteFlower();
                break;

            case 3:
                updateFlower();
                break;

            case 4:
                displayFlowers();
                break;

            case 5:
                cout << "Sampai Jumpa!\n";
                return 0;
                break;

            default:
                cout << "Pilihan tidak valid!\n";
                break;
        }
    }

    return 0;
}
