#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int i, jumlahDeret = 10, bilangan, hasilPenjumlahan = 0;

  // Perulangan untuk menghitung 10 deret bilangan genap
  for (i = 1; i <= jumlahDeret; i++) {
    // Hitung bilangan genap ke-i
    bilangan = 2 * i;

    // Tambahkan bilangan genap ke hasil penjumlahan
    hasilPenjumlahan += bilangan;

    // Tampilkan bilangan genap ke-i
    cout << bilangan << " ";
  }

  // Tampilkan hasil penjumlahan
  cout << endl << "Hasil penjumlahan: " << hasilPenjumlahan << endl;

  return 0;
}
