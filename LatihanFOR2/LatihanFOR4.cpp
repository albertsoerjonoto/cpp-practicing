#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
   int a, b, c=0, d=1, e;
   cout<<"Jumlah angka deretan Fibonacci yang diinginkan: ";cin>>a;
   for (b=0;b<a;b++)
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
   }    
    system("PAUSE");
    return EXIT_SUCCESS;
}
