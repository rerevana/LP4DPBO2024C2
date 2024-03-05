/*
    Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan Praktikum 4 
    dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
    kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukan library yang digunakan, termasuk kelas induk (kelas Vehicle) dari kelas Car
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

/*
    Kelas Car yang digunakan untuk merepresentasikan data Car, Car merupakan bagian dari Vehicle. Sehingga kelas Car merupakan kelas turunan dari kelas Vehicle.
*/

class Car : public Vehicle{
    private:
        int jumlahKursi;    // Atribut jumlahKursi untuk menyimpan jumlah kursi dalam mobil
        int jumlahPintu;    // Atribut jumlahPintu untuk menyimpan jumlah pintu dalam mobil

    public:
        // Constructor
        Car(){

        }

        // Constructor : Overloading
        Car(int jumlahKursi, string platNomor, string merk, int tahunProduksi, string warna) : Vehicle(platNomor, merk, tahunProduksi, warna){
            this->jumlahKursi = jumlahKursi;
            jumlahPintu = 0;
        }

        // Constructor : Overloading
        Car(int jumlahKursi, int jumlahPintu, string platNomor, string merk, int tahunProduksi, string warna) : Vehicle(platNomor, merk, tahunProduksi, warna){
            this->jumlahKursi = jumlahKursi;
            this->jumlahPintu = jumlahPintu;
        }

        // Method set untuk set setiap nilai atribut pada kelas Car
        void setJumlahKursi(int jumlahKursi){
            this->jumlahKursi = jumlahKursi;
        }

        void setJumlahPintu(int jumlahPintu){
            this->jumlahPintu = jumlahPintu;
        }

        // Method get untuk mendapatkan nilai setiap atribut pada kelas Car
        int getjumlahKursi(){
            return jumlahKursi;
        }

        int getJumlahPintu(){
            return jumlahPintu;
        }

        // Destructor
        ~Car(){

        }
};