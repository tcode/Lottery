#include "lotto.h"


int randNum()
{
int r = (random()*time(NULL)%49+1);
return r;
}
