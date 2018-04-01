#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[])
{
    int a, b;
    cout<<"Masukkan Angka : ";
    cin>>a;
    
    for(b=1; a>=-3; a=a-b)
    {
     cout<<pow(a,2)<<" ";
    }
    getche();
}
