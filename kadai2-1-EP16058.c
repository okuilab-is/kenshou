#include <stdio.h>

int a[100], n, b, i;
char c;
int main(){
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%c", &c);
		if(c == '('){
			a[b++] = c;
		}else if(c == ')'){
			printf("%d%d", b, b);
		}
	}
	printf("\n");

	return 0;
}
