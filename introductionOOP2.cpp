#include <iostream>
using namespace std;

class Barang{

    public :
        string nama;
        int jumlah;
        string kategori;
        int tanggalProduksi;
        void printData(){
            cout << "Nama : " << nama << endl;
            cout << "Jumlah : " << jumlah << endl;
            cout << "Kategori : " << kategori << endl;
            cout << "TanggalProduksi : " << tanggalProduksi << endl;
    }
};


int main(){
    Barang Elektronik;
    Elektronik.nama = "Iphone 15";
    Elektronik.jumlah = 5;
    Elektronik.kategori = "elektronik";
    Elektronik.tanggalProduksi = 20220323;

    Barang nonElektronik;
    nonElektronik.nama = "Tas";
    nonElektronik.jumlah = 7;
    nonElektronik.kategori = "nonelektronik";
    nonElektronik.tanggalProduksi = 20220205;

    Elektronik.printData();
    nonElektronik.printData();
}