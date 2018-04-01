#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
 //DEKLARASI
 float a, b, c;
 system("color b1");
 
 
 //INPUT
  cout<<"===========SOAL NOMOR 5===========\n";
 printf("       Masukkan Nilai 1 : "); scanf("%f", &a);
 printf("       Masukkan Nilai 2 : "); scanf("%f", &b);
 printf("       Masukkan Nilai 3 : "); scanf("%f", &c);
 
 //PROSES & OUTPUT
 if (a>60)
 {
  if (b>60)
  {
   if (c>60)
   {
    cout<<"             DITERIMA\n";
   }
   else
   {
    cout<<"          TIDAK DITERIMA\n";
   }
  }
  else
  {
   cout<<"          TIDAK DITERIMA\n";
  }
 }
 else
 {
  cout<<"          TIDAK DITERIMA\n";
 }
 
 system("PAUSE");
 return EXIT_SUCCESS;
}
