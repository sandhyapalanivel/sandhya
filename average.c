#include <stdio.h>

int main(void) {
	int i,n=6,sum=0,avg;
	{
		for(i=0;i<=n;i++)
		{
			sum=sum+i;
		}
		avg=sum/n;
		printf("avg is:%d",avg);
	}
	return 0;
}
