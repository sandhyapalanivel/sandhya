#include <stdio.h>
int main(void) {
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	z=x;
	x=y;
	y=z;
	printf(%dx\n:y);
printf(%dy\n:x);
	return 0;
}
