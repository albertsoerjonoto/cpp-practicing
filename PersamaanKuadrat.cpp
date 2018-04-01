#include <iostream>
#include <cstdlib>
#include <math.h>

int main(int argc, char *argv[]) 
{
	float a, b, c, D, x1, x2;
	printf("         Program Persamaan Kuadrat      \n");
	printf("----------------------------------------\n");
    printf("Masukkan Nilai A	:");scanf("%f",&a);
	printf("Masukkan Nilai B	:");scanf("%f",&b);
	printf("Masukkan Nilai C	:");scanf("%f",&c);
	D=b*b-4*a*c;
	if (D>0)
	{
    x1=(b+sqrt(D))/(2*a);
	x2=(b-sqrt(D))/(2*a);
	printf("Nilai X1         	:%.1f\n",x1);
	printf("Nilai X2         	:%.1f\n",x2);
    }
	else if (D=0)
	{
    x1=b/(2*a);
	x2=x1;
  	printf("Nilai X1        	:%.1f\n",x1);
	printf("Nilai X2        	:%.1f\n",x2);
    }
	else if (D<0)
	{printf("Tidak Ada Akar real");}
	printf("----------------------------------------\n");
	system("PAUSE");
	return EXIT_SUCCESS;
}
