#include <stdio.h>

int main(void){
int n,i,num=1,x;
char c[];

scanf("%d %s",&n,&c);

for(i=0; i<n; i++){
	if(c[i]=='('){//failed
		x=num; 
		printf("%d",num);
		num++;
	}else{
		printf("%d",x);
		x--;
	}
}
return 0;
}
