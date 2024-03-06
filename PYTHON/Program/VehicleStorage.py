# Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan Parktikum 4 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
# kecurangan seperti yang telah dispesifikasikan. Aamiin.

# mengimpor kelas vehicle untuk composite
from Vehicle import Vehicle

class VehicleStorage:
    
    __namaTempat = ""       # variabel privat untuk nama tempat
    __luas = 0              # variabel privat untuk luas tempat
    __kapasitas = 0         # variabel privat untuk kapasitas penyimpanan
    __jumlahKendaraanNow = 0    # variabel privat untuk jumlah kendaraan saat ini
    __vehicles = []         # list privat untuk menyimpan kendaraan

    # konstruktor dengan parameter
    def __init__(self, namaTempat, luas, kapasitas, jumlahKendaraan, vehicles):
        self.__namaTempat = namaTempat              # menginisialisasi atribut nama tempat
        self.__luas = luas                          # menginisialisasi atribut luas tempat
        self.__kapasitas = kapasitas                # menginisialisasi atribut kapasitas penyimpanan
        self.__jumlahKendaraanNow = jumlahKendaraan # menginisialisasi atribut jumlah kendaraan saat ini
        self.__vehicles = []                        # menginisialisasi list kendaraan

    # metode untuk mengatur nama tempat
    def set_namaTempat(self, namaTempat):
        self.__namaTempat = namaTempat

    # metode untuk mendapatkan nama tempat
    def get_namaTempat(self):
        return self.__namaTempat
    
    # metode untuk mengatur luas tempat
    def set_luas(self, luas):
        self.__luas = luas

    # metode untuk mendapatkan luas tempat
    def get_luas(self):
        return self.__luas
    
    # metode untuk mengatur kapasitas tempat
    def set_kapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    ## metode untuk mendapatkan kapasitas tempat
    def get_kapasitas(self):
        return self.__kapasitas
    
    # metode untuk mengatur jumlah kendaraan saat ini
    def set_jumlahKendaraan(self, jumlahKendaraan):
        self.__jumlahKendaraanNow = jumlahKendaraan

    # metode untuk mendapatkan jumlah kendaraan saat ini
    def get_jumlahKendaraan(self):
        return self.__jumlahKendaraanNow
    
    # metode untuk mengatur daftar kendaraan
    def set_vehicles(self, vehicles):
        self.__vehicles = vehicles

    # metode untuk mendapatkan daftar kendaraan
    def get_vehicles(self):
        return self.__vehicles

    # metode untuk menambahkan kendaraan ke dalam penyimpanan
    def tambahKendaraan(self, kendaraan):
        if self.__jumlahKendaraanNow < self.__kapasitas:
            self.__vehicles.append(kendaraan)
            self.__jumlahKendaraanNow += 1
            print("\nYeayy! Data kendaraan berhasil ditambahkan!")
        else:
            print("\nKapasitas sudah penuh, tidak dapat menambahkan kendaraan baru:(")