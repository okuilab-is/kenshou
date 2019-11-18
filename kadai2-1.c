#include<stdio.h>
int main(){
  int i,n,stack[100],num=1,stacknum=0;
  char c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%c",&a);
    if(c=='('){
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
