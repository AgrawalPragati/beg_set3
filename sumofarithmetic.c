#include<stdio.h>
#include<math.h>
void main()
{
	float a,n,d,sum=0,m;
	printf("enter");
	scanf("%f%f%f",&n,&a,&d);
	m=(n-1)*d;
	sum=(n/2)*(2*a+m);
	printf("%d",(int)sum);
	
}
