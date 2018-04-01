#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
 //DEKLARASI
 float a, b, c, hasil;
 system("color d5");
 
 //INPUT
  cout<<"==========SOAL NOMOR 2==========\n";
 printf("     Masukkan Nilai a : "); scanf("%f", &a);
 printf("     Masukkan Nilai b : "); scanf("%f", &b);
 printf("     Masukkan Nilai c : "); scanf("%f", &c);
 
 //PROSES
 if (a>b)
 {
  if (a>c)
  {
   hasil = a;
  }
  else
  {
   hasil = c;
  }
 }
 else
 {
  if (b>c)
  {
   hasil = b;
  }
  else
  {
   hasil = c;
  }
 }

 //OUTPUT
 printf("Bilangan Terkecil adalah : %.2f \n", hasil);
 system("PAUSE");
 return EXIT_SUCCESS;
}
