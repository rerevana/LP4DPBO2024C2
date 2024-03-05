/*
    Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan Praktikum 4 
    dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
    kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukan library yang digunakan
#include <iostream>
#include <string>

// Deklarasi namespace
using namespace std;

/*
    Kelas Vehicle yang digunakan untuk merepresentasikan data Vehicle, Vehicle merupakan kelas induk dari kelas Car dan Motorcycle
*/

class Vehicle {
    private:
        string platNomor;   // Atribut platNomor untuk menyimpan nomor plat kendaraan
        string merk;        // Atribut merk untuk menyimpan merk kendaraan
        int tahunProduksi;  // Atribut tahunProduksi untuk menyimpan tahun produksi kendaraan
        string warna;       // Atribut warna untuk menyimpan warna kendaraan

    public:
        // Constructor
        Vehicle(){

        }

        // Constructor : Overloading
        Vehicle(string platNomor){
            this->platNomor = platNomor;
            merk = "";
            tahunProduksi = 0;
            warna = "";
        }

        // Constructor : Overloading
        Vehicle(string platNomor, string merk){
            this->platNomor = platNomor;
            this->merk = merk;
            tahunProduksi = 0;
            warna = "";
        }

        // Constructor : Overloading
        Vehicle(string platNomor, string merk, int tahunProduksi){
            this->platNomor = platNomor;
            this->merk = merk;
            this->tahunProduksi = tahunProduksi;
            warna = "";
        }

        // Constructor : Overloading
        Vehicle(string platNomor, string merk, int tahunProduksi, string warna){
            this->platNomor = platNomor;
            this->merk = merk;
            this->tahunProduksi = tahunProduksi;
            this->warna = warna;
        }

        // Method setter untuk set nilai setiap atribut pada kelas Vehicle
        void setPlatNomor(string platNomor){
            this->platNomor = platNomor;
        }

        void setMerk(string merk){
            this->merk = merk;
        }

        void setTahunProduksi(int tahunProduksi){
            this->tahunProduksi = tahunProduksi;
        }

        void setWarna(string warna){
            this->warna = warna;
        }

        // Method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
        string getPlatNomor(){
            return platNomor;
        }

        string getMerk(){
            return merk;
        }

        int getTahunProduksi(){
            return tahunProduksi;
        }

        string getWarna(){
            return warna;
        }

        // Destructor
        ~Vehicle(){

        }
};