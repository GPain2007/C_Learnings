/* numbers.c */
#include <stdio.h>

int main()
{
int x, y, answer;
printf("Enter a number: ");
scanf("%d", &x);
printf("Enter a number: ");
scanf("%d", &y);
answer = x + y;
printf("The answer is %d\n", answer);
return 0;
}