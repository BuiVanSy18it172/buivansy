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
	for(int i=0;i<n;i++){
		printf("\nmang[%d]=%d",i,mang[i]);
	}
}

