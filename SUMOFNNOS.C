 #include<stdio.h>
 int main()
 {
 	int n,i,p=0,a[20];
 	printf("enter the number of elements");
 	scanf("%d",&n);
 	printf("\nenter the elements one by one");
 	for(i=0;i<n;i++)
 		scanf("%d",&a[i]);
            for(i=0;i<n;i++)
 	p=p+a[i];
 	printf("\nsum=%d",p);
 	return 0;
 		
 
 }
