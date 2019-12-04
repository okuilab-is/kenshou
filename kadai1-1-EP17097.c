#include <stdio.h>

int main(void){
	int n,x,ans;
	int a[13];
	
	for(i=0;i<13;i++){
		a[i]=-1;	
	}
	for(i=0;i<n;i++){
		scanf("%d",&x);
		ans=x%13;
		a[ans]=x;	
	}


}
