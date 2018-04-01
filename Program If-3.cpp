#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{

 	int  a, b, c;
 	double d,x1, x2;
 	
 	printf("Input a: "); scanf("%i", &a);
 	printf("Input b: "); scanf("%i", &b);
 	printf("Input c: "); scanf("%i", &c);
 	
 	d=pow(b,2)-4*a*c;
 	
 	if(d>0)
 	{
	 	   x1=(b+sqrt(d))/(2*a);
	 	   x2=(b-sqrt(d))/(2*a);
	 	   printf("x1= %10.2f \n",x1);
	 	   printf("x2= %10.2f \n",x2);
}

    else if(d==0)
    {
	 	 x1=b/(2*a);
	 	 printf("\nx1=x2= %10.2f",x1);
}
 
 else 
  printf("Tidak ada akar real"); 
 	
 	getch();
}
 	
