#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    char c,;
    int a,b;
    cout<<"Masukan jumlah deret huruf: ";cin>>b;
    c='A';
    for(a=1;a<=b;a++)
    {
         cout<<c<<" ";
         c++;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
