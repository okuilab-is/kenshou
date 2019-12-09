#include<stdio.h>
void main(){
  int n,i=1;
  scanf("%d",&n);
  int a[100];
  char c;
  scanf("%c",&c);
  for(int j=0;j<n;j++){
    scanf("%c",&c);
    if(c=='('){
      a[j-(i-1)]=i;
      printf("%d",a[j]);
    }else{
      printf("%d",i);
      i++;
    }
  }
  printf("\n");
}

