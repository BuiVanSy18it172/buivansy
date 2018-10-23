#include<stdio.h>
//nhap 3 so tinh diem trung binh//
main()
{
	float toan,ly,hoa;
	printf("nhap diem toan:");
	scanf("%f",&toan);
	printf("nhap diem ly:");
	scanf("%f",&ly);
	printf("nhap diem hoa");
	scanf("%f",&hoa);
	printf("trung binh %1.2f",(toan+ly+hoa)/3);
	return 0;
}
