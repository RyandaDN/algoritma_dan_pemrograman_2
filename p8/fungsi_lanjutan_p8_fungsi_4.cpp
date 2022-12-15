#include<iostream>
#include<iomanip>
using namespace std;
#define SIZE 10

void cetak(int *A)
{
	for(int i=0; i<=SIZE-1; i++)
		cout<<setw(3)<<A[i];
}

void jumlah(int *A, int*B)
{
	int C[SIZE];
	for(int i=0; i<=SIZE-1; i++)
		C[i]=A[i]+B[i];
	cetak(C);
}

int main(void)
{
	int A[SIZE]={2,4,6,3,4,2,5,6,3,2};
	int B[SIZE]={1,3,5,7,2,2,4,6,3,1};
	
	//cetak matrik A
	cetak(A); cout<<endl;
	//cetak matrik B
	cetak(B); cout<<endl;
	//Jumlahkan matrik
	jumlah(A,B); cout<<endl;	
}
