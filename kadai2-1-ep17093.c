#include<stdio.h>
void main(){
  int n,i=1;
  scanf("%d",&n);
  int a[n];
  char c;
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

