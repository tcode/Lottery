#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int randNum()
{
int r = (random()*time(NULL)%49+1);
return r;
}


int main(int argc, char* argv[])
{
int num, i;
puts("Welcome to this lottery program");
puts("|======================================|");
for(i=0; i < 6; i++)
{
num = randNum();
printf("%d ", abs(num));
}
printf("\n");
return 0;
}
