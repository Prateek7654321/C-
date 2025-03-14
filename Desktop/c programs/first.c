#include <stdio.h>

int main(void) {
	int n,a,b,i;
	printf("no of test case");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{printf("\n");
	scanf("%d",&a);
	printf("\n");
	scanf("%d",&b);
	if(a<b)
	{printf("first\n");}
	else if(a>b)
	{printf("second\n");}
	else 
	{printf("any\n");}
	i=i+1;
	}
	
	return 0;
}

