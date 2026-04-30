# IoT-Kuis1

Ini repository untuk asesmen kuis 1 IoT. Rangkaian dan source code sudah dipisah sesuai masing-masing board

## Prerequisites

* IDE: [Visual Studio Code](https://code.visualstudio.com/download)
    * Ekstensi: [PlatformIO](https://platformio.org/install)

## Library

HC-SR04: [UltraSense](https://registry.platformio.org/libraries/onedevelopmentpl/UltraSense)

## Rangkaian

Rangkaian ada di [folder skematik](/Skematik/). Tapi yang esp belum tahu aplikasi/tools biar jadi skematik level tinggi kaya tinkercad


## Pinout

* Arduino, STM32, dan HC-SR04 bisa lihat di board/komponen

* [ESP32](https://docs.espressif.com/projects/esp-idf/en/v5.1/esp32/_images/esp32-devkitC-v4-pinout.png) agak spesial karena board nya minim info pin PWM

![Pinout ESP32](https://docs.espressif.com/projects/esp-idf/en/v5.1/esp32/_images/esp32-devkitC-v4-pinout.png)

* [PIR Sensor](https://cdn.shopify.com/s/files/1/0300/6424/6919/files/HC-SR501-Sensor.jpg?v=1588870286) juga minim info

![Sensor PIR](https://cdn.shopify.com/s/files/1/0300/6424/6919/files/HC-SR501-Sensor.jpg?v=1588870286)


## Cara Pakai Kode

1. Instal VS Code sekaligus Ekstensi PlatformIO, lalu Klik logo PlatformIO
2. Buka menu (QUICK ACCESS > PIO Home > Open)
3. Buat *New Project* 
    1. Isi *Project Name* sesuai dengan rangkaian dan mikro yang digunakan
    2. Pilih board sesuai dengan mikrokontroler yang akan dipakai
    3. Gunakan Framework **Arduino**

> [!NOTE]
<<<<<<< HEAD
> Sebenarnya, langkah ketiga itu untuk menginisialisasi file `platformio.ini`, sehingga tidak akan terlalu memengaruhi kode (kecuali untuk environment yang akan digunakan)
=======
> Sebenarnya, tiga langkah di atas berfungsi untuk menginisialisasi file `platformio.ini`, sehingga tidak akan terlalu memengaruhi kode (kecuali untuk environment yang akan digunakan)
>>>>>>> 345528ca78a60c2f1ba5452d0d72ff0346736877
4. Copy paste kode sesuai dengan rangkaian
> [!WARNING]
> teliti di baudrate
5. ![yaudah sih](https://i.pinimg.com/originals/5c/ce/f1/5ccef163a4d03ac7da7be3f41dd8f6db.webp)
