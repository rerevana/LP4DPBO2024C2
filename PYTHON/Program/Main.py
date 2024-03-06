# Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan Parktikum 4 
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan 
# kecurangan seperti yang telah dispesifikasikan. Aamiin.

# mengimpor library yang digunakan
from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from VehicleStorage import VehicleStorage


vehicles = []       # inisialisasi list untuk menyimpan kendaraan
cars = []           # inisialisasi list untuk menyimpan objek mobil
motorcycles = []    # inisialisasi list untuk menyimpan objek motor

# input informasi tempat penyimpanan kendaraan
print("\nSilahkan masukkan informasi penyimpanan kendaraan")
nama_tempat = input("Nama Tempat         : ").upper()   # meminta input nama tempat dan mengonversi ke huruf besar
luas = int(input("Luas Tempat         : "))             # meminta input luas tempat
kapasitas = int(input("Kapasitas Tempat    : "))        # meminta input kapasitas tempat

# membuat objek tempat penyimpanan kendaraan
parkiran = VehicleStorage(nama_tempat, luas, kapasitas, 0, vehicles)    # membuat objek VehicleStorage dengan informasi yang dimasukkan

print("\nSELAMAT DATANG DI PUSAT INFORMASI KENDARAAN ", parkiran.get_namaTempat())

# looping untuk menu utama
flag = 0        # inisialisasi flag untuk looping

while flag == 0:    # looping akan berjalan selama flag masih 0

    # menampilkan opsi menu
    print("\nPilih Menu:")
    print("0. Keluar")
    print("1. Tambahkan Data Kendaraan")
    print("2. Lihat Data Kendaraan")
    print("3. Lihat Data Tempat Penyimpanan Kendaraan")

    # meminta input pilihan menu
    pilih = int(input("\nMenu yang Dipilih: "))

    if pilih == 0:  # jika pilihan menu adalah 0

        print("\nTerima kasih telah berkunjung ke Pusat Informasi Kendaraan!")
        flag = 1    # mengubah flag agar loop berhenti

    elif pilih == 1:    # jika pilihan menu adalah 1

        if parkiran.get_jumlahKendaraan() < parkiran.get_kapasitas():   # jika jumlah kendaraan yang disimpan masih kurang dari kapasitas tempat

            flag1 = 0   # inisialisasi flag1 untuk looping

            while flag1 == 0:   # looping untuk menambahkan data kendaraan

                # menampilkan opsi jenis kendaraan yang dapat ditambahkan
                print("\nPilih Jenis Kendaraan Yang Ingin Anda Tambahkan:")
                print("X. Keluar")
                print("A. Mobil")
                print("B. Motor")

                jenis_kendaraan = input("\nJenis Kendaraan yang Dipilih: ").upper() # meminta input jenis kendaraan dan mengonversi ke huruf besar

                # jika masih ada ruang untuk menambahkan kendaraan
                if parkiran.get_jumlahKendaraan() < parkiran.get_kapasitas():

                    if jenis_kendaraan == "A":          # jika jenis kendaraan adalah mobil

                        # meminta input data mobil
                        print("\nSilahkan Masukkan Data Mobil")
                        mobil = Car(input("Plat Nomor       : "), 
                                    input("Merk             : "), 
                                int(input("Tahun Produksi   : ")), 
                                    input("Warna            : "), 
                                int(input("Jumlah Kursi     : ")), 
                                int(input("Jumlah Pintu     : ")))  # membuat objek mobil dengan informasi yang dimasukkan
                        parkiran.tambahKendaraan(mobil)             # menambahkan mobil ke dalam penyimpanan
                        cars.append(mobil)                          # menambahkan objek mobil ke dalam list mobil

                    elif jenis_kendaraan == "B":    # jika jenis kendaraan adalah motor

                        # meminta input data motor
                        print("\nSilahkan Masukkan Data Motor")
                        motor = Motorcycle(input("Plat Nomor        : "), 
                                        input("Merk              : "), 
                                    int(input("Tahun Produksi    : ")), 
                                        input("Warna             : "), 
                                        input("Jenis Motor       : "), 
                                    float(input("Kapasitas Tangki  : ")))     # membuat objek motor dengan informasi yang dimasukkan
                        parkiran.tambahKendaraan(motor)                     # menambahkan motor ke dalam penyimpanan
                        motorcycles.append(motor)                           # menambahkan objek motor ke dalam list motor

                    elif jenis_kendaraan == "X":    # jika pilihan adalah keluar
                        flag1 = 1   # mengubah flag1 agar loop berhenti

                    else:  # jika pilihan tidak valid
                        print("\nJenis kendaraan tidak valid! Silahkan pilih kembali!")

                else:   # jika tidak ada ruang lagi untuk menambahkan kendaraan
                    print("\nMaaf tidak dapat menambahkan data, kapasitas sudah penuh!")
                    flag1 = 1   # mengubah flag1 agar loop berhenti

        else:   # jika kapasitas penyimpanan sudah penuh
            print("\nMaaf tidak dapat menambahkan data, kapasitas sudah penuh!")

    elif pilih == 2:    # jika pilihan menu adalah 2

        # menampilkan data kendaraan
        print("\nDATA KENDARAAN TERKINI")

        # menampilkan data mobil
        print("\nData Mobil:")
        if len(cars) > 0:    # jika ada mobil yang disimpan
            for i, car in enumerate (cars, start=1):    # looping untuk setiap mobil yang disimpan
                print(f"\nInformasi Mobil ke - {i}")
                car.infoCar()   # memanggil method infoCar untuk menampilkan informasi mobil

        else:   # jika tidak ada mobil yang disimpan
            print("\nTidak Ada Mobil!")

        # menampilkan data motor
        print("\nData Motor:")
        if len(motorcycles) > 0:    # jika ada motor yang disimpan
            for i, motorcycle in enumerate (motorcycles, start=1):  # looping untuk setiap motor yang disimpan
                print(f"\nInformasi Motor ke - {i}")
                motorcycle.infoMotor()  # memanggil method infoMotor untuk menampilkan informasi motor

        else:   # jika tidak ada motor yang disimpan
            print("\nTidak Ada Motor!")

    elif pilih == 3:
        # menampilkan informasi tempat penyimpanan kendaraan
        print("\nDATA TEMPAT PENYIMPANAN KENDARAAN")
        print(f"\nNama Tempat         : {parkiran.get_namaTempat()}")
        print(f"Luas Tempat         : {parkiran.get_luas()} M2")
        print(f"Kapasitas Tempat    : {parkiran.get_kapasitas()} Kendaraan")
        print(f"Jumlah Kendaraan    : {parkiran.get_jumlahKendaraan()} Buah")
        print(f"                      Jumlah Mobil = {len(cars)} Buah")
        print(f"                      Jumlah Motor = {len(motorcycles)} Buah")