#include <stdio.h>

int main(void) {
int a,b;
scanf("%d%d\n",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d%d\n",a,b);
return 0;
}
