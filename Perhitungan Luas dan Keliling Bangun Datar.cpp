#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main()
{
	int p, l, s, t, r, kode;
	double ls, k;
	const float phi=3.14;
	
	printf("Perhitungan Luas dan Keliling Bangun Datar");
	printf("\n1. Persegi Panjang");
	printf("\n2. Segitiga");
	printf("\n3. Lingkaran");
	printf("\n4. Persegi\n");
	
	printf("\nPilihan [1/2/3/4]: "); scanf("%i", &kode);

	switch (kode)
	{
		case 1:
			{
				printf("\nPerhitungan Luas dan Keliling Persegi Panjang\n");
				printf("\nMasukkan panjang: "); scanf("%i", &p);
				printf("Masukkan lebar: "); scanf("%i", &l);
				ls=p*l;
				k=2*p+2*l;
				printf("\nLuas persegi panjang: %10.0f",ls);
				printf("\nKeliling persegi panjang: %10.0f",k);
				break;
			}
			
		case 2:
			{
				printf("\nPerhitungan Luas dan Keliling Segitiga\n");
				printf("\nMasukkan sisi: "); scanf("%i", &s);
				printf("Masukkan tinggi: "); scanf("%i", &t);
				ls=s*t/2;
				k=3*s;
				printf("\nLuas segitiga: %10.0f",ls);
				printf("\nKeliling segitiga: %10.0f",k);
				break;
			}
			
		case 3:
			{
				printf("\nPerhitungan Luas dan Keliling Lingkaran\n");
				printf("\nMasukkan jari-jari: "); scanf("%i", &r);
				ls=phi*r*r;
				k=phi*2*r;
				printf("\nLuas lingkaran: %10.0f",ls);
				printf("\nKeliling lingkaran: %10.0f",k);
				break;
			}
			
		case 4:
			{
				printf("\nPerhitungan Luas dan Keliling Persegi\n");
				printf("\nMasukkan sisi: "); scanf("%i", &s);
				ls=s*s;
				k=4*s;
				printf("\nLuas persegi: %10.0f",ls);
				printf("\nKeliling persegi: %10.0f",k);
				break;
			}
		
		default:
			{
				printf("\nSalah data");
			}				
	}
getch();	
}
