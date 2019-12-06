#include <stdio.h>

int main(void){
int n,i,j=0,num=1,x[100];
char c[100];

scanf("%d %s",&n,&c);

for(i=0; i<n; i++){
	if(c[i]=='('){//failed
		x[j] = num;
		printf("%d",num);
		num++;
		j++;
	}else{
		printf("%d",x[j]);
		j--;
	}
}
return 0;
}
