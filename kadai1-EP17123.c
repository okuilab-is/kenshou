#include <stdio.h>

int main(void){
int n,h,num,i;
scanf("%d",&n);
int xs[n];
for(i=0; i<n; i++) xs[i]=-1;
for(i=0; i<n; i++){
	scanf("%d",&num); //入力
	h=num%13;
	while(xs[h]!=0){
		h++;
		h=h%13;
	}
	xs[h]=num;
}
for(i=0; i<n; i++) printf("%d ",xs[i]);
printf("\n");
return 0;
}
