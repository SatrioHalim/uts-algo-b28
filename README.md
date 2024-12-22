# Jawaban Soal UTS Algo b28

---

## 1.  Mutasi Rekening
Xett ingin menghitung saldo akhir dari suatu periode dengan memanfaatkan mutasi rekening. Awalnya 
Xett tahu dia punya uang sebesar M. Untuk setiap transaksi sebanyak N, mutasi rekening menampilkan 
huruf D untuk “Debit” dan K untuk “Kredit”, dilanjutkan oleh nominal X. Jika transaksi debit, uang 
bertambah. Jika transaksi kredit, uang berkurang. Bantu Xett menghitung saldo akhir. 

**Format Input:** 
- Baris pertama berisi dua angka M dan N, di mana M merupakan uang awal Xett dan N merupakan 
jumlah transaksi. 
- N baris selanjutnya berisi karakter huruf D atau K, disusul oleh nominal X.
  
**Format Output:** 
Tampilkan saldo akhir dari perhitungan mutasi rekening.

**Constraints:**
  10^3 <= M,X <= 10^6
  1 <= N <= 100
  character ∈ {D,K}

**Sample Input**
10000 3 
D 2000 
D 9000 
K 10000 

**Sample Output**
11000 

**Penjelasan**
- Awalnya Xett punya 10000 dan 3 transaksi mutasi 
- Transaksi pertama merupakan debit sebesar 2000, sehingga saldo menjadi 12000 
- Transaksi kedua merupakan debit sebesar 9000, sehingga saldo menjadi 21000 
- Transaksi ketiga merupakan kredit sebesar 10000, sehingga saldo menjadi 11000 
- Tampilkan 11000 sebagai saldo akhir.

---

## 2.  Simplifikasi 
Sandi yang kuat adalah sandi yang sulit diingat. Tetapi, kalau begitu pemilik akun sendiri akan kewalahan 
jika harus menghapal sandi yang rumit. Salah satu karakter yang memperumit sandi adalah karakter 
spesial. Yai ingin menyederhanakan semua sandi akun yang dia punya. Bantu Yai menyelesaikan masalah 
ini!

**Format Input:** 
- Baris pertama merupakan integer N yang merupakan jumlah sandi yang ingin disederhanakan 
- N baris selanjutnya berisi sandi tanpa spasi yang ingin disederhanakan
  
**Format Output:** 
Untuk N baris, tampilkan semua sandi yang sudah disederhanakan. Jika tidak menghasilkan sandi apapun, 
tampilkan “Sandi Kosong!”
 
**Constraints:**
  1 <= N <= 100
  5 <= |S| <= 100
  S terdiri dari huruf kecil, huruf besar, angka, dan tanda baca. 

**Sample Input**
3 
b!n@Nus@n7@rA 
b33N00Z 
!@*#!(@$! 

**Sample Output**
bnNusn7rA 
b33N00Z 
Sandi Kosong!  

**Penjelasan**
- Sandi pertama memiliki simbol ! dan @, sehingga kedua simbol tersebut dihapus
- Sandi kedua tidak memiliki simbol, sehingga tidak ada yang perlu dihapus.
- Sandi ketiga terdiri dari simbol tanpa huruf ataupun angka, sehingga saat diproses menyisakan 
string kosong dan menampilkan “Sandi Kosong!”

---

## 3.  Among Us 
Salah satu permainan dalam Uitgem adalah menebak kelompok pengkhianat di suatu kumpulan orang. 
Setiap orang diberi angka 0 sampai 9, dan kelompok pengkhianat selalu berjumlah ganjil dibandingkan 
dengan kelompok lainnya. 
Zeta terjebak dalam permainan ini dan perlu menyusun strategi untuk mengetahui angka berapa yang 
dimiliki kelompok pengkhianati. Bantu Zeta menemukan pengkhianat!

**Format Input:** 
- Baris pertama berisi integer N yang merupakan jumlah orang dalam perkumpulan.  
- Baris kedua berisi N angka X yang dimiliki oleh setiap orang.
  
**Format Output:** 
Tampilkan angka yang dimiliki oleh kelompok pengkhianat. Akan selalu ada satu kelompok pengkhianat. 
 
**Constraints:**
  5 <= N <= 100
  N % 2 == 1
  0 <= X <= 9

**Sample Input**
9 
6 2 6 6 8 6 2 3 3

**Sample Output**
8  

**Penjelasan**
- Ada 4 kelompok di kumpulan orang
- Tim dengan angka 6 berjumlah 4 orang
- Tim dengan angka 2 berjumlah 2 orang
- Tim dengan angka 8 berjumlah 1 orang
- Tim dengan angka 3 berjumlah 2 orang
- Hanya tim dengan angka 8 yang berjumlah ganjil, sehingga tampilkan 8

  ---

## 4.  Art Museum
Zeta baru saja menggelar pagelaran seni di suatu museum. Seni yang ia punya bersifat interaktif – 
pengunjung diperbolehkan untuk memegang karya seni Zeta. Seni yang Zeta buat berbentuk papan 
berukuran NxN berisikan balok persegi berukuran 1x1. Di setiap persegi terdapat tekstur mulai dari halus 
hingga kasar, dicatat dengan angka 1 sampai 7. Pengunjung diperbolehkan untuk menukar posisi tekstur 
dengan suatu syarat khusus: Pengunjung wajib menukar balok antara suatu baris dengan suatu kolom 
secara berurut. Setelah menukar, pengunjung boleh merasakan tekstur atau menukar posisi lagi. 
Pengunjung mencatat pertukaran antara baris dan kolom di buku tamu digital. Zeta ingin tahu kondisi 
seninya melalui catatan buku tamu. Bantu Zeta mengetahui kondisi seninya. 

**Format Input:** 
- Baris pertama adalah integer N yang merupakan ukuran papan.
- N baris berikutnya merupakan rating tekstur X dari angka 1 sampai 7.
- Baris selanjutnya berisi integer T yang merupakan jumlah pertukaran
- T baris selanjutnya berisi posisi baris dan kolom Y yang ingin ditukar posisinya. 
  
**Format Output:** 
Tampilkan kondisi papan seni terakhir dengan ukuran N x N. 
 
**Constraints:**
  2 <= N,Y <= 8
  1 <= X <= 7
  0 <= T <= 10
  
**Sample Input**
5 
1 6 7 2 3 
3 4 4 1 2 
7 6 4 2 3 
5 5 5 2 1 
4 2 1 1 3 
3 
3 
4 
2

**Sample Output**
1 3 7 5 3  
6 4 4 1 2  
7 6 4 2 1  
2 5 5 2 1  
4 2 3 1 3  

**Penjelasan**
- Pada tahap pertama, tukar baris 3 dengan kolom 3
- Pada tahap kedua, tukar baris 4 dengan kolom 4 
- Pada tahap ketiga, tukar baris 2 dengan kolom 2.


   ---

## 5.  Sanity Check
Zett adalah seorang mahasiswa yang ambisius dan selalu ingin mencoba hal baru. Suatu hari, Zett 
mendapatkan tugas sederhana untuk membuat program yang mencetak “Hello World!”. Meski tampak 
sepele, Zett memutuskan untuk mengerjakan tugas ini dengan serius untuk memastikan semua hal dasar 
berjalan dengan benar sebelum ia melangkah ke proyek yang lebih besar. Bantu Zett untuk membuat 
program sederhana tersebut.

**Format Input:** 
Tidak ada input dalam soal ini.
  
**Format Output:** 
Anda hanya perlu mencetak 1 baris yang berisi “Hello World!” (Tanpa tanda kutip). 
  
**Sample Output**
Hello World! 

**Penjelasan** 