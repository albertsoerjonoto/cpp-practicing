#include<iostream>
#include<conio.h>

using namespace std;

main()

{
	int p, l, t;
	double ls, v;
	const int konversi=100; 
	cout<<"Panjang (m): "; cin>>p; cou<<" m";
	
	cout<<"Lebar(m): ";
	cin>>l;
	cout<<"Tinggi(m): ";
	cin>>t;
	cout<<endl;
	
	ls=2*(p*l) + 2*(p*t) + 2*(l+t);
	v=p*l*t;

	cout<<"Luas Balok  = "<<ls*konversi; cout<<" cm"<<endl;
	cout<<"Volume Balok = "<<v*konversi; cout<<" cm"<<endl;
	getch();
}
