**Program:** Penjumlahan Paralel dengan OpenMP (C++) by devnolife

**Deskripsi:**

Program C++ ini mendemonstrasikan penjumlahan paralel menggunakan direktif OpenMP. Program ini menghitung jumlah elemen dalam array dengan mendistribusikan perhitungan ke beberapa utas secara bersamaan.

**Direktif OpenMP:**

- `#pragma omp parallel for reduction(+:sum)`:
  - Direktif ini membuat wilayah paralel tempat loop berikut akan dieksekusi secara bersamaan oleh beberapa utas.
  - Klausa `for` menunjukkan bahwa loop dapat diparalelkan.
  - Klausa `reduction(+:sum)` menentukan bahwa variabel `sum` harus direduksi di semua utas menggunakan operator penjumlahan (`+`). OpenMP memastikan akumulasi parsial dari nilai `sum` akhir yang aman untuk thread.

**Menjalankan Program:**

**Prasyarat:**

- **Compiler C++:** Pastikan Anda memiliki compiler C++ yang terinstal di sistem Anda. Pilihan umum termasuk GCC (GNU Compiler Collection) atau Clang.
- **Dukungan OpenMP:** Kebanyakan compiler modern dilengkapi dengan dukungan OpenMP yang diaktifkan secara default. Namun, Anda mungkin perlu menambahkan flag `-fopenmp` selama kompilasi jika compiler Anda memerlukan pengaktifan eksplisit.

**Langkah Kompilasi:**

1. **Buat File C++:**
   - Gunakan editor teks atau IDE untuk membuat file baru dengan ekstensi `.cpp` (misalnya, `penjumlahan_paralel.cpp`).
2. **Tempelkan Kode:**
   - Salin dan tempelkan kode OpenMP yang disediakan ke dalam file yang baru dibuat.
3. **Simpan File:**
   - Simpan file dengan nama file yang sesuai (misalnya, `penjumlahan_paralel.cpp`).
4. **Kompilasi Kode:**
   - Buka terminal atau command prompt dan navigasikan ke direktori tempat Anda menyimpan file C++.
   - Gunakan perintah berikut untuk mengkompilasi kode. Ganti `your_compiler` dengan compiler Anda yang sebenarnya (misalnya, `g++` untuk GCC):

     ```bash
     your_compiler -fopenmp penjumlahan_paralel.cpp -o penjumlahan_paralel
     ```

     - Flag `-fopenmp` mengaktifkan fitur OpenMP selama kompilasi.
     - Outputnya akan berupa file executable bernama `penjumlahan_paralel`.

5. **Jalankan Program:**
   - Jalankan program dengan mengetikkan perintah berikut di terminal:

     ```bash
     ./penjumlahan_paralel
     ```

   - Program akan mencetak hasil penjumlahan yang dihitung di konsol.

**Contoh Output:**

```
Penjumlahan: 4950
```

**Catatan Tambahan:**

- Bereksperimen dengan ukuran array (`n`) yang berbeda untuk mengamati dampak paralelisme pada kinerja.
- OpenMP menyediakan berbagai direktif dan klausa untuk menyempurnakan perilaku pemrograman paralel. Lihat dokumentasi OpenMP ([https://www.openmp.org/spec-html/5.0/openmp.html](https://www.openmp.org/spec-html/5.0/openmp.html)) untuk panduan terperinci.
- Pertimbangkan untuk menggunakan IDE yang mendukung OpenMP untuk penyelesaian kode, debugging, dan manajemen proyek yang lebih baik.

Saya harap README yang disempurnakan ini memberikan instruksi dan penjelasan yang jelas untuk menjalankan dan memahami program OpenMP!
