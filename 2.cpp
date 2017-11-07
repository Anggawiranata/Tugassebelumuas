#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int panjang, lebar, luas, pilihan, alas, tinggi;
	
	cout <<"1.Persegi panjang\n";
	cout <<"2.Segitiga\n";
	cout <<"Masukan Pilihan =";cin >>pilihan;
	
	switch(pilihan){
		case 1:
		cout<<"masukan panjang=";cin>>panjang;
		cout<<"masukan lebar=";cin>>lebar;
		luas =panjang * lebar;
		cout<<"luas persegi panjang="<<luas<<"\n";
		system("pause");
		break;
		case 2:
		cout<<"masukan panjang alas segitiga=";cin>>alas;
		cout<<"masukan tinggi segitiga=";cin>>tinggi;
		luas=0.5*alas*tinggi;
		cout<<"luas segitiga="<<luas<<"\n";
		system("pause");
	}	
}

