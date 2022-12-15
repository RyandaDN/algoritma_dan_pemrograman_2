/*Mengurutkan data dengan metode Seleksi Maksimum*/
#include<iostream>

using namespace std;
void SeleksiMaksimum(int data[],int n); 
/*prototipe fungsi*/

int main()
{
	int i;
	int n=9;//Index terbesar
	int data[]={26,10,32,100,60,12,70,25,45,65}; // 20 + 6 (1 digit NIM terakhir) = 26 

	cout<<"Sebelum diurutkan :"<<endl;
	for(i=0;i<=n;i++)
		cout<<data[i]<<" ";
		cout<<endl;
		cout<<"_______________________________"<<endl;
		SeleksiMaksimum(data,n); 
		cout<<"Setelah diurutkan"<<endl;
			for(i=0;i<=n;i++)
				cout<<data[i]<<" ";
				cout<<endl;
}

void SeleksiMaksimum(int array1[],int n) 
{
	int i,j,tmp,imaks;
	
	for(i=n;i>=1;i--)
	{
		imaks=0;
		for(j=1;j<=i;j++)
		{
			if(array1[j]>array1[imaks])
			imaks=j;
		}
		tmp=array1[imaks];
		array1[imaks]=array1[i];
		array1[i]=tmp;
	} 
}

