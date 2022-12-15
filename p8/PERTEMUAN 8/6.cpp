#include<iostream>
#define N_Baris 5
#define N_Kolom 2
using namespace std;
void cetak(int A[][N_Kolom]);
void Rubah_data(int array[][N_Kolom]);
int main()
{
	int data[N_Baris][N_Kolom]=
	{
		{23,77},
		{33,41},
		{20,21},
		{20,55},
		{67,78}
	};
	cetak(data);
	cout<<endl;
	Rubah_data(data);
	cetak(data);
	cout<<endl;
}

void Rubah_data(int array[][N_Kolom])
{
	int i, j;
	for(i=0; i<N_Baris; i++){
		for(j=0; j<N_Kolom; j++){
			array[i][j]=0;
		}
		cout<<endl;
	}
}

void cetak(int A[][N_Kolom])
{
	int i, j;
	for(i=0; i<5; i++){
		for(j=0; j<2; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}
