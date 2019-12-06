#include <stdio.h>

int main(void){
int n,i,num=1,x;
char c;

scanf("%d %c",&n,&c);

for(i=0; i<n; i++){
	if(c=='('){//failed
		x=num; 
		printf("%d",num);
		num++;
	}else{
		printf("%d",x);
		x--;
	}
	c++;
}
return 0;
}
