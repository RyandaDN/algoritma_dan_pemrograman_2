#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#include <conio.h>

using namespace std;

int nilai[6], indeks;
char pilihan;

void masukanNilai(){
	cout<<endl;
	for(indeks=0;indeks<=5;indeks++){
		cout<<"Masukan data ke "<<indeks+1<<" = ";
		cin>>nilai[indeks];
		}
}

void menyimpanNilai(){
	ofstream file;
	file.open("tugas.txt");
	for(int i=0; i<=5; i++){
		file<<nilai[i]<<" ";
	}
	cout<<"\nData telah disimpan di tugas.txt"<<endl;
	file.close();
}

void membacaNilai(){
	char k;
	
	ifstream fileku;
	fileku.open("tugas.txt");
	for(int i=0; i<=5; i++){
		fileku >> k;
	}
	cout <<"\nData telah dibaca"<<endl;
	fileku.close();
}

void membacaFile(){
	cout<<endl;
	for (indeks=0; indeks<6; indeks++){
		cout<<nilai[indeks]<<" ";
	}
	cout<<endl;
}

void urutMenaik(int array[],int n){
	int tmp;
	
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(array[j]>array[j+1]){
                tmp=array[j];
                array[j]=array[j+1];
                array[j+1]=tmp;
            }
        }
    }
}

void dataTerurut(){
	int i;
	int n=5;
	
	cout<<"\nData yang sudah diurutkan"<<endl;
	urutMenaik(nilai,n);
	for (i=0; i<=n; i++)
		cout<<nilai[i]<<" ";
		cout<<endl;
}

void kembali(){
	tanya:
	cout<<"\nTekan Y untuk melanjutkan: ";
	cin >> pilihan;
	if(pilihan=='Y'||pilihan=='y'){
	}else{
		cout<<"Pilihan yang anda masukan salah"<<endl;
		goto tanya;
	}
}

int main(void){
	char pilih;
	int n2;
	
	menu:
	cout << "  MENU PILIHAN "<< endl;
	cout << "================================"<<endl;
	cout << "1. Memasukan Data"<<endl;
	cout << "2. Simpan Data"<<endl;
	cout << "3. Baca Data"<<endl;
	cout << "4. Tampilkan Data Asal"<<endl;
	cout << "5. Urutkan Data Secara Menaik"<<endl;
	cout << "6. Tampilkan Data Yang Terurut"<<endl;
	cout << "7. Keluar"<<endl;
	cout << "================================"<<endl;
	cout << "Masukkan Nomor Pilihan (1...7): ";
	cin>>pilih;

	switch(pilih){
		case '1':
			masukanNilai();
			kembali();
			system("cls");
			goto menu;
			break;
		case '2':
			menyimpanNilai();
			kembali();
			system("cls");
			goto menu;
			break;
		case '3':
			membacaNilai();
			kembali();
			system("cls");
			goto menu;
			break;
		case '4':
			membacaFile();
			kembali();
			system("cls");
			goto menu;
			break;
		case '5':
			urutMenaik(nilai, 0);
			cout <<"\nData telah diurutkan secara menaik"<<endl;
			kembali();
			system("cls");
			goto menu;
			break;
		case '6':
			dataTerurut();
			kembali();
			system("cls");
			goto menu;
			break;
		default:
			system("cls");
			goto menu;
			cout<<"Pilihan yang anda masukan salah\n";
			break;
		case '7':
			cout<<"\nAnda Telah Keluar Dari Program"<<endl;
			cout<<"\tTerima Kasih"<<endl;
			exit(1);
			break;
	}
	return 0;
}
