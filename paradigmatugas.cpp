#include <iostream>
using namespace std;

class Barang{
    public :
        string NamaBarang;
        string Kategori;
        string TanggalProduksi;
        int Jumlah; 
        
    void printData(){
        cout << " Nama Barang : " << NamaBarang << endl;
        cout << " kategori : " << Kategori << endl;
        cout << " Tanggal Produksi : " << TanggalProduksi << endl;
        cout << " Jumlah : " << Jumlah << endl;
    }
}; //Batas Class

int main (){
    Barang Elektronik;
    Elektronik.NamaBarang = " AC ";
    Elektronik.Kategori = " Elektronik ";
    Elektronik.TanggalProduksi = " 10-12-2024 ";
    Elektronik.Jumlah = 3 ;

    Barang NonEeletronik;
    NonEeletronik.NamaBarang = " buku ";
    NonEeletronik.Kategori = " Nonelektronik ";
    NonEeletronik.TanggalProduksi = " 20-30-2020 ";
    NonEeletronik.Jumlah = 12 ;
    
    Elektronik.printData();
    NonEeletronik.printData();

}
