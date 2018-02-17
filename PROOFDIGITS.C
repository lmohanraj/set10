#include<stdio.h>
 int main()
 {
 	int n,i,p=1;
 	printf("input");
 	scanf("%d",&n);
 	while(n>0)
 	{
 		i=n%10;
 		p=p*i;
 		n=n/10;
 	}
 	printf("\nproduct = %d",p);
 	return 0;
 }
