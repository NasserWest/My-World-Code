#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Side1:",a);
	scanf("%d",&a);
	printf("Side2:",b);
	scanf("%d",&b);
	printf("Side3:",c);
	scanf("%d",&c);
	double s;
	double area;
	if(a+b>c && b+c>a && a+c>b){
		printf("This is triangle\n");
		s = (a+b+c)/2;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		// triangle_heron
		printf("triangle area is:%.2lf",area);
	}else
		printf("0\n");
	return 0;
}
