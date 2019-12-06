#include <stdio.h>

int main(void){
int n,i,num=0;
char c;

scanf("%d %c",&n,&c);

printf("%d %d",&n,&n+1);

/*
for(i=0; i<n; i++){
	if(c=='('){ 
		printf("o");
	}else{
		printf("x");
	}
	*c=*c+1;
}
*/
return 0;
}
