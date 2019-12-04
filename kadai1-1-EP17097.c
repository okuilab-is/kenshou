#include <stdio.h>

int main(void){
	int n,x,i,j,k,ans;
	int a[13];
	
	for(i=0;i<13;i++){
		a[i]=-1;	
	}
	for(j=0;j<n;j++){
		scanf("%d",&x);
		ans=x%13;
		a[ans]=x;	
	}
	for(k=0;k<13;k++){
		printf("%d ",a[k])
	}
	printf("\n");

}
