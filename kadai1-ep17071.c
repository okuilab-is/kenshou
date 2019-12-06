#include<stdio.h>
int main(void){
  int n,num,h;
  int p[13];
  scanf("%d",&n);
  for(int l=0;l<13;l++){
    p[l]=-1;
  }
  for(int i=0;i<n;i++){
    scanf("%d",&num);
    h=num%13;
    while(p[h]!=-1){
      h=h+1;
      h=h%13;
    }
    p[h]=num;
  }
  for(int k=0;k<13;k++){
    printf("%d ",p[k]);
  }
  printf("\n");
  return 0;
}
