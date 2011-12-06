#include "lotto.h"

int main(int argc, char* argv[])
{
int num, i;
int count, j;
puts("Welcome to this lottery program");
puts("|======================================|");
printf("How many times would you like to have this lottery run ?");
scanf("%d", &count);
j=0;
while(count > j)
{
for(i=0; i < 6; i++)
{
num = randNum();
printf("%d ", abs(num));
}
printf("\n");
j++;
}
printf("\n");
return 0;
}
