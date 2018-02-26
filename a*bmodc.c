#include <stdio.h>
int main()
{
	int a,b,c;
	printf("inputs\n");
	scanf("%d%d%d",&a,&b,&c);
	a=(a*b)%c;
	printf("output = %d",a);
	return 0;
}
