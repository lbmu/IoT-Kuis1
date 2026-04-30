# Catatan Presentasi: Data dan Analitika untuk IoT

**Slide 1: Judul - Data dan Analitika untuk IoT**
* Selamat pagi/siang rekan-rekan mahasiswa S1 Teknik Komputer Telkom University. Hari ini kita akan membahas topik "Data dan Analitika untuk IoT" pada mata kuliah IOT ACK4DBB3 [cite: 1]. 
* Mari kita mulai eksplorasi tentang bagaimana data yang dihasilkan oleh perangkat pintar dikelola dan dianalisis di dalam jaringan [cite: 1].

**Slide 2 & 3: Visualisasi Struktur Data**
* (Gunakan kedua slide ini sebagai transisi visual yang cepat). Slide ini menganalogikan perbedaan mendasar antara data yang tersusun rapi dengan model yang teratur, dibandingkan dengan sekumpulan data yang bervariasi ukuran dan formatnya [cite: 1].

**Slide 4 & 5: Structured vs Unstructured Data**
* **Structured Data** adalah data yang mengikuti model atau skema organisasi yang jelas, serta bisa digunakan pada Relational Database Management Systems (RDBMS) [cite: 1]. 
* Data sensor IoT umumnya menggunakan *Structured Data* yang mudah untuk di-format, di-simpan, di-query, dan di-proses [cite: 1].
* Sebaliknya, **Unstructured Data** tidak memiliki skema baku, mencakup format seperti teks, suara, gambar, dan video [cite: 1]. 
* Secara umum, 80% data bisnis adalah *unstructured* sehingga membutuhkan metode analisis kognitif atau *Machine Learning* untuk diproses [cite: 1].

**Slide 6: Data In Motion vs At Rest**
* **Data In Motion** merujuk pada data dari perangkat yang selalu bergerak pada jaringan [cite: 1]. 
* Sebagai gambaran, bayangkan aliran telemetri perangkat pemantauan traktor yang terus menerus mengirimkan pembaruan titik GPS secara berkelanjutan. Pemrosesan data aktif seperti ini umumnya dilakukan menggunakan *fog computing* [cite: 1].
* Sedangkan **Data At Rest** merupakan data yang disimpan dan tidak bergerak, biasanya ditemukan pada *broker* IoT atau *Storage Arrays* [cite: 1]. 
* Data ini sangat efektif diolah jika terstruktur dengan baik di dalam Database Relasional menggunakan alat analisis canggih yang sudah tersedia [cite: 1].

**Slide 7, 8 & 9: IoT Data Analytics Overview (4 Tipe Analisis)**
* Berdasarkan nilai dan tingkat kompleksitasnya, analitik data terbagi menjadi empat tahapan [cite: 1]:
  * **Deskriptif:** Memberikan informasi mengenai apa yang terjadi saat ini atau di waktu lampau [cite: 1].
  * **Diagnostik:** Memberikan jawaban atas mengapa suatu kejadian telah terjadi pada perangkat [cite: 1].
  * **Prediktif:** Memprediksi data kejadian yang diperkirakan akan terjadi di masa depan [cite: 1].
  * **Preskriptif:** Tidak hanya memprediksi, tetapi juga memberikan solusi langsung untuk mengatasi masalah yang akan datang [cite: 1].

**Slide 10: IoT Data Analytics Challenges**
* Terdapat 2 masalah utama jika mengelola data IoT menggunakan database relasional [cite: 1]:
  * **Scaling Problems:** Database dapat bertambah sangat cepat karena jutaan objek pintar secara terus menerus mengirimkan data [cite: 1].
  * **Volatility of Data:** Skema database harus ditentukan dengan tepat sejak awal perancangan; kesalahan penetapan skema dapat menghambat bahkan menghentikan operasi sistem [cite: 1].

**Slide 11 & 12: Machine Learning**
* ML terbagi menjadi dua kategori utama [cite: 1]: 
  * **Supervised Learning** (pembelajaran menggunakan data yang sudah memiliki label jawaban, contohnya menghitung mahasiswa di lobi via kamera) [cite: 1].
  * **Unsupervised Learning** (pembelajaran data tanpa label menggunakan metode *clustering* seperti K-means) [cite: 1].
* Proses ini juga menggunakan **Neural Network**, yang mendeteksi pola pada dataset berlapis-lapis mirip dengan cara otak manusia menganalisis objek visual secara bertahap hingga menjadi kesimpulan yang utuh [cite: 1].

**Slide 13 & 14: ML Operations & Applications**
* Penerapan ML dapat dilakukan melalui **Local Learning** di *edge/fog node*, atau **Remote Learning** dengan memprosesnya di pusat data/cloud [cite: 1].
* Empat domain pengaplikasiannya adalah: *Monitoring*, *Behavior Control*, *Operations Optimization*, dan *Self-healing/Self-optimizing* [cite: 1]. 
* Keseluruhan proses ini menyokong **Predictive Analysis** yang sangat penting untuk efisiensi dan penjadwalan perawatan [cite: 1].

**Slide 15 & 16: Big Data Analytics Tools & NoSQL**
* Ingat tiga elemen 'V' dari Big Data: *Velocity*, *Variety*, dan *Volume* [cite: 1]. 
* Karena *data warehouse* tradisional cenderung lambat untuk skala ini, arsitektur **Massively Parallel Processing (MPP)** digunakan untuk mendistribusikan data ke banyak *node* secara paralel [cite: 1].
* Gunakan **NoSQL** untuk mendukung data semi-terstruktur, seperti *Document Stores* (JSON/XML), *Key-Value Stores*, *Wide-Column Stores*, hingga *Graph Stores* [cite: 1].

**Slide 17 & 18: Hadoop Ecosystem**
* **Hadoop** adalah repositori dan *processing engine* dengan dua komponen kunci: **HDFS** untuk menyimpan data ke banyak *node*, dan **MapReduce** untuk memecah tugas besar menjadi bagian-bagian paralel kecil [cite: 1].
* Pada HDFS, instruksi penambahan dan penulisan diarahkan oleh **NameNodes**, sedangkan lokasi fisik datanya dijaga oleh **DataNodes** [cite: 1]. 
* Terdapat juga **YARN** yang mengurus negosiasi sumber daya [cite: 1].

**Slide 19 & 20: Hadoop Ecosystem (Lanjutan)**
* Ekosistem pendukung Hadoop mencakup **Apache Kafka** yang mengumpulkan aliran data mentah, dan prosesor *streaming* seperi **Spark**, **Storm**, atau **Flink** untuk analisis *real-time* [cite: 1].
* Pengolahan datanya dikelola menggunakan **Lambda Architecture**, yang membagi pemrosesan ke dalam *Stream Layer* (untuk data *near-real-time*), *Batch Layer* (penyimpanan lambat), dan *Serving Layer* yang memutuskan sumber data mana yang akan diberikan sebagai respons akhir [cite: 1].

**Slide 21, 22 & 23: Edge Streaming Analytics**
* Mengapa kita butuh *Edge Analytics*? Karena pengiriman semua data mentah ke *cloud* sangat tidak efisien dan mahal [cite: 1]. 
* *Edge Analytics* menyelesaikan masalah sensitivitas waktu dengan memberikan respons instan langsung di ujung jaringan [cite: 1].
* Proses ini bertumpu pada **Analytics Processing Unit (APU)** yang menyaring (Filter), memanipulasi (Transform via ETL), memberikan konteks waktu (Time), menghubungkan data dari beragam sensor (Correlate), mencocokkan pola, hingga meningkatkan kecerdasan bisnis sistem secara utuh [cite: 1].

**Slide 24 & 25: Distributed Analytics Systems**
* Di lapangan, pemrosesan dilakukan secara berjenjang dari *Edge Location* di area sensor, naik ke tingkatan *Fog Processing*, hingga bermuara ke *Regional Data Center* [cite: 1].
* Komunikasi dari satu simpul ke simpul lainnya seringkali dijembatani oleh *Broker* yang menggunakan protokol ringan seperti MQTT [cite: 1]. 
* Kita dapat melihat bagaimana pengiriman *payload* pesan antar perangkat yang telah dirancang dapat mengalir mulus dengan pendekatan terdistribusi ini.

**Slide 26, 27 & 28: Network Analytics & Flexible NetFlow (FNF)**
* Untuk pemantauan lalu lintas *Smart Grid*, NetFlow atau *flow analytics* memiliki kegunaan penting dalam perencanaan kapasitas, keamanan, pelaporan (accounting), serta *data mining* [cite: 1].
* Gunakan **Flexible NetFlow (FNF)** untuk kemampuan melacak perilaku trafik spesifik dan mengagregasi data secara kustom [cite: 1]. 
* Aturannya sederhana: paket data yang pertama kali datang akan membentuk entri *Key Fields*, sementara paket selanjutnya di aliran tersebut hanya memperbarui nilai statistik (seperti hitungan *byte* atau cap waktu) tanpa memproses *key* ulang [cite: 1].

**Slide 29 & 30: FNF Components & Challenges**
* FNF beroperasi lewat berbagai komponen seperti *Flow Monitor*, *Record*, *Exporter* berserta formatnya, parameter *Timers*, dan sebuah Server tempat ekspor pelaporan [cite: 1].
* Sesuai yang ditunjukkan di grafik, kita bisa melacak parameter seperti SCADA dan *Meter Reads* secara akurat. Namun, ada tantangan penerapan: hilangnya visibilitas jika titik pantau tidak mendukung, kompromi performa *router* karena menganalisis IPv4/IPv6 pada VPN, serta meningkatnya trafik di dalam jaringan manajemen yang mengharuskan tambahan besaran *bandwidth* [cite: 1].

**Slide 31: Penutup**
* Akhiri presentasi dengan memberikan apresiasi kepada kelas atas perhatiannya. Arahkan peserta kuliah yang ingin mendalami topologi dan studi kasus protokol jaringan ini untuk membaca referensi "IoT Fundamentals" dari Cisco Press yang tercantum pada salindia [cite: 1].
