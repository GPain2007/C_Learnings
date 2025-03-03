/* float.c */
# include <stdio.h>

int main(){

  float pi, radius, answer;

  printf("What is the R in cm?\n");

  scanf("%f", &radius);

pi = 3.14159;

answer = radius * radius * pi;

printf("The area of the circle is %f\n", answer);

return 0;
}