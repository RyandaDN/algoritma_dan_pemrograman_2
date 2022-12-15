#include<iostream>
#include<iomanip>
using namespace std;
#define SIZE 10

void cetak(int *A) {
	for(int i=0; i<=SIZE-1; i++)
		cout<<setw(3)<<A[i];
}

void cetak_elemen(int el) {
	cout<<"Elemen = "<<el;
}

void kali_elemen(int *A, int el, int a) {
	A[el]*=a;
}

void rubah_array(int A[]){
	for(int i=0; i<=SIZE-1; i++)
		A[i]=A[i]+2;
}

int main(){
	int A[SIZE]={2,4,6+3,3,4,2,5,6+3,3,2}; 
	cetak(A); cout<<endl;
	cetak_elemen(A[2]); cout<<endl;
	kali_elemen(A,2,10);
	cetak(A); cout<<endl;
	rubah_array(A);
	cetak(A); cout<<endl;
}
