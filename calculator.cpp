#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <cstdlib>

using namespace std;

int main ()
{
int pilih,a,b;
char lagi;
menu:
cout<<"\n                             Welcome To Program Kalkulator C++ \n";
cout<<"                                            anakit.id       \n"<<endl;

cout<<" ---------------------------------------------------------------------------------------------\n";
cout<<" |Pilihan Operator : 1. Penjumlahan    3. Perkalian     5. Sisa Bagi (MOD)    7. Pangkat (^) | \n";
cout<<" |                   2. Pengurangan    4. Pembagian     6. Akar                              |\n";
cout<<" ---------------------------------------------------------------------------------------------\n"<<endl;
cout<<" Pilih No Operator [1-7] : "; cin>>pilih;
if (pilih == 1){
 cout<<"\n    PENJUMLAHAN    \n";
 cout<<" Masukkan Angka Pertama : ";cin>>a;
 cout<<" Masukkan Angka Kedua   : ";cin>>b;
 cout<<"\n Maka Hasil Penjumlahan dari "<<a<<" dan "<<b<<" adalah : "<<a+b<<endl;   
}else if (pilih == 2){
 cout<<"\n    PENGURANGAN    \n";
 cout<<" Masukkan Angka Pertama : ";cin>>a;
 cout<<" Masukkan Angka Kedua   : ";cin>>b;
 cout<<"\n Maka Hasil Pengurangan dari "<<a<<" dan "<<b<<" adalah : "<<a-b<<endl;   
}else if (pilih == 3){
 cout<<"\n    PERKALIAN   \n";
 cout<<" Masukkan Angka Pertama : ";cin>>a;
 cout<<" Masukkan Angka Kedua   : ";cin>>b;
 cout<<"\n Maka Hasil Perkalian dari "<<a<<" dan "<<b<<" adalah : "<<a*b<<endl;   
}else if (pilih == 4){
 cout<<"\n    PEMBAGIAN    \n";
 cout<<" Masukkan Angka Pertama : ";cin>>a;
 cout<<" Masukkan Angka Kedua   : ";cin>>b;
 cout<<"\n Maka Hasil Pembagian dari "<<a<<" dan "<<b<<" adalah : "<<a/b<<endl;   
}else if (pilih == 5){
 cout<<"\n    SISA BAGI (%)    \n";
 cout<<" Masukkan Angka Pertama : ";cin>>a;
 cout<<" Masukkan Angka Kedua   : ";cin>>b;
 cout<<"\n Maka Sisa Bagi dari "<<a<<" dan "<<b<<" adalah : "<<a%b<<endl;   
}else if (pilih == 6){
 cout<<"\n    AKAR    \n";
 cout<<" Masukkan Angka/Bilangan : ";cin>>a;
 cout<<"\n  Maka Akar dari "<<a<<" adalah : "<<sqrt(a)<<endl;   
}else if (pilih == 7){
 cout<<"\n    PERPANGKATAN    \n";
 cout<<" Masukkan Angka/Bilangan : ";cin>>a;
 cout<<" Masukkan Pangkatnya   : ";cin>>b;
 cout<<"\n Maka Hasil Dari "<<a<<" Pangkat "<<b<<" adalah : "<<pow(a,b)<<endl;   
}else if (pilih > 7 || pilih < 1) {
 cout<<" Maaf... Nomor Tidak Sesuai Dengan Semua Pilihan!!! \n Coba Lagi.";
 system("pause");
 system("cls");
 goto menu;
}
 cout<<" Coba Lagi? (y atau t) : " ;cin>>lagi;
  if (lagi =='y' || lagi =='Y'){
    system("pause");
  system("cls");
  goto menu;
 }
}
