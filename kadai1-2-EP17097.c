#include <stdio.h>

int main(void){
        int n,x,i,j,k,l=0,ans;
        int a[13];
        scanf("%d",&n);
        for(i=0;i<13;i++){
                a[i]=-1;
        }
        for(j=0;j<n;j++){
                scanf("%d",&x);
	        ans=x%13;
        	while(ans==a[l]){
			ans=(x+1)%13;
			l++;
		}



	        a[ans]=x;
        }
        for(k=0;k<13;k++){
                printf("%d ",a[k]);
        }
        printf("\n");

}
       
