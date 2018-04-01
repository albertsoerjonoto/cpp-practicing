#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void dsisi()
{
    int r1,r2;
    double ds;
    cout<<"=================================\n";
    cout<<"Rusuk 1 =";cin>>r1;
    cout<<"Rusuk 2 =";cin>>r2;
    ds=sqrt(r1*r1+r2*r2);
    cout<<"Panjang diagonal sisi :"<<ds<<endl;
    cout<<"=================================\n";
}

void druang()
{
    int r1,r2,r3;
    double dr,d;
    cout<<"=================================\n";
    cout<<"Rusuk 1 =";cin>>r1;
    cout<<"Rusuk 2 =";cin>>r2;
    cout<<"Rusuk 3 =";cin>>r3;
    d=sqrt(r1*r1+r2*r2);
    dr=sqrt(d*d+r3*r3);
    cout<<"Panjang diagonal ruang :"<<dr<<endl;
    cout<<"=================================\n";
}

int main()
{
    int kode;
    cout<<"     Program Diagonal Bidang\n";
    cout<<"=================================\n";
    cout<<"Pilihan perhitungan\n";
    cout<<" 1 = Diagonal sisi\n";
    cout<<" 2 = Diagonal ruang\n";
    cout<<"---------------------------------\n";
    cout<<"Pilihlah yang akan anda hitung :";cin>>kode;
    if(kode==1)
    {
        dsisi();
    }
    else if(kode==2)
    {
        druang();
    }
    else
    {
        cout<<"kode salah"<<endl;
    }
system("PAUSE");
return EXIT_SUCCESS;
}
