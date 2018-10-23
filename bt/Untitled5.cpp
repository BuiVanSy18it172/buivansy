#include<stdio.h>
//nhap 3 so tim so lon nhat trong 3 so//
main()
{
	float a,b,c;
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	float max=a;
	if(b>max){
		max=b;
	}
	else if (c>max);{
		max=c;
	}
	else
		printf("so lon nhat trong 3 so la %f",max);
	return 0;
}
