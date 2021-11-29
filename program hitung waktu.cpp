#include <iostream>

using namespace std;


int main() {
    int ak,dtk,mnt,jm;
    
    cin>>ak;
    //masukan waktu yang ingin di cek
    jm=ak/3600;
    mnt=ak/60;
    dtk=ak/1;
    dtk=ak%60;
    cout<<jm<<" jam "<<mnt<<" menit "<<dtk<<" detik "<<endl;
    //memasukan angka yang sudah dihitung untuk ditampilkan
}
