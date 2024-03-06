# Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan Parktikum 4 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
# kecurangan seperti yang telah dispesifikasikan. Aamiin.

# mengimpor kelas vehicle untuk inheritance
from Vehicle import Vehicle 

class Car(Vehicle):  # mendefinisikan kelas car yang mewarisi dari kelas vehicle
    __jumlahKursi = 0  # variabel privat untuk jumlah kursi
    __jumlahPintu = 0  # variabel privat untuk jumlah pintu

    def __init__(self, platNomor, merk, tahunProduksi, warna, jumlahKursi, jumlahPintu):
        super().__init__(platNomor, merk, tahunProduksi, warna)  # memanggil konstruktor kelas induk (vehicle) dan menginisialisasi atributnya
        self.__jumlahKursi = jumlahKursi  # menginisialisasi atribut jumlah kursi
        self.__jumlahPintu = jumlahPintu  # menginisialisasi atribut jumlah pintu

    # metode untuk mengatur jumlah kursi
    def set_jumlahKursi(self, jumlahKursi):
        self.__jumlahKursi = jumlahKursi

    # metode untuk mendapatkan jumlah kursi
    def get_jumlahKursi(self):
        return self.__jumlahKursi
    
    # metode untuk mengatur jumlah pintu
    def set_jumlahPintu(self, jumlahPintu):
        self.__jumlahPintu = jumlahPintu

    # metode untuk mendapatkan jumlah pintu
    def get_jumlahPintu(self):
        return self.__jumlahPintu
    
    # metode untuk menampilkan informasi lengkap tentang mobil
    def infoCar(self):
        super().infoVehicle()  # memanggil metode infoVehicle dari kelas Vehicle
        print("Jumlah Kursi     :", self.__jumlahKursi)
        print("Jumlah Pintu     :", self.__jumlahPintu)