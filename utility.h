#ifndef UTILITY_H
#define UTILITY_H
#include"version.h"
#include"compiler.h"

TINYBLAS_INLINE int sign(int n)
{
    if(n>0)
        return 1;
    else if(n<0)
       return -1;
    else
        return 0;
}
TINYBLAS_INLINE long signl(long n)
{
    if(n>0l)
        return 1l;
    else if(n<0l)
       return -1l;
    else
        return 0l;
}
TINYBLAS_INLINE long long signll(long long n)
{
    if(n>0ll)
        return 1ll;
    else if(n<0ll)
       return -1ll;
    else
        return 0ll;
}
TINYBLAS_INLINE float signf(float n)
{
    if(n>0.0f)
        return 1.0f;
    else if(n<0)
       return -1.0f;
    else
        return 0.0f;
}
TINYBLAS_INLINE double signlf(double n)
{
    if(n>0.0)
        return 1.0;
    else if(n<0)
       return -1.0;
    else
        return 0.0;
}



#endif // UTILITY_H
