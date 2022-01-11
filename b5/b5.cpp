#include<iostream>

using namespace std;

void nhap(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
}
void hien(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		cout<< a[i] <<" ";
	}
}
void sxGiam(int a[], int n){
	for(int i = 0 ; i < n-1 ; i++)
		for(int j = i+1 ; j < n ; j++){
			if(a[i] < a[j]) swap(a[i], a[j]);
		}
}
void atm(int a[], int n, int w){
	int x = 1;
	for(int i = 0 ; i < n ; i++){
		while(a[i] <= w){
			x = w/a[i];
			w = w - (x*a[i]);	
			cout<<x<<"x"<<a[i]<<endl;
		}
	}
}
int main(){
	int a[100], n, w;
	cout<<"\nNhap so luong tien: ";
	cin>>n;
	cout<<"\nNhap menh gia tien khac nhau: ";
	nhap(a,n);
	sxGiam(a,n);
	hien(a,n);
	cout<<"\nNhap so tien can rut: ";
	cin>>w;
	cout<<endl;
	atm(a,n,w);
	
}
