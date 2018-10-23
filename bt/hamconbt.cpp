#include<stdio.h>
#include<conio.h>
#include<math.h>
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
int TongMang(int mang[100],int n){
	int tong=0;
	for(int i=0;i<n;i++){
		if(mang[i]%2==0) tong=tong+mang[i];
	}
	return tong;
}
int TimMax(int mang[100],int n){
	int max=mang[0];
	for(int i=0;i<n;i++){
		if(mang[i]>max) max=mang[i];
	}
	return max;
}
int main(){
	int mang[100];
	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	NhapMang(mang,n);
	InMang(mang,n);
	printf("\ntong mang la %d",TongMang(mang,n));
	printf("\ngia tri mang nho nhat bang: %d",TimMax(mang,n));
}
