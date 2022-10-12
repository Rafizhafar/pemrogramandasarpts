#include <iostream>

using namespace std;

int main(){
	
	//Deklarasi variabel
	float absensi, tugas, uts, uas, nilai_akhir;
	char nilai_huruf;
	
	cout<<"Program Menghitung Nilai Akhir"<<endl;
	cout<<"----------------------------------------"<<endl;
	
	//Proses input
	cout<<"Masukan Nilai Absensi : ";
	cin>>absensi;
	
	cout<<"Masukan Nilai Tugas : ";
	cin>>tugas;
	
	cout<<"Masukan Nilai UTS : ";
	cin>>uts;
	
	cout<<"Masukan Nilai UAS : ";
	cin>>uas;
	
	//Hitung sesuai rumus
	nilai_akhir = ((absensi+tugas+uts+uas))/4;
	
	
	
	//Proses output
	cout<<endl;
	cout<<"Nilai Akhir : "<<nilai_akhir<<endl;
	
	
}
