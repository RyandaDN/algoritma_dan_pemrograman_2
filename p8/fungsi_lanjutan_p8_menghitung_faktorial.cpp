#include <iostream>
using namespace std;

int main()
{
	int angka, total;
  	cout<<"Masukkan angka : "; cin>>angka;
	total=1;
	for(int i=1; i<=angka; i++)
	{
    	total=total*i;
	}
	cout<<endl;
	cout<<angka<<"! = "<<total<<endl;
}
