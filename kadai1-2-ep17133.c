#include <stdio.h>
void main(void){
	int 	n,i,temp	;
	long input[8],output[13];
	scanf("%d",&n);
	
	for(i=0;i<13;i++){
		output[i]=-1;
	}

	for(i=0;i<n;i++){
		scanf("%ld",input+i);
		temp=input[i]%13;
		while(output[temp]>0){
			temp=(temp+1)%13;
		}
		output[temp]=input[i];
	}
	for(i=0;i<13;i++){
		printf("%ld ",output[i]);
	}

}
