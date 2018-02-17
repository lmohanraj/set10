 #include<stdio.h>
 int main()
 {
 	int n,k,i,a[10];
 	printf("input\n");
 	scanf("%d",&n);
            printf("enter elements");
            for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            printf("\nelement number");
            scanf("%d",&k);
            printf("\n%d",a[k-1]);
 	return 0;
 }
