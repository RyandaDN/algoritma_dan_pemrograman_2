#include <iostream>
using namespace std;
int main()
{
	cout<<"======================================"<<endl;
	cout<<"Program C++ Untuk Menghitung Faktorial"<<endl;
 	cout<<"======================================"<<endl<<endl;
 	
	int angka, total;
  	cout<<"Masukkan angka : "; cin>>angka;
	total=1;
	for(int i=1; i<=angka; i++)
	{
    	total=total*i;
	}
	cout<<endl;
	cout<<"============================"<<endl;
	cout<<angka<<"! = "<<total<<endl;
	cout<<"Faktorial dari " <<angka<<" adalah "<<total<<endl;
	cout<<"============================"<<endl;
}
