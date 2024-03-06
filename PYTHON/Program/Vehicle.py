# Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan Parktikum 4 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
# kecurangan seperti yang telah dispesifikasikan. Aamiin.

class Vehicle:
    
    __platNomor = ""        # variabel privat untuk Plat Nomor
    __merk = ""             # variabel privat untuk Merk Kendaraan
    __tahunProduksi = 0     # variabel privat untuk Tahun Produksi
    __warna = ""            # variabel privat untuk Warna Kendaraan

    # konstruktor dengan parameter
    def __init__(self, platNomor, merk, tahunProduksi, warna):
        self.__platNomor = platNomor    # inisialisasi atribut Plat Nomor
        self.__merk = merk              # inisialisasi atribut Merk Kendaraan
        self.__tahunProduksi = tahunProduksi    # inisialisasi atribut Tahun Produksi
        self.__warna = warna            # inisialisasi atribut Warna Kendaraan

    # metode untuk mengatur Plat Nomor
    def set_platNomor(self, platNomor):
        self.__platNomor = platNomor

    # metode untuk mendapatkan Plat Nomor
    def get_platNomor(self):
        return self.__platNomor
    
    # metode untuk mengatur Merk Kendaraan
    def set_merk(self, merk):
        self.__merk = merk

    # metode untuk mendapatkan Merk Kendaraan
    def get_merk(self):
        return self.__merk
    
    # metode untuk mengatur Tahun Produksi
    def set_tahunProduksi(self, tahunProduksi):
        self.__tahunProduksi = tahunProduksi

    # metode untuk mendapatkan Tahun Produksi
    def get_tahunProduksi(self):
        return self.__tahunProduksi
    
    # metode untuk mengatur Warna Kendaraan
    def set_warna(self, warna):
        self.__warna = warna

    # metode untuk mendapatkan Warna Kendaraan
    def get_warna(self):
        return self.__warna
    
    # metode untuk mencetak informasi kendaraan
    def infoVehicle(self):
        print("Plat Nomor       :", self.__platNomor)
        print("Merk             :", self.__merk)
        print("Tahun Produksi   :", self.__tahunProduksi)
        print("Warna            :", self.__warna)