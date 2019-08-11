#include <stdio.h>
int main(void) {
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	z=x;
	x=y;
	y=z;
	printf(%d%d\n,x,y);
	return 0;
}
