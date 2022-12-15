#include<iostream>
#include<iomanip>
#define SIZE 10
using namespace std;
void cetak(int *A) //atau cetak(int A[])
{
	for(int i=0; i<=SIZE-1; i++)
		cout<<setw(3)<<A[i];
}
void cetak_elemen(int el)
{
	cout<<"Elemen = "<<el;
}
void kali_elemen(int *A, int el, int a) //Elemen A[el]*a
{
	A[el]*a;
}
void rubah_array(int A[])
{
	for(int i=0; i<=SIZE; i++)
		A[i]=A[i]+2;
}
int main()
{
	int A[SIZE]={2,4,12,3,4,2,5,12,3,2}; //int A[SIZE]={2,4,6,3,4,2,5,6,3,2}; (6+6)
	cetak(A); cout<<endl;
	kali_elemen(A,2,10); //Elemen A[2]*10
	cetak(A); cout<<endl;
	rubah_array(A);
	cetak(A); cout<<endl;
}
