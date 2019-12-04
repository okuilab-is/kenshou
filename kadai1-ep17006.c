#include<stdio.h>
int main(void){
	int n,h[]=-1,num,h;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		h=num%13;
		while(h[h]!=-1){
			h=h+1;
			while(h==13){
				h=0;
			}
		}
		h[h]=num;
	}
	for(h=0;h<13;h++){
	printf("%d",h[h]);
	}
}
