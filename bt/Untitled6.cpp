#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c;
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	float P=a+b+c,p=P/2;
	printf("chu vi tam giac: %f",P);
	printf("dien tich tam giac: %f",sqrt(p*(p-a)*(p-b)*(p-c)));
	return 0;
}
