#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
if(n>0)
     {
     	if(n%2==0)
     	printf("even");
     	else if(n%2!=0)
     	printf("odd");
     }
     else
     {
     printf("invalid");
     	
     }
	return 0;
}
