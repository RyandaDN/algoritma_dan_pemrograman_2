#include<iostream>
using namespace std;

int fak(int n){
    if(n == 0){
        return 1;
    } else {
        return n * fak(n-1);
    }
}

int main(){   
    int n;
    cout<<"Masukkan angka faktorial = "; cin>>n;
    cout<<n<<"! = "<<fak(n)<<endl;
}