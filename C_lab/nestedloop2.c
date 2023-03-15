#include<stdio.h>
int main(){
	int i,j,n;
	double sum=1,fact=1;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		for(j=1;j<=i;j++)
		{
			fact = fact*j;
		}
		sum = sum +(1/fact);
		fact=1;	
			
			
	}
	printf("%.4lf",sum);
	return 0;
}
