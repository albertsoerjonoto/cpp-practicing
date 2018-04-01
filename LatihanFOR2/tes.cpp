#include <cstdlib>
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main(int argc, char * argv[])
{
 int a,b,c;
 b=1;
 cout<<"Masukkan angka : ";
 cin>>c;
 for(a=0;c>0;c--)
 {
  if(a<b)
  {
   cout<<a<<" ";
   a=a+b;
  }
  else
  {
   cout<<b<<" ";
   b=a+b;
  }
 }
 getche();
}

