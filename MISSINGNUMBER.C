 #include<stdio.h>
 int main()
 {
 	int i,n,a[10];
 	printf("number of elements");
 	scanf("%d",&n);
 	printf("\ninput elements\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
 	}
 		for(i=0;i<n;i++)
 		{
 			if(a[i+1]!=(1+a[i]))
 			{
 				printf("MISSING ELEMENT=%d",1+a[i]);
 				break;
 			}
 		}
 	
 	
 }
