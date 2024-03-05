/*
    Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan Praktikum 4 
    dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
    kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukan library yang digunakan, termasuk kelas induk (kelas Vehicle) dari kelas Motorcycle
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

/*
    Kelas Motorcycle yang digunakan untuk merepresentasikan data Motorcycle, Motorcycle merupakan bagian dari Vehicle. Sehingga kelas Motorcycle merupakan kelas turunan dari kelas Vehicle.
*/

class Motorcycle : public Vehicle{
    private:
        string jenisMotor;      // Atribut jenisMotor untuk menyimpan jenis motor
        float kapasitasTangki;    // Atribut kapasitasTangki untuk menyimpan kapasitas tangki motor

    public:
        // Constructor
        Motorcycle(){

        }

        // Constructor : Overloading
        Motorcycle(string jenisMotor, string platNomor, string merk, int tahunProduksi, string warna) : Vehicle(platNomor, merk, tahunProduksi, warna){
            this->jenisMotor = jenisMotor;
            kapasitasTangki = 0;
        }

        // Constructor : Overloading
        Motorcycle(string jenisMotor, float kapasitasTangki, string platNomor, string merk, int tahunProduksi, string warna) : Vehicle(platNomor, merk, tahunProduksi, warna){
            this->jenisMotor = jenisMotor;
            this->kapasitasTangki = kapasitasTangki;
        }

        // Method set untuk set setiap nilai atribut pada kelas Motorcycle
        void setJenisMotor(string jenisMotor){
            this->jenisMotor = jenisMotor;
        }

        void setKapasitasTangki(float kapasitasTangki){
            this->kapasitasTangki = kapasitasTangki;
        }

        // Method get untuk mendapatkan nilai setiap atribut pada kelas Motorcycle
        string getJenisMotor(){
            return jenisMotor;
        }

        float getKapasitasTangki(){
            return kapasitasTangki;
        }

        // Destructor
        ~Motorcycle(){

        }
};