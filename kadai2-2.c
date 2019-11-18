#include<stdio.h>
int main(){
  int i,n,stack,num=1;
  char c[100];
  scanf("%d",&n);
  scanf("%s",c);
  for(i=0;i<n;i++){
    if(c[i]=='('){
      stack=num;
      printf("%d",num);
      num++;
    }else{
      printf("%d",stack);
    }
  }
  printf("\n");
  return 0;
}
