#include<stdio.h>
int main(){
  int i,n,stack[100],num=1,stacknum=0;
  char c[100];
  scanf("%d",&n);
  scanf("%s",c);
  for(i=0;i<n;i++){
    if(c[i]=='('){
      printf("%d",num);
      stack[stacknum]=num;
      stacknum++;
      num++;
    }else{
      printf("%d",stack[stacknum-1]);
      stacknum--;
    }
  }
  printf("\n");
  return 0;
}
