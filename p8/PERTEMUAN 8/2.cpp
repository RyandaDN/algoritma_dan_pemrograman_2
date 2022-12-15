#include<iostream>
using namespace std;:?
void rubah(void);
int main()
{
	int A=10, B=20;
	cout<<"Nilai Awal A dan B"<<endl;
	cout<<"A = "<<A<<endl;
	cout<<"B = "<<B<<endl<<endl;
	rubah();
	cout<<"Nilai A dan B setelah ";
	cout<<"pemanggilan fungsi"<<endl;
	cout<<"A = "<<A<<endl;
	cout<<"B = "<<B<<endl<<endl;
}
void rubah(void)
{
	int A=100, B=200;
	cout<<"Nilai A dan B dalam fungsi"<<endl;
	cout<<"A = "<<A<<endl;
	cout<<"B = "<<B<<endl<<endl;
}
