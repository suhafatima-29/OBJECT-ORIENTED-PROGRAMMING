#include<stdio.h>
int main(){
	int n,rem,rev=0;
	printf("enter the number for which we want reverse:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
    }
	printf("the reverse of a number is %d",rev);
	return 0;
}
