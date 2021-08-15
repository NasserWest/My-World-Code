#include<stdio.h>

int main()
{
 // a = Weight(kg) b = Height(m) c = BMI
 double a;
 printf("Enter your Weight(kg):");
 scanf("%lf",&a);

 double b;
 printf("Enter your Height(m):");
 scanf("%lf",&b);
 
 double c;
 c = a / (b*b);
 printf("BMI is : %.1f\n",c);

	if (c <= 18.5)
		
		printf("underweight\n");
	
	else if (c > 18.5,c < 24.9)
	
		printf("normal\n");
	
	else if (c > 25,c < 29.9)
	
		printf("above standard\n");
	
	else if (c > 30)
	
		printf("too fat\n");
	
	else 
		printf("can't check");
	return 0 ;
}

