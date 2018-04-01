#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Deklarasi
    float mr, d1, d2, ls, kel;
    //Input
    printf("           Bujur Sangkar            \n");
    printf("====================================\n");
    printf("Diagonal 1          :");scanf("%f",&d1);
    printf("Diagonal 2          :");scanf("%f",&d2);
    printf("Sisi miring         :");scanf("%f",&mr);
    //Proses
    kel=4*mr;
    ls=(d1*d2)/2;
    //Output
    printf("Keliling            :%.3f\n",kel);
    printf("Luas                :%.3f\n",ls);
    printf("====================================\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}
