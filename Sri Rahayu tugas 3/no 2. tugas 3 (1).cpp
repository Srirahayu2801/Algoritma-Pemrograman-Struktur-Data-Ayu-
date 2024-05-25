#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  string namaSiswa;
  float nilaiKeaktifan, nilaiTugas, nilaiUjian, nilaiAkhir, nilaiMurniKeaktifan, nilaiMurniTugas, nilaiMurniUjian;
  char grade;

  // Input data
  cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
  cout << "------------------------------" << endl;
  cout << "Nama Siswa : ";
  getline(cin, namaSiswa);
  cout << "Nilai Keaktifan : ";
  cin >> nilaiKeaktifan;
  cout << "Nilai Tugas : ";
  cin >> nilaiTugas;
  cout << "Nilai Ujian : ";
  cin >> nilaiUjian;

  // Hitung nilai murni
  nilaiMurniKeaktifan = nilaiKeaktifan * 0.2;
  nilaiMurniTugas = nilaiTugas * 0.3;
  nilaiMurniUjian = nilaiUjian * 0.5;

  // Hitung nilai akhir
  nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;

  // Menentukan grade
  if (nilaiAkhir >= 80) {
    grade = 'A';
  } else if (nilaiAkhir >= 70) {
    grade = 'B';
  } else if (nilaiAkhir >= 56) {
    grade = 'C';
  } else if (nilaiAkhir >= 46) {
    grade = 'D';
  } else {
    grade = 'E';
  }

  // Tampilan output
  cout << endl;
  cout << "Siswa yang bernama " << namaSiswa << endl;
  cout << "Dengan Nilai Persentasi Yang dihasilkan." << endl;
  cout << "Nilai Keaktifan * 20% : " << nilaiMurniKeaktifan << endl;
  cout << "Nilai Tugas * 30% : " << nilaiMurniTugas << endl;
  cout << "Nilai Ujian * 50% : " << nilaiMurniUjian << endl;
  cout << "Jadi Siswa yang bernama " << namaSiswa << " memperoleh nilai akhir sebesar " << nilaiAkhir << " dengan grade " << grade << endl;

  return 0;
}
