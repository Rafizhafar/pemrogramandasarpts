#include <iostream>
using namespace std;

int main() {
 int nilai;
 char predikat;
 string keterangan;
 
 cout << "Masukkan Nilai anda : ";
 cin >> nilai;
 
 if (nilai > 100){
  cout << "nilai yang anda masukkan salah\n";
 }else if (nilai > 92){
  predikat = 'A';
 }else if (nilai > 87){
  predikat = 'AB';
 }else if (nilai > 83){
  predikat = 'B';
 }else if (nilai > 79){
  predikat = 'C';
 }else if (nilai <= 79){
  predikat = 'D';
 }else{
  cout << "nilai yang anda masukkan salah\n";
 }
 
 if (nilai >= 56){
 }else{
  keterangan = "anda mengulang materi";
 }
 cout << "Nilai Huruf : " << predikat << keterangan <<endl;
 
}
