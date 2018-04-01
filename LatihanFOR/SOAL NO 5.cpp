

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[])
{
    int a,b;
    cout<<"Masukkan Angka : ";
    cin>>a;
    
    for(b=3; a>=0; a=a-b)
    {
     cout<<a<<" ";
    }
    getche();
}
