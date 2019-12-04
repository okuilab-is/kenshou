#include<stdio.h>
int main(void){
	int n,[13]=-1,num,h;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		h=num%13;
		while([h]!=-1){
			h=h+1;
			while(h==13){
				h=0;
			}
		}
		[h]=num;
	}
	printf("%d",[h]);
}
