#include<stdio.h>
int main(void){
	int n,num,h,a[];
	scanf("%d",&n);
	a[]=-1;
	for(i=0;i<n;i++){
		scanf("%d",&num);
		h=num%13;
		while(a[h]!=-1){
			h=h+1;
			while(h==13){
				h=0;
			}
		}
		a[h]=num;
	}
	for(h=0;h<13;h++){
	printf("%d",a[h]);
	}
}
