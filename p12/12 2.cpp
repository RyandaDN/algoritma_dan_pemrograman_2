/*Mengurutkan data dengan metode Seleksi Minimum*/
#include<iostream>
using namespace std;
void SeleksiMinimum(int data[],int n); 
/*prototipe fungsi*/
int main()
{
	int i;
	int n=9;//Index terbesar
	int data[]={20,10,32,100,60,12,70,25,45,65};
	
	cout<<"Sebelum diurutkan :"<<endl;
	for(i=0;i<=n;i++)
	cout<<data[i]<<" ";
	cout<<endl;
	cout<<"_______________________________"<<endl;
	SeleksiMinimum(data,n); 
	cout<<"Setelah diurutkan"<<endl;
		for(i=0;i<=n;i++)
		cout<<data[i]<<" ";
		cout<<endl;
}
void SeleksiMinimum(int array1[],int n) 
{
	int i,j,tmp,imin;
	
	for(i=0;i<=n-1;i++)
	{
		imin=i;
		for(j=i+1;j<=n;j++)
		{
			if(array1[j]<array1[imin])
			imin=j;
		}
		tmp=array1[imin];
		array1[imin]=array1[i];
		array1[i]=tmp;
	}	 
}
