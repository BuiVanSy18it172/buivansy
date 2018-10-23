#include<stdio.h>
#include<conio.h>
int main(){
	int mang[100];
	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("mang[%d]=",i);
		scanf("%d",&mang[i]);
	}
	int tong=0;
	for(int i=0;i<n;i++){
		if(mang[i]%2==0) tong=tong+mang[i];
	}
	printf("tong mang bang %d",tong);
}
