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
	int min=mang[0];
	for(int i=0;i<n;i++){
		if(mang[i]<min) min=mang[i];
	}
	printf("\ngia tri mang nho nhat bang: %d",min);
}

