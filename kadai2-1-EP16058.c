#include <stdio.h>

int a = 0, n, b, i;
char c;
int main(){
	scanf("%d", &n);
	for(i = 0; i <= n; i++){
		scanf("%c", &c);
		if(c == ')'){
			printf("%d%d", a, a);
		}else{
			a++;
		}
	}
	printf("\n");
	

	return 0;
}
