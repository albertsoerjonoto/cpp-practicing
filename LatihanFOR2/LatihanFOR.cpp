#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
   int a, b, c=0, d=1, e;
   cout<<"Jumlah angka deretan Fibonacci yang diinginkan: ";cin>>a;
   b=0;
   while (b<a)
   {
      if (b<=1)
         e=b;
      else
      {
         e=c+d;
         c=d;
         d=e;
      }
      cout<<e<<" ";
      b++;
   }    
    system("PAUSE");
    return EXIT_SUCCESS;
}
