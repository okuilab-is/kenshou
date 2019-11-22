#include <stdio.h>

int a, n, b, i;
char c;
int main(){
	scanf("%d", &n);
	while(i = 0; i <= n; i++){
		scanf("%c", &c);
		if(c == '('){
			a++;
		}else{
			printf("%d%d", a, a);
		}
	}
	printf("\n");
	

	return 0;
}
