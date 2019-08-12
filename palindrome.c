#include <stdio.h>

int main(void) {
	int i,n,remainder,reverseNumber=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	while(n!=0)
	{
		remainder=n%10;
		reverseNumber=reverseNumber*10+remainder;
		n=n/10;
}
if(reverseNumber==n)
printf("palindrome");
else
printf("not");
	
	return 0;
}
