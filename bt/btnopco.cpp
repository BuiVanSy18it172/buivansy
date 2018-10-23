#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h> 
#include<ctype.h>
void NhapMang(int mang[100],int n){
	for(int i=0;i<n;i++){
		printf("mang[%d]=",i);
		scanf("%d",&mang[i]);
	}
}
void InMang(int mang[100],int n){
	for(int i=0;i<n;i++){
		printf("\nmang[%d]=%d",i,mang[i]);
	}
}


int main(){
	int mang[100];
	int n;
	float somoi,socu,tongtien=0,tieuthu;
	printf("nhap n= ");
	scanf("%d",&n);
	
	NhapMang(mang,n);
	InMang(mang,n);
	
	printf("\nnhap socu= \n");
	scanf("%f",&socu);
	printf("nhap so moi= \n");
	scanf("%f",&somoi);
	if(somoi>socu) 
	{
	tieuthu=somoi-socu;
	if(tieuthu<50) tongtien=tieuthu*1500;
	else if(tieuthu>=50&&tieuthu<=100) tongtien=49*1500+(tieuthu-49)*2000;
	else if(tieuthu>100) tongtien=49*1500+51*2000+(tieuthu-100)*3000;
	printf("\ntien dien la: %f",tongtien);
}
	else printf("so moi nho hon so cu"); 
	
	char str[100]; 
   int count=0; 
   int i=0; 
   printf("Nhap vao mot chuoi:"); 
   scanf("%s",str); 
    if(isalpha(str[i++])) 
   { 
    count++; 

   } 
      printf("Tong so ki tu trong chuoi:%d",count); 
   getch(); 
}
