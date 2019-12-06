#include<stdio.h>
int main(void){
  int i,n;
  int num=0;
  char ka[100],ha[100];
  scanf("%d",&n);
  scanf("%c",ka);
  for(int i=0;i<n-1;i++){
    if(ka[i]=='('){
      ha[i]=num;
      printf("%d",num);
    }
    else{
      printf("%d",ha[i+1]);
      ha[i]=0;
    }
  }
  printf("\n");
  return 0;
}
