#include <stdio.h>
void main(void){
	int 	n,i;
	long input[8],output[13];
	scanf("%d",&n);
	
	for(i=0;i<13;i++){
		output[i]=-1;
	}

	for(i=0;i<n;i++){
		scanf("%ld",input+i);
		output[input[i]%13]=input[i];
	}
	for(i=0;i<13;i++){
		printf("%ld ",output[i]);
	}

}
