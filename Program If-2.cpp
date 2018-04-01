#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char nama[30];
	int gol, anak, kerja;
	double gaji, tjanak, total;
	
	printf("Nama karyawan: "); scanf("%s", &nama);
	printf("Golongan: "); scanf("%i", &gol);
	printf("Jumlah anak: "); scanf("%i", &anak);
	printf("Lama kerja: "); scanf("%i", &kerja);
	
	if (gol==1)
	{
		gaji=1000;
		printf("\nGaji karyawan: %10.2f\n", gaji);

		if (kerja<=5 && anak<=3)
		{
			tjanak= 0.05*gaji;
			total= gaji+tjanak;
			printf("Tunjangan anak: %10.2f\n", tjanak);
			printf("Total gaji: %10.2f\n", total);
		}	
		else if (kerja<=5 && anak>3)
		{
			tjanak= 0.1*gaji;
			total= gaji+tjanak;
			printf("Tunjangan anak: %10.2f\n", tjanak);
			printf("Total gaji: %10.2f\n", total);
		}
		else if (kerja>5 && anak<=3)
		{
			tjanak= 0.08*gaji;
			total= gaji+tjanak;
			printf("Tunjangan anak: %10.2f\n", tjanak);
			printf("Total gaji: %10.2f\n", total);
		}
		else if (kerja>5 && anak>3)
		{
			tjanak= 0.15*gaji;
			total= gaji+tjanak;
			printf("Tunjangan anak: %10.2f\n", tjanak);
			printf("Total gaji: %10.2f\n", total);
		}
	
	}

	else if (gol==2)
	{
		gaji=2000;
		printf("\nGaji karyawan: %10.2f\n", gaji);

		if (kerja<=5 && anak<=3)
		{
			tjanak= 0.05*gaji;
			total= gaji+tjanak;
			printf("Tunjangan anak: %10.2f\n", tjanak);
			printf("Total gaji: %10.2f\n", total);
		}	
		else if (kerja<=5 && anak>3)
		{
			tjanak= 0.1*gaji;
			total= gaji+tjanak;
			printf("Tunjangan anak: %10.2f\n", tjanak);
			printf("Total gaji: %10.2f\n", total);
		}
		else if (kerja>5 && anak<=3)
		{
			tjanak= 0.08*gaji;
			total= gaji+tjanak;
			printf("Tunjangan anak: %10.2f\n", tjanak);
			printf("Total gaji: %10.2f\n", total);
		}
		else if (kerja>5 && anak>3)
		{
			tjanak= 0.15*gaji;
			total= gaji+tjanak;
			printf("Tunjangan anak: %10.2f\n", tjanak);
			printf("Total gaji: %10.2f\n", total);
		}
	
	}
	
	else if (gol==3)
	{
		gaji=3000;
		printf("\nGaji karyawan: %10.2f\n", gaji);

		if (kerja<=5 && anak<=3)
		{
			tjanak= 0.05*gaji;
			total= gaji+tjanak;
			printf("Tunjangan anak: %10.2f\n", tjanak);
			printf("Total gaji: %10.2f\n", total);
		}	
		else if (kerja<=5 && anak>3)
		{
			tjanak= 0.1*gaji;
			total= gaji+tjanak;
			printf("Tunjangan anak: %10.2f\n", tjanak);
			printf("Total gaji: %10.2f\n", total);
		}
		else if (kerja>5 && anak<=3)
		{
			tjanak= 0.08*gaji;
			total= gaji+tjanak;
			printf("Tunjangan anak: %10.2f\n", tjanak);
			printf("Total gaji: %10.2f\n", total);
		}
		else if (kerja>\5 && anak>3)
		{
			tjanak= 0.15*gaji;
			total= gaji+tjanak;
			printf("Tunjangan anak: %10.2f\n", tjanak);
			printf("Total gaji: %10.2f\n", total);
		}
	
	}
	
	else
		printf("Salah data");		
	
	getch();
}
