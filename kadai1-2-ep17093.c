#include<stdio.h>
void main(){
  int n,i,a[13];
  scanf("%d",&n);
  for (int j=0;j<13;j++) a[j]=-1;
  int k;
  for(int j=0;j<n;j++){
    scanf("%d",&i);
    k=i%13;
    while(a[k]!=-1) k=(k+1)%13;
    a[k]=i;
  } 
  for(int j=0;j<13;j++) printf("%d\n",a[j]);
}
