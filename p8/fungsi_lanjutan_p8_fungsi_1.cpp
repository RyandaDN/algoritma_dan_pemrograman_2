#include<iostream>
using namespace std;
float F(float x, float y);
int main()
{
	float x, y, Hasil;
	cout<<"x = "; cin>>x; cout<<"y = "; cin>>y;
	Hasil=F(x,y);
	cout<<x<<endl; cout<<y<<endl; cout<<Hasil<<endl;
}

float F(float A, float B)
{
	float H;
	H=9*A+2*B; // 3 + 6 (1 digit terakhir NIM)
	return H;
}
