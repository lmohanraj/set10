 #include<stdio.h>
 int main()
 {
 	int n,i;
 	printf("input");
 	scanf("%d",&n);
 	printf("\noutput=");
 	while(n>0)
 	{
 		i=n%10;
 		printf("%d",i);
 		n=n/10;
 	}
 	return 0;
 }
