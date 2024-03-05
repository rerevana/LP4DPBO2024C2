/*
    Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan Praktikum 4 
    dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
    kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Memasukan library yang digunakan ke dalam fungsi main (program utama)
#include <bits/stdc++.h>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "VehicleStorage.cpp"

// Deklarasi namespace
using namespace std;

// Fungsi main() yang digunakan sebagai program utama
int main() {
    ios::sync_with_stdio(0);    // Mengatur sinkronisasi dengan C standard input/output streams untuk meningkatkan efisiensi I/O
    cin.tie();                  // Mengatur buffering agar lebih efisien

    vector<Vehicle> kendaraan;  // Vektor untuk menyimpan objek kendaraan
    vector<Car> cars;           // Vektor untuk menyimpan objek mobil
    vector<Motorcycle> motorcycles; // Vektor untuk menyimpan objek motor
    vector<VehicleStorage> place; // Vektor untuk menyimpan objek tempat penyimpanan kendaraan

    cout << "\nSilahkan masukkan informasi penyimpanan kendaraan:>\n";
    string namaTempat;  // Variabel untuk menyimpan nama tempat
    int luas, kapasitas;    // Variabel untuk menyimpan luas dan kapasitas tempat

    // Meminta input dari user
    cout << "Nama Tempat        : ";
    cin >> namaTempat;
    cout << "Luas Tempat        : ";
    cin >> luas;
    cout << "Kapasitas Tempat   : ";
    cin >> kapasitas;

    // Membuat objek VehicleStorage baru dan mengatur nilai menggunakan setter
    VehicleStorage parkiran;
    parkiran.setNamaTempat(namaTempat); parkiran.setLuas(luas); parkiran.setKapasitas(kapasitas);

    // Menambahkan objek VehicleStorage ke dalam vektor
    place.push_back(parkiran);

    cout << "\n" << "Selamat Datang di Pusat Informasi Kendaraan " << parkiran.getNamaTempat() << endl;

    // Deklarasi integer untuk menyimpan pilihan aksi
    int pilih;  

    do {
        // Menampilkan aksi-aksi yang dapat dilakukan
        cout << endl << "Pilih Menu" << endl;
        cout << "0. Keluar" << endl;
        cout << "1. Tambahkan Data Kendaraan" << endl;
        cout << "2. Lihat Data Kendaraan" << endl;
        cout << "3. Lihat Data Tempat Penyimpanan Kendaraan" << "\n\n";

        // Meminta input pilihan aksi dari user
        cout << "Menu yang Dipilih: ";
        cin >> pilih;

        // Inisialisasi untuk flag selesai memilih aksi
        int find = 0;   

        // Inisialisasi variabel untuk menandai apakah aksi yang dipilih ditemukan atau tidak
        vector<Vehicle>::iterator transport = kendaraan.begin();

       do {
            if (pilih == 1) {
                // Jika aksi yang dipilih adalah 1

                // Menambahkan kendaraan hanya jika jumlah kendaraan kurang dari kapasitas tempat
                if (cars.size() + motorcycles.size() < parkiran.getKapasitas()) {
                    char pilihan;   // Variabel untuk menyimpan pilihan jenis kendaraan
                    int n;          // Variabel untuk menyimpan jumlah data yang ingin ditambahkan
                    int i;          // // Inisialisasi iterator untuk list kendaraan
                    do{
                        // Menampilkan pilihan jenis kendaraan yang dapat ditambahkan
                        cout << endl << "Pilih Jenis Kendaraan yang Ingin Anda Tambahkan" << endl;
                        cout << "X. Keluar" << endl;
                        cout << "A. Mobil" << endl;
                        cout << "B. Motor" << "\n\n";

                        // Input aksi yang dipilih
                        cout << "Jenis Kendaraan yang Dipilih: ";
                        cin >> pilihan;

                        if(pilihan == 'A'){
                            // Jika aksi yang dipilih adalah A

                            // Meminta input banyak data dari user
                            cout << "Masukkan Banyak Mobil: ";
                            cin >> n;

                            for (i = 0; i < n; i++) {
                                // Meminta input data mobil dari pengguna
                                string platNomor, merk, warna;
                                int tahunProduksi, jumPintu, jumKursi;

                                cout << "\nMasukkan data untuk mobil ke-" << i + 1 << endl;
                                
                                cout << "Plat Nomor Mobil       : ";
                                cin >> platNomor;
                                cout << "Merk Mobil             : ";
                                cin >> merk;
                                cout << "Tahun Produksi Mobil   : ";
                                cin >> tahunProduksi;
                                cout << "Warna Mobil            : ";
                                cin >> warna;
                                cout << "Jumlah Kursi Mobil     : ";
                                cin >> jumKursi;
                                cout << "Jumlah Pintu Mobil     : ";
                                cin >> jumPintu;

                                // Membuat objek Car baru dan mengatur nilai menggunakan setter
                                Car mobil;
                                mobil.setPlatNomor(platNomor); mobil.setMerk(merk); mobil.setTahunProduksi(tahunProduksi);
                                mobil.setWarna(warna); mobil.setJumlahKursi(jumKursi); mobil.setJumlahPintu(jumPintu);

                                // Menambahkan objek Car ke dalam vektor
                                cars.push_back(mobil);
                            }

                            cout << endl << "Yeayy!! Data mobil berhasil ditambahkan:>" << "\n\n";

                        }else if(pilihan == 'B'){
                            // Jika aksi yang dipilih adalah B

                            // Meminta input banyak data dari user
                            cout << "Masukkan Banyak Motor: ";
                            cin >> n;

                            for (i = 0; i < n; i++) {
                                // Meminta input data motor dari pengguna
                                string platNomor, merk, warna, jenisMotor;
                                int tahunProduksi;
                                float kapasitasTangki;

                                cout << "\nMasukkan data untuk motor ke-" << i + 1 << endl;
                                
                                cout << "Plat Nomor Motor       : ";
                                cin >> platNomor;
                                cout << "Merk Motor             : ";
                                cin >> merk;
                                cout << "Tahun Produksi Motor   : ";
                                cin >> tahunProduksi;
                                cout << "Warna Motor            : ";
                                cin >> warna;
                                cout << "Jenis Motor            : ";
                                cin >> jenisMotor;
                                cout << "Kapasitas Tangki       : ";
                                cin >> kapasitasTangki;

                                // Membuat objek Motorcycle baru dan mengatur nilai menggunakan setter
                                Motorcycle motor;
                                motor.setPlatNomor(platNomor); motor.setMerk(merk); motor.setTahunProduksi(tahunProduksi);
                                motor.setWarna(warna); motor.setJenisMotor(jenisMotor); motor.setKapasitasTangki(kapasitasTangki);

                                // Menambahkan objek Motorcycle ke dalam vektor
                                motorcycles.push_back(motor);
                            }

                            cout << endl << "Yeaayy!! Data motor berhasil ditambahkan:>" << "\n\n";
                            

                        }else if (pilihan != 'A' && pilihan != 'B' && pilihan != 'X'){
                            cout << endl << "Pilihan Tidak Valid!" << endl;
                        }

                        find = 1;   // Menandai bahwa aksi telah ditemukan

                    }while(pilihan != 'X');

                } else {
                    // Pesan jika kapasitas penyimpanan kendaraan sudah penuh
                    cout << endl << "Maaf, tidak dapat menambahkan data karena kapasitas tempat penyimpanan kendaraan sudah penuh:(" << endl;
                }

            } else if (pilih == 2) {
                // Jika aksi yang dipilih adalah 2

                // Menampilkan data kendaraan yang ada
                cout << endl << "Data Kendaraan Terkini" << endl;

                // Menampilkan data Mobil
                cout << "Data Mobil:" << endl;
                for (int i = 0; i < cars.size(); ++i) {
                    cout << i + 1<< "." << endl;
                    cout << "Plat Nomor         : " << cars[i].getPlatNomor() << endl;
                    cout << "Merk               : " << cars[i].getMerk() << endl;
                    cout << "Tahun Produksi     : " << cars[i].getTahunProduksi() << endl;
                    cout << "Warna              : " << cars[i].getWarna() << endl;
                    cout << "Jumlah Kursi       : " << cars[i].getjumlahKursi() << endl;
                    cout << "Jumlah Pintu       : " << cars[i].getJumlahPintu() << "\n\n";
                }

                // Menampilkan data Motor
                cout << "Data Motor:" << endl;
                for (int i = 0; i < motorcycles.size(); ++i) {
                    cout << i + 1<< "." << endl;
                    cout << "Plat Nomor         : " << motorcycles[i].getPlatNomor() << endl;
                    cout << "Merk               : " << motorcycles[i].getMerk() << endl;
                    cout << "Tahun Produksi     : " << motorcycles[i].getTahunProduksi() << endl;
                    cout << "Warna              : " << motorcycles[i].getWarna() << endl;
                    cout << "Jenis Motor        : " << motorcycles[i].getJenisMotor() << endl;
                    cout << "Kapasitas Tangki   : " << motorcycles[i].getKapasitasTangki() << " liter" << "\n\n";
                }

                find = 1;   // Menandai bahwa aksi telah ditemukan

            } else if (pilih == 3) {
                // Jika aksi yang dipilih adalah 3

                // Menampilkan data tempat penyimpanan kendaraan
                cout << endl << "Data Tempat Penyimpanan Kendaraan" << endl;
                cout << "Nama Tempat        : " << parkiran.getNamaTempat() << endl;
                cout << "Luas Tempat        : " << parkiran.getLuas() << " M2" << endl;
                cout << "Kapasitas Tempat   : " << parkiran.getKapasitas() << " Kendaraan" << endl;
                cout << "Jumlah Kendaraan   : " << cars.size() + motorcycles.size() << endl;
                cout << "                     Mobil = " << cars.size() << endl;
                cout << "                     Motor = " << motorcycles.size() << endl;
                
                find = 1;   // Menandai bahwa aksi telah ditemukan

            } else if (pilih == 0) {
                // jika aksi yang dipilih adalah 0

                cout << endl << "Terima kasih telah berkunjung ke Pusat Informasi Kendaraan!" << endl;
            }
            
        }while (find == 0 && transport != kendaraan.end());    // Melakukan looping jika aksi tidak ditemukan dan iterator belum mencapai akhir list

    } while (pilih != 0);   // Melakukan looping program utama hingga pengguna memilih untuk keluar (aksi 0)

    return 0;   // Keluar dari program
}