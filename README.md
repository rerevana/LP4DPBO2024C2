## LP4DPBO2024C2

#### Saya Revana Faliha Salma NIM 2202869 mengerjakan Soal Latihan Praktikum 4 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

### DESAIN PROGRAM
![image](https://github.com/rerevana/LP4DPBO2024C2/assets/113984261/5894fcbd-da9a-4757-b5a8-ab1829f0e8d2)

### PENJELASAN DESAIN PROGRAM
Disini saya membuat desain dengan menggabungkan 2 kelas yaitu kelas ParkingLot dan kelas Garage menjadi kelas VehicleStorage. Hal ini dikarenakan kedua kelas tersebut memiliki jenis yang sama, yaitu sama-sama tempat penyimpanan kendaraan. Selain itu, atribut di dalam kelas ParkingLot dibutuhkan juga di dalam kelas Garage, begitupun sebaliknya. Selanjutnya disini saya mendesain kelas Vehicle sebagai kelas parent (orang tua) dari kelas Car dan kelas Motorcycle. Kedua kelas tersebut menjadi kelas child dari kelas Vehicle karena kedua kelas tersebut memiliki jenis yang sama yaitu “Is A” Vehicle. Oleh karena itu, hubungan kelas Vehicle dengan kelas Car dan kelas Motorcycle adalah Inheritance dengan tipe Hierarchical. Selanjutnya dalam desain ini juga terdapat hubungan composite, yaitu kelas VehicleStorage yang memiliki hubungan composite dengan kelas Vehicle, karena atribut di dalam kelas Vehicle dapat digunakan di kelas VehicleStorage (VehicleStorage “Has A” Vehicle).

### ALUR PROGRAM
1. Pertama user diminta untuk memasukkan informasi tentang tempat penyimpanan kendaraan, seperti Nama Tempat, Luas Tempat, dan Kapasitas Tempat. Input tersebut kemudian disimpan dalam objek `parkiran` yang merupakan instansiasi dari kelas `VehicleStorage`.

2. Program menampilkan pesan selamat datang di pusat informasi kendaraan, dengan mencetak nama tempat penyimpanan kendaraan yang telah dimasukkan sebelumnya.

3. Program memulai sebuah loop utama yang akan terus berjalan sampai user memilih untuk keluar (memilih opsi 0).

4. Dalam setiap iterasi loop, program menampilkan opsi menu untuk user:
   - User dapat memilih untuk keluar (pilihan 0).
   - User dapat memilih untuk menambahkan data kendaraan (pilihan 1).
   - User dapat memilih untuk melihat data kendaraan yang telah disimpan (pilihan 2).
   - User dapat memilih untuk melihat informasi tentang tempat penyimpanan kendaraan (pilihan 3).

5. Program meminta input dari user berupa pilihan menu yang diinginkan.

6. Jika user memilih untuk keluar (pilihan 0), program mencetak pesan terima kasih dan mengubah nilai flag untuk keluar dari loop utama.

7. Jika user memilih untuk menambahkan data kendaraan (pilihan 1), program akan memeriksa apakah masih ada ruang kosong dalam tempat penyimpanan kendaraan.
   - Jika masih ada ruang kosong, program akan meminta jenis kendaraan yang ingin ditambahkan.
   - Setelah user memilih jenis kendaraan, program akan meminta informasi tentang kendaraan tersebut, baik mobil maupun motor.
   - Objek kendaraan yang baru dibuat akan ditambahkan ke dalam tempat penyimpanan menggunakan metode `tambahKendaraan()` dari objek `parkiran`. Selain itu objek kendaraan (motor/mobil) yang baru dibuat ditambahkan juga ke dalam list motorcycles untuk objek kendaraan motor dan ke dalam list cars untuk objek kendaraan mobil.

8. Jika user memilih untuk melihat data kendaraan (pilihan 2), program akan mencetak informasi tentang mobil dan motor yang telah disimpan.
   - Jika tidak ada mobil atau motor yang disimpan, program akan mencetak pesan bahwa tidak ada data kendaraan.

9. Jika user memilih untuk melihat informasi tentang tempat penyimpanan kendaraan (pilihan 3), program akan mencetak informasi tentang tempat penyimpanan kendaraan, seperti nama tempat, luas tempat, kapasitas tempat, jumlah kendaraan saat ini, jumlah mobil, dan jumlah motor.

10. Setelah memproses pilihan user, program kembali ke langkah 4 dan menunggu input pilihan menu selanjutnya dari user. Proses ini akan berulang sampai user memilih untuk keluar dari program.

### DOKUMENTASI PROGRAM
![SS1](https://github.com/rerevana/LP4DPBO2024C2/assets/113984261/c35d598c-492e-4503-acaa-434ef2e4824a)
![SS2](https://github.com/rerevana/LP4DPBO2024C2/assets/113984261/6492ed95-e913-4e5c-8658-f5db6482d7f6)
![SS3](https://github.com/rerevana/LP4DPBO2024C2/assets/113984261/fb47db32-2708-4de8-a221-8ffa67f3d85c)
