#include<stdio.h>
void main(){
  int n,i,a[20];
  scanf("%d",&n);
  for (int j=0;j<20;j++) a[j]=-1;
  int k;
  for(int j=0;j<20;j++){
    scanf("%d",&i);
    k=i%13;
    while(a[k]!=-1) k++;
    a[k]=i;
  } 
  for(int j=0;j<20;j++) printf("%d\n",a[j]);
}
