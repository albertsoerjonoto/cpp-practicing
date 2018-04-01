#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
	int rabat, harga; double total, srabat;
	
	cout<<"Harga Barang: ";
	cin>>harga;
	cout<<"Persentase Rabat: ";
	cin>>srabat;
	
	rabat= srabat*harga/100;
	total= harga-rabat;
	
	cout<<"Harga Awal  = "<<harga<<endl;
	cout<<"Rabat 	    = "<<rabat<<endl;
	cout<<"Harga Akhir = "<<total<<endl;
	
getch();
}
