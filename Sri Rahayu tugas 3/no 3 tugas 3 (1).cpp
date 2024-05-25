#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  string namaKaryawan;
  int golonganJabatan, pendidikan, jumlahJamKerja;
  float gajiPokok, tunjanganJabatan, tunjanganPendidikan, honorLembur, gajiTotal;

  // Input data
  cout << "PROGRAM HITUNG GAJI KARYAWAN KONTRAK" << endl;
  cout << "--------------------------------------" << endl;
  cout << "Nama Karyawan : ";
  getline(cin, namaKaryawan);
  cout << "Golongan Jabatan (1/2/3) : ";
  cin >> golonganJabatan;
  cout << "Pendidikan (SMA/D1/D3/S1) : ";
  cin >> pendidikan;
  cout << "Jumlah Jam Kerja : ";
  cin >> jumlahJamKerja;

  // Hitung gaji pokok
  gajiPokok = 300000;

  // Hitung tunjangan jabatan
  switch (golonganJabatan) {
    case 1:
      tunjanganJabatan = 0.05 * gajiPokok;
      break;
    case 2:
      tunjanganJabatan = 0.10 * gajiPokok;
      break;
    case 3:
      tunjanganJabatan = 0.15 * gajiPokok;
      break;
    default:
      tunjanganJabatan = 0;
  }

  // Hitung tunjangan pendidikan
  switch (pendidikan) {
    case 1: // SMA
      tunjanganPendidikan = 0.025 * gajiPokok;
      break;
    case 2: // D1
      tunjanganPendidikan = 0.05 * gajiPokok;
      break;
    case 3: // D3
      tunjanganPendidikan = 0.20 * gajiPokok;
      break;
    case 4: // S1
      tunjanganPendidikan = 0.30 * gajiPokok;
      break;
    default:
      tunjanganPendidikan = 0;
  }

  // Hitung honor lembur
  if (jumlahJamKerja > 8) {
    honorLembur = (jumlahJamKerja - 8) * 3500;
  } else {
    honorLembur = 0;
  }

  // Hitung gaji total
  gajiTotal = gajiPokok + tunjanganJabatan + tunjanganPendidikan + honorLembur;

  // Tampilan output
  cout << endl;
  cout << "Karyawan atas nama " << namaKaryawan << endl;
  cout << "Menerima gaji total sebesar Rp. " << gajiTotal << endl;
  cout << "Dengan rincian: " << endl;
  cout << "- Gaji Pokok: Rp. " << gajiPokok << endl;
  cout << "- Tunjangan Jabatan: Rp. " << tunjanganJabatan << endl;
  cout << "- Tunjangan Pendidikan: Rp. " << tunjanganPendidikan << endl;
  cout << "- Honor Lembur: Rp. " << honorLembur << endl;

  return 0;
}
