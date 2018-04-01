#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
 //DEKLARASI
 float a, b, c, kecil, sedang, besar;
 system("color c4");
 
 //INPUT
  cout<<"===========SOAL NOMOR 3===========\n";
 printf("       Masukkan Nilai a : "); scanf("%f", &a);
 printf("       Masukkan Nilai b : "); scanf("%f", &b);
 printf("       Masukkan Nilai c : "); scanf("%f", &c);
 
 //PROSES
 //PERNYATAAN IF VARIABEL KECIL
 if (a<b)
 {
  if (a<c)
  {
   kecil = a;
  }
  else
  {
   kecil = c;
  }
 }
 else
 {
  if (b<c)
  {
   kecil = b;
  }
  else
  {
   kecil = c;
  }
 }
 
 //PERNYATAAN IF VARIABEL BESAR
  if (a>b)
 {
  if (a>c)
  {
   besar = a;
  }
  else
  {
   besar = c;
  }
 }
 else
 {
  if (b>c)
  {
   besar = b;
  }
  else
  {
   besar = c;
  }
 }
 
 //PERNYATAAN IF VARIABEL SEDANG
 if (a<b)
 {
  if (a>c)
  {
   sedang = a;
  }
  else
  {
   if (b<c)
   {
    sedang = b;
   }
   else
   {
    sedang = c;
   }
  }
 }
 else
 {
  if (b>c)
  {
   sedang = b;
  }
  else
  {
   if (c>a)
   {
    sedang = a;
   }
   else
   {
    sedang = c;
   }
  }
 }

 //OUTPUT
 printf("Urutannya adalah : %.2f", kecil); printf(", %.2f", sedang); printf(", %.2f\n", besar);
 system("PAUSE");
 return EXIT_SUCCESS;
}
