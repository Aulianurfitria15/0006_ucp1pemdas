// DEKLARASI VARIABEL
// int umur = untuk menyimpan umur tipe data bilangan bulat
// string alamat = untuk menyimpan variabel berupa teks seperti alamat
// float tinggi badan = untuk menyimpan tinggi badan seseorang (bisa dalam bentuk decimal)


// PROSEDUR & FUNGSI
// nTelor, nMie, nAir;
// hTelor = 3000, hMie = 2500, hAir = 1500;
// string nama;
// 
// void input()
// {
// cout << "Masukan Nama = ";
// cin >> nama;
// cout << "Masukan Jumlah Telor = ";
// cin >> nTelor;
// cout << "Masukan Jumlah Mie = ";
// cin >> nMie;
// cout << "Masukan Jumlah Air Mineral = ";
// cin >> nAir;
// }
//
// int hitungHarga()
// {
// return (nTelor * hTelor) + (nMie * hMie) + (nAir * hAir);
// }


// LOOPING
// int main(){
//
// int i;
// string nama[5];
//
// for (i = 150; i > 100; i -= 10) {
//  cout << i << ". " << "SELAMAT PUASA" << endl;
//
// }
// cout << "Nilai i terakhir: " << i << endl;
//
// for (i = 0; i < 5; i++) {
//    cout << "Masukan nama ke-" << i << ":";
//   cin >> nama[i];
// }
//
// for (i = 0; i < 5; i++) {
//    cout << "Nama ke-" << i << ": " << nama[i] << endl;
// }
// }



// CONDITIONAL STATEMENT
// if (bilangan1 == bilangan2)
// {
//  status = "Bilangan satu samadengan bilangan dua";
// }	
// else if (bilangan1 > bilangan2)
// {
// 	status = "Bilangan satu lebih besar dari bilangan dua";
// }
// else
// {
//  status = "Bilangan satu lebih kecil dari bilangan dua";
// }
// cout << "Bilangan pertama : " << bilangan1 << endl;
// cout << "Bilangan kedua : " << bilangan2 << endl;
// cout << "Status bilangan : " << status;
// }
 

// STRUCT
// struct Mahasiswa {
//   string nim;
//   string nama;
// };
//
// int main() {
//   Mahasiswa mhs;
//   cout << "Nomor Mahasiswa : ";
//   cin >> mhs.nim;
//   cout << "Nama Mahasiswa : ";
//   cin >> mhs.nama;
// }


#include <iostream>
using namespace std;

int main() {
    string tangerang, bekasi;
    string status;
    float rerata;

    cout << "Kota Tanggerang : " << endl;
    cin >> tangerang;
    cout << "Bekasi : " << endl;
    cin >> bekasi;

    rerata = (tangerang + bekasi) : 2;

    if (tangerang < 75 || rerata > 45) {
        status = "Tidak Sehat";
        if (bekasi > 90) {
            status = "Sehat";
        }
    }
  
}