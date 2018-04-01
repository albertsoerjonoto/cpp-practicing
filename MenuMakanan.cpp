#include<iostream>
using namespace std;

int main()
{
int hobi;
cout<<"              RESTORAN KIMOCHI        \n";
cout<<"===========================================\n";
cout<<"Menu hari ini \n";
cout<<"1. Pisang Bakar\n";
cout<<"2. Bebek Bakar\n";
cout<<"3. Babi Bakar\n";
cout<<"Pilih menu makanan [1/2/3]: ";
cin>>hobi;
cout<<"------------------BILLS--------------------\n";
switch(hobi)
{
case 1 :
cout<<"Selamat! Anda telah memesan pisang bakar\n";
cout<<"Harga = Rp 50.000,00\n";
break;
case 2 :
cout<<"Selamat! Anda telah memesan bebek bakar\n";
cout<<"Harga = Rp 70.000,00\n";
break;
case 3 :
cout<<"Selamat! Anda telah memesan babi bakar\n";
cout<<"Harga = Rp 100.000,00\n";
break;
default:
cout<<"Kimochi Salah Memasukan kode\n";
cout<<"Harga = Rp 000.000,00\n";
break;
}
cout<<"===========================================\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}

