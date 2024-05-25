#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  string namaSiswa;
  float nilai1, nilai2, nilai3, nilaiRataRata;
  char juara;

  // Input data
  cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
  cout << "-----------------------------" << endl;
  cout << "Nama Siswa : ";
  getline(cin, namaSiswa);
  cout << "Nilai Pertandingan I : ";
  cin >> nilai1;
  cout << "Nilai Pertandingan II : ";
  cin >> nilai2;
  cout << "Nilai Pertandingan III : ";
  cin >> nilai3;

  // Hitung nilai rata-rata
  nilaiRataRata = (nilai1 + nilai2 + nilai3) / 3;

  // Menentukan juara
  if (nilaiRataRata >= 80) {
    juara = 'I';
  } else if (nilaiRataRata >= 75) {
    juara = 'II';
  } else if (nilaiRataRata >= 65) {
    juara = 'III';
  } else {
    juara = '-';
  }

  // Tampilan output
  cout << endl;
  cout << "Siswa yang bernama " << namaSiswa << endl;
  cout << "Memperoleh nilai rata-rata " << nilaiRataRata << " dan menjadi juara ke-" << juara << " dari hasil perlombaan yang diikutinya." << endl;

  return 0;
}
