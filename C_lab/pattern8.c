#include<stdio.h>
int main()
{
	int i,j,n,k=1;
	char a='A';
	printf("enter a number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		{
			if(i%2==0){
				printf("%c ",a);
				a++;
			}
			else{
				printf("%d ",k);
				k++;
			}
			
			
		}
		printf("\n");
	}
	return 0;
}
