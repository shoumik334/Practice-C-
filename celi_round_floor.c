//floor,round,ceil,trunc function
// floor=5.2=5 ceil 5.2=6 (round 5.2=5 5.5=6)
//trunc only purnosonkha

#include<stdio.h>
#include<math.h>
int main()
{
    double x,result;
    x=-5.2;
    result=ceil(x);
    printf("%lf\n",result);
    return 0;
}