#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Deklarasi
    float a, p , kel , ls;
    //Input
    printf("          Persegi Panjang           \n");
    printf("====================================\n");
    printf("Alas                :");scanf("%f",&a);
    printf("Panjang             :");scanf("%f",&p);
    //Proses
    kel=2*(a+p);
    ls=a*p;
    //Output
    printf("Keliling            :%.3f\n",kel);
    printf("Luas                :%.3f\n",ls);
    printf("====================================\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}
