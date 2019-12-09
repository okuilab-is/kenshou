#include <stdio.h>
void main(void){
	int 	n,i,inc=1,stack[100],temp=0;
	char input[100];
	scanf("%d",&n);
	
	scanf("%s",input);

	for(i=0;i<n;i++){
		if(input[i]=='('){
			stack[temp]=inc;
			inc+=1;
			printf("%d",stack[temp]);
			temp+=1;
		}
		else{
			temp--;
			printf("%d",stack[temp]);
		}
	}

}
