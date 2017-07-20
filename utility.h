#ifndef UTILITY_H
#define UTILITY_H

int sign(int n)
{
    if(n>0)
        return 1;
    else if(n<0)
       return -1;
    else
        return 0;
}
long signl(long n)
{
    if(n>0l)
        return 1l;
    else if(n<0l)
       return -1l;
    else
        return 0l;
}
long long signll(long long n)
{
    if(n>0ll)
        return 1ll;
    else if(n<0ll)
       return -1ll;
    else
        return 0ll;
}
float signf(float n)
{
    if(n>0.0f)
        return 1.0f;
    else if(n<0)
       return -1.0f;
    else
        return 0.0f;
}
double signlf(double n)
{
    if(n>0.0)
        return 1.0;
    else if(n<0)
       return -1.0;
    else
        return 0.0;
}



#endif // UTILITY_H
