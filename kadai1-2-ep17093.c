#include<stdio.h>
void main(){
  int n,i,a[20];
  scanf("%d",&n);
  for (int j=0;j<20;j++) a[j]=-1;
  int k;
  for(int j=0;j<n;j++){
    scanf("%d",&i);
    k=i%13;
    while(a[k]!=-1) {
      k=(k+1)%13;
    }
    a[k]=i;
    printf("%d,%d\n",k,a[k]);
  } 
  for(int j=0;j<20;j++) printf("%d\n",a[j]);
}
