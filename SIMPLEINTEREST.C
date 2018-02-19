 #include<stdio.h>
 int main()
 {
 	float p,t,r;
 	float s;
 	printf("enter principle amount\ninterest rate in percentage per annum \ntime in yrs");
 	scanf("%f%f%f",&p,&r,&t);
 	s=(p*r*t)/100;
 	printf("\nsimple interst= %f",s);
 	return 0;
 }
