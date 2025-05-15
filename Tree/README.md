# Identitas Mahasiswa
- Nama : Alvin Octaviano A
- NIM  : D121231091
# BinaryTree
- Link Soal : https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem?isFullScreen=true 
- Difficulty : Easy 

# Short Approach Summary
Diberikan sebuah Binary Tree , Kemudian carilah tinggi dari Tree tersebut.
Menggunakan pendekatan LevelOrderTraversal dan struktur data Queue agar dapat merepresentasikan algoritma dari LevelOrderTraversal, yaitu dengan mengunjungi node-node pohon secara berurutan berdasarkan levelnya mulai dari root. Pada setiap iterasi, semua node pada level saat ini diproses terlebih dahulu dengan mengeluarkannya dari queue dan menambahkan anak-anaknya ke queue untuk level berikutnya. Setelah semua node pada satu level selesai diproses, penghitung tinggi pohon dinaikkan satu, sehingga secara bertahap dihitung berapa banyak level yang ada pada pohon tersebut. Proses ini berlanjut hingga semua node telah dikunjungi dan queue kosong, sehingga nilai penghitung tersebut merepresentasikan tinggi pohon berdasarkan jumlah level yang dilewati.

# Langkah Penyelesaian
1. Dengan melakukan push pada root Tree ke queue.
2. Jika queue tidak kosong lakukan perulangan while
3. Lalu Melakukan loop for berdasarkan banyaknya node yang ada pada level tersebut
4. Ambil dan simpan element terdepan dari Queue pada sebuah variabel (x), lalu melakukan pop pada Queue
5. Melakukan push ke Queue pada child dari node yang disimpan pada variabel x
6. Ketika proses perulangan for selesai dilakukan penambahan 1 pada variable height
7. Ketika semua operasi selesai dilakukan mengembalikan nilai pada variabel height-1 karena pada cara pembacaan level pada tree yaitu root adalah Lv.0

# BinarySearchTree
- Link Soal :https://www.hackerrank.com/challenges/is-binary-search-tree/problem?isFullScreen=true
- Difficulty : Medium

# Short Approach Summary
Diberikan sebuah Binary Tree, kemudian identifikasilah apa itu merupakan BinarySearchTree atau bukan.
Menggunakan pendekatan rekursif, algoritma akan menelusuri setiap cabang pohon hingga mencapai node terdalam, sambil melakukan pengecekan apakah setiap node memenuhi aturan Binary Search Tree. Pada setiap langkah rekursi, fungsi akan membandingkan nilai node dengan batas minimum dan maksimum yang diperbolehkan, kemudian melanjutkan pengecekan ke subtree kiri dan kanan dengan batasan yang diperbarui. Jika ditemukan nilai yang melanggar aturan BST, fungsi akan segera mengembalikan nilai false, sehingga memastikan validitas seluruh pohon secara menyeluruh.

# Langkah Penyelesaian
1. Membuat Fungsi rekursif dengan base case apabila bukan merupakan node maka return true.
2. Melakukan pengecekan syarat dengan melakukan pengecekan jika minnode ada dan  data node saat ini nilainya lebih kecil atau sama dengan dari minNode maka return false
3. Melakukan pengecekan syarat dengan melakukan pengecekan jika maxnode ada dan data node saat ini nilainya lebih besar atau sama dengan maxnode maka return false
4. melakukan pemanggilan rekursif untuk node disebelah kiri (root->left(sebagai node utama yang akan dibandingkan), minnode(tetap nullptr), root(node yang akan dibandingkan dengan node sebelah kiri sebagai nilai maximum yang jika dilewati akan melanggar aturan BST )) dan untuk node sebelah kanan (root->right(sebagai node utama yang akan dibandingkan), root(node yang akan dibandingkan dengan node sebelah kanan sebagai nilai minimum yang jika dilewati akan melanggar aturan BST )
5. Jika sebuah node melanggar syarat BST akan mengembalikan nilai false, dan jika tidak ada akan mengembalikan  nilai true
6. Dengan menggunakan operator && pada rekursif tersebut yang akan mendeteksi jika ada salah satu node yang tidak memenuhi syarat maka akan mengembalikan nilai false
