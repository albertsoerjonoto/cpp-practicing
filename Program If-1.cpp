#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main()
{
	char nama[30];
	int kerja, anak, gol;
	double gaji, tjanak, tjkes, total;
	
	printf("Nama Karyawan: "); scanf("%s", &nama);
	printf("Golongan[1/2/3]: "); scanf("%i", &gol);
	printf("Jumlah anak: "); scanf("%d", &anak);
	printf("Lama kerja (tahun): "); scanf("%d", &kerja);
	
	if (gol==1)
	{
		gaji=1000000;

		if (anak<=3)
			tjanak=0.1*gaji;
		else 
			tjanak=0.15*gaji;

		if (kerja>=5)
			tjkes=0.5*gaji;
		else 
			tjkes=0.25*gaji;

		total=(gaji+tjanak+tjkes);
	
		printf("\nGaji: %10.2f \n",gaji);
		printf("Tunjangan anak: %10.2f \n",tjanak);
		printf("Tunjangan kesehatan: %10.2f \n",tjkes);
		printf("Total gaji anda: %10.2f \n",total);

	}
	
	else if (gol==2) 
	{
		gaji=2000000;

		if (anak<=3)
			tjanak=0.1*gaji;
		else 
			tjanak=0.15*gaji;

		if (kerja>=5)
			tjkes=0.5*gaji;
		else 
			tjkes=0.25*gaji;

		total=(gaji+tjanak+tjkes);
		
		printf("\nGaji: %10.2f \n",gaji);
		printf("Tunjangan anak: %10.2f \n",tjanak);
		printf("Tunjangan kesehatan: %10.2f \n",tjkes);
		printf("Total gaji anda: %10.2f \n",total);
	}	
	
	else if (gol==3)
	{
		gaji=3000000;

		if (anak<=3)
			tjanak=0.1*gaji;
		else 
			tjanak=0.15*gaji;

		if (kerja>=5)
			tjkes=0.5*gaji;
		else 
			tjkes=0.25*gaji;

		total=(gaji+tjanak+tjkes);

		printf("\nGaji: %10.2f \n",gaji);
		printf("Tunjangan anak: %10.2f \n",tjanak);
		printf("Tunjangan kesehatan: %10.2f \n",tjkes);
		printf("Total gaji anda: %10.2f \n",total);
	}	
	
	else
	printf("\nSalah data");
	
getch();
}
