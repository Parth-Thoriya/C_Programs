#include<stdio.h>
	 int main()
	 {
	 	int i,j,n,k=1;
	 	printf("enter a number");
	 	scanf("%d",&n);
	 	
	 	for(i=1;i<=n;i++){
	 		for(j=1;j<=n;j++){
	 			if(j<=n-i){
				 
	 			printf(" ");
	 		}
	 		else{
	 			printf("%d ",k);
	 			k++;
			 }
	 			
			 }
			 printf("\n");
			 k=1;
		 }
		 return 0;
	 }
