#include <stdio.h>
void main(){
  int n,i;
  scanf("%d",&n);
  int a[];
  for (int j=0;j<n;j++){
    a[j]=-1;
  }
  int k;
  for(int j=0;j<n;j++){
    scanf("%d",&i);
    k=i%13;
    a[k]=i;
  }
  for(int j=0;j<20;j++) printf("%d\n",a[j]);
}
