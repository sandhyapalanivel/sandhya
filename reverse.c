#include <stdio.h>
int main()
{
    int n, reversedNumber = 0, remainder,i;
    printf("Enter an integer: ");
    scanf("%d", &n);
for(i=0;i<=n;i++)
    while(n != 0)
    {
 remainder=n%10;
reversedNumber=remainder+reversedNumber*10;
n=n/10;
 }
    printf("Reversed Number = %d", reversedNumber);
    return 0;
}
