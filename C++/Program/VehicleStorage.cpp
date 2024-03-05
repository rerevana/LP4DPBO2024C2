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
#include <vector>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

/*
    Kelas VehicleStorage yang digunakan untuk merepresentasikan data VehicleStorage.
*/

class VehicleStorage{
    private:
        string namaTempat;  // Atribut namaTempat untuk menyimpan nama tempat VehicleStorage
        int luas;           // Atribut luas untuk menyimpan luas VehicleStorage
        int kapasitas;      // Atribut kapasitas untuk menyimpan kapasitas VehicleStorage
        int jumlahKendaraanNow;     // Atribut jumlahKendaraanNow untuk menyimpan jumlah kendaraan saat ini dalam VehicleStorage
        std::vector<Vehicle> vehicles;  // Vektor vehicles untuk menyimpan kendaraan-kendaraan yang tersimpan di VehicleStorage

    public:
        // Constructor
        VehicleStorage(){

        }

        // Constructor : Overloading
        VehicleStorage(string namaTempat){  
            this->namaTempat = namaTempat;
            luas = 0;
            kapasitas = 0;
            jumlahKendaraanNow = 0;
        }

        // Constructor : Overloading
        VehicleStorage(string namaTempat, int luas){  
            this->namaTempat = namaTempat;
            this->luas = luas;
            kapasitas = 0;
            jumlahKendaraanNow = 0;
        }

        // Constructor : Overloading
        VehicleStorage(string namaTempat, int luas, int kapasitas){  
            this->namaTempat = namaTempat;
            this->luas = luas;
            this->kapasitas = kapasitas;
            jumlahKendaraanNow = 0;
        }

        // Constructor : Overloading
        VehicleStorage(string namaTempat, int luas, int kapasitas, int jumlahKendaraanNow){  
            this->namaTempat = namaTempat;
            this->luas = luas;
            this->kapasitas = kapasitas;
            this->jumlahKendaraanNow = jumlahKendaraanNow;
        }

        // Constructor : Overloading
        VehicleStorage(string namaTempat, int luas, int kapasitas, int jumlahKendaraanNow, vector<Vehicle> kendaraan) : namaTempat(namaTempat), luas(luas), kapasitas(kapasitas), jumlahKendaraanNow(jumlahKendaraanNow), vehicles(kendaraan) {  

        }

        // Method setter untuk set setiap nilai atribut pada kelas VehicleStorage
        void setNamaTempat(string namaTempat){
            this->namaTempat = namaTempat;
        }

        void setLuas(int luas){
            this->luas = luas;
        }

        void setKapasitas(int kapasitas){
            this->kapasitas = kapasitas;
        }

        void setJumlahKendaraanNow(int jumlahKendaraanNow){
            this->jumlahKendaraanNow = jumlahKendaraanNow;
        }

        void setVehicles(std::vector<Vehicle> vehicles){
            this->vehicles = vehicles;
        }

        // Method getter untuk mendapatkan nilai setiap atribut pada kelas VehicleStorage
        string getNamaTempat(){
            return namaTempat;
        }

        int getLuas(){
            return luas;
        }

        int getKapasitas(){
            return kapasitas;
        }

        int getJumlahKendaraanNow(){
            return jumlahKendaraanNow;
        }

        std::vector<Vehicle> getVehicles(){
            return vehicles;
        }

        // Destructor
        ~VehicleStorage(){

        }
};