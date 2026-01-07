#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

// Mendefinisikan struktur (struct) untuk merepresentasikan informasi Mahasiswa
struct Mahasiswa {
    string nama;  // Nama
    string tempatTanggalLahir;  // Tempat dan Tanggal Lahir
    string alamat;  // Alamat
    string namaSekolah;  // Nama Sekolah
    string programStudi;  // Program Studi
    string jeniskelamin;  // Jenis Kelamin
    string agama;  // Agama
    string kewarganegaraan;  // Kewarganegaraan
    double nilaiUTBK;  // Nilai UTBK
    string NISN;  // Nomor Induk Siswa Nasional
};

// Fungsi untuk mencetak informasi Mahasiswa secara terformat
void printMahasiswa(const Mahasiswa& mhs) {
    cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    cout << "|Nama                 : " << setw(40) << left << mhs.nama << "|" << endl;
    cout << "|NISN                 : " << setw(40) << left << mhs.NISN << "|" << endl;
    cout << "|Tempat, Tanggal Lahir: " << setw(40) << left << mhs.tempatTanggalLahir << "|" << endl;
    cout << "|Jenis Kelamin        : " << setw(40) << left << mhs.jeniskelamin << "|" << endl;
    cout << "|Agama                : " << setw(40) << left << mhs.agama << "|" << endl;
    cout << "|Kewarganegaraan      : " << setw(40) << left << mhs.kewarganegaraan << "|" << endl;
    cout << "|Alamat               : " << setw(40) << left << mhs.alamat << "|" << endl;
    cout << "|Nama Sekolah         : " << setw(40) << left << mhs.namaSekolah << "|" << endl;
    cout << "|Program Studi        : " << setw(40) << left << mhs.programStudi << "|" << endl;
    cout << "|Nilai UTBK           : " << setw(40) << left << mhs.nilaiUTBK << "|" << endl;
    cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
}

int main() {
     char pendaftaran;  // Variabel untuk menyimpan pilihan menu pengguna
     int cetakkartu = 0;  // Menginisialisasi variabel untuk menghitung kartu yang dicetak
     Mahasiswa mahasiswa[1];  // Array untuk beberapa Mahasiswa

    do {
        // Menampilkan menu utama
        cout << "===============================================================" << endl;
        cout << "=======PENERIMAAN MAHASISWA BARU UNIVERSITAS TERNAK LELE=======" << endl;
        cout << "===============================================================" << endl;

        cout << "1. Pendaftaran " << endl;
        cout << "2. Cetak kartu Pendaftaran " << endl;
        cout << "3. Keluar " << endl;
        cout << "===============================================================" << endl;
        cout << "Masukkan Pilihan :";
        cin >> pendaftaran;

        switch (pendaftaran) {
            case '1':
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan buffer keyboard

                cout << "Masukkan Nama : ";
                getline(cin, mahasiswa[cetakkartu].nama);

                cout << "Masukkan NISN : ";
                cin >> mahasiswa[cetakkartu].NISN;

                cout << "Tempat, Tanggal lahir (contoh: Purwokerto, 01-01-2000) : ";
                cin.ignore();
                getline(cin, mahasiswa[cetakkartu].tempatTanggalLahir);

                cout << "Jenis kelamin : ";
                getline(cin, mahasiswa[cetakkartu].jeniskelamin);

                cout << "Agama : ";
                getline(cin, mahasiswa[cetakkartu].agama);

                cout << "Kewarganegaraan : ";
                getline(cin, mahasiswa[cetakkartu].kewarganegaraan);

                cout << "Alamat : ";
                getline(cin, mahasiswa[cetakkartu].alamat);

                cout << "Masukkan Nama Sekolah : ";
                getline(cin, mahasiswa[cetakkartu].namaSekolah);

                cout << "Program Studi pilihan : ";
                getline(cin, mahasiswa[cetakkartu].programStudi);

                cout << "Masukkan nilai UTBK : ";
                cin >> mahasiswa[cetakkartu].nilaiUTBK;

                if (mahasiswa[cetakkartu].nilaiUTBK >= 650.0) {
                    cout << "\nSelamat! Anda diterima di Program Studi " << mahasiswa[cetakkartu].programStudi << "." << endl;
                } else {
                    cout << "\nMaaf, Anda tidak diterima di Program Studi " << mahasiswa[cetakkartu].programStudi << ". Nilai UTBK Anda tidak mencukupi." << endl;
                }

                cetakkartu++;
                break;

            case '2':
                cout << "Cetak Kartu" << endl;
                for (int i = 0; i < cetakkartu; ++i) {
                    printMahasiswa(mahasiswa[i]);
                }
                return 0;

            case '3':
                cout << "Terima kasih! Keluar dari program." << endl;
                return 0;

            default:
                cout << "Pilihan tidak valid!" << endl;
                break;
        }
    } while (pendaftaran != '3');

    return 0;
}
