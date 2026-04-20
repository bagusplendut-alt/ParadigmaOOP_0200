#include  <iostream>
using namespace std;

class Mahasiswa {
private: // Data disembunyikan di sini
    int nim;
    string nama;
    float nilai;
}

class Mahasiswa{
public :
    int nim;
    string nama;
    float nilai;

    void printData(){
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
}; //batas class

int main(){
    Mahasiswa mhs;
    mhs.nim = 165;
    mhs.nama = "aldi taher";
    mhs.nilai = 90.5 ;
}