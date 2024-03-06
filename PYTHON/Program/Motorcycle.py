# Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan Parktikum 4 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
# kecurangan seperti yang telah dispesifikasikan. Aamiin.

# mengimpor kelas vehicle untuk inheritance
from Vehicle import Vehicle  

class Motorcycle(Vehicle):  # mendefinisikan kelas motorcycle yang mewarisi dari kelas Vehicle
    __jenisMotor = ""  # variabel privat untuk jenis motor
    __kapasitasTangki = 0.0  # variabel privat untuk kapasitas tangki

    def __init__(self, platNomor, merk, tahunProduksi, warna, jenisMotor, kapasitasTangki):
        super().__init__(platNomor, merk, tahunProduksi, warna)  # memanggil konstruktor kelas induk (vehicle) dan menginisialisasi atributnya
        self.__jenisMotor = jenisMotor  # menginisialisasi atribut jenis motor
        self.__kapasitasTangki = kapasitasTangki  # menginisialisasi atribut kapasitas tangki

    # metode untuk mengatur jenis motor
    def set_jenisMotor(self, jenisMotor):
        self.__jenisMotor = jenisMotor

    # metode untuk mendapatkan jenis motor
    def get_jenisMotor(self):
        return self.__jenisMotor
    
    # metode untuk mengatur kapasitas tangki
    def set_kapasitasTangki(self, kapasitasTangki):
        self.__kapasitasTangki = kapasitasTangki

    # metode untuk mendapatkan kapasitas tangki
    def get_kapasitasTangki(self):
        return self.__kapasitasTangki
    
    # metode untuk menampilkan informasi lengkap tentang motor
    def infoMotor(self):
        super().infoVehicle()  # memanggil metode infoVehicle dari kelas Vehicle
        print("Jenis Motor      :", self.__jenisMotor)
        print("Kapasitas Tangki :", self.__kapasitasTangki)