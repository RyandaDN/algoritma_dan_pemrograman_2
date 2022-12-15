#include<iostream>
 
using namespace std;
 
int Factorial(int faktor) 
{
	int hasil;
	if(faktor>1)
	{
		hasil=faktor*Factorial(faktor-1);
	}
  	else
    	return 1;
}
 
int main()
{
  	cout<<"=================================================================="<<endl;
	cout<<"Program C++ Untuk Menghitung Faktorial Menggunakan Fungsi Rekursif"<<endl;
	cout<<"=================================================================="<<endl<<endl;
	
 	loop:
	int angka;
	char pilihan;
 	
	cout<<"Input angka: "; cin>>angka;
 	cout<<"=============================="<<endl;
	cout<<angka<<"! = "<<Factorial(angka)<<endl;;
	cout<<"Faktorial dari " <<angka<<" adalah "<<Factorial(angka)<<endl;
	cout<<"=============================="<<endl<<endl;
 	
 	cout<<"Apakah Ingin Mengulangi Pemfaktoran (Y/N): "; cin>>pilihan;
 	pilihan=toupper(pilihan);
 	if(pilihan=='Y')
	{
		cout<<endl;
		goto loop;
 	} 
	else if(pilihan=='N')
	{
		return 0;
	}
}
