#include <stdio.h>

int main(void){
int n,i,num=0;
char c;

scanf("%d %c",&n,&c);
for(i=0; i<n; i++){
	if(c=='('){ 
		printf("o");
	}else{
		printf("x");
	}
}
return 0;
}
