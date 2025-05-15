# BinaryTree
Nama : Alvin Octaviano A
NIM  : D121231091
Link Soal : https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem?isFullScreen=true 
Difficulty : Easy 

# Short Approach Summary
Diberikan sebuah Binary Tree , Kemudian carilah tinggi dari Tree tersebut.
Menggunakan pendekatan LevelOrderTraversal dan struktur data Queue agar dapat merepresentasikan algoritma dari LevelOrderTraversal, yaitu dengan mengunjungi node-node pohon secara berurutan berdasarkan levelnya mulai dari root. Pada setiap iterasi, semua node pada level saat ini diproses terlebih dahulu dengan mengeluarkannya dari queue dan menambahkan anak-anaknya ke queue untuk level berikutnya. Setelah semua node pada satu level selesai diproses, penghitung tinggi pohon dinaikkan satu, sehingga secara bertahap dihitung berapa banyak level yang ada pada pohon tersebut. Proses ini berlanjut hingga semua node telah dikunjungi dan queue kosong, sehingga nilai penghitung tersebut merepresentasikan tinggi pohon berdasarkan jumlah level yang dilewati.

#Langkah Penyelesaian
1. Dengan melakukan push pada root Tree ke queue.
2. Jika queue tidak kosong lakukan perulangan while
3. Lalu Melakukan loop for berdasarkan banyaknya node yang ada pada level tersebut
4. Ambil dan simpan element terdepan dari Queue pada sebuah variabel (x), lalu melakukan pop pada Queue
5. Melakukan push ke Queue pada child dari node yang disimpan pada variabel x
6. Ketika proses perulangan for selesai dilakukan penambahan 1 pada variable height
7. Ketika semua operasi selesai dilakukan mengembalikan nilai pada variabel height-1 karena pada cara pembacaan level pada tree yaitu root adalah Lv.0
