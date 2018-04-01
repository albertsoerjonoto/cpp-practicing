#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
 	int jumlah;
 	char  kode, nama;
 	float total, harga;
 	
 	printf("--------AGEN BIRO PERJALANAN---------\n\n");
 	printf("Nama pembeli: "); scanf("%s", &nama);
 	printf("Kode tujuan[a/b/c]: "); scanf("%s", &kode);
 	printf("Jumlah tiket: "); scanf("%i", &jumlah);
 	
 	
 	switch (kode) {
		   case 'a':
		   		 {
				  		  harga=600000;
				  		  total= jumlah*harga;
				   		  printf("%s",nama); printf("membeli tiket Jakarta-Denpasar dengan jumlah %i", jumlah); printf(" tiket dengan harga total %10.0f", total);
				   		  break;
						  }
           case 'b':
		   		 {
				   		  harga=800000;
				 		  total= jumlah*harga;
				   		  printf("membeli tiket Jakarta-Medan dengan jumlah %i", jumlah); printf(" tiket dengan harga total %10.0f", total);
				   		  break;
						  }
		   case 'c':
		   		 {
				   		  harga=1200000;
				 		  total= jumlah*harga;
				   		  printf("membeli tiket Jakarta-Makassar dengan jumlah %i", jumlah); printf(" tiket dengan harga total %10.0f", total);
				   		  break;
		   		  }
		   		  default:
				  		  printf("Salah data");
				  }
				  
				  getch();
				  }				  
