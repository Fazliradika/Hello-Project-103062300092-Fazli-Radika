#include <iostream> //library iostream, yang diperlukan untuk input dan output
using namespace std; //Menggunakan standar namespace

int main() {
    int a; //Mendeklarasi Variable a menggunakan tipe data integer

    // Meminta input dari pengguna
    cout << "Masukkan sebuah angka: "; //Menampilkan Masukan sebuah angka untuk diisi pengguna
    cin >> a; //Membaca input dari pengguna

    // Memeriksa apakah angka tersebut 5 atau bukan
    if (a == 5) {
        cout << "Ini adalah angka lima" << endl; // Menampilkan hasil jika Angka Adalah Angka 5
    } else {
        cout << "Ini bukan angka lima" << endl;  // Menampilkan hasil jika Angka Bukan Angka 5
    }

    return 0; //Mengembalikan Nilai 0 sebagai tanda program telah selesai
}

// Ini adalah komentar baru

