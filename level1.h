#ifndef LEVEL1_H
#define LEVEL1_H
#include<math.h>
#include"utility.h"
/*
 * SROTG - setup Givens rotation
 */
float srotg(float SA,float SB,float *C,float *S)
{
    float r;
    float t,u;
    if(SB == 0.0f)
    {
        if(SA>=0) *C=1.0f;
        else *C=-1.0f;

        *S = 0;
        r = fabs(SA);
    }
    else if(SA == 0.0f)
    {
        *C = 0.0f;
        *S = signf(SB);
        r = fabs(SB);
    }
    else if(fabs(SA) > fabs(SB))
    {
        t = SB/SA;
        u = signf(SA)*fabs(sqrt(1.0f+t*t));
        *C = 1/u;
        *S = *C*t;
        r = SA*u;
    }
    else
    {
        t = SA/SB;
        u = signf(SB)*fabs(sqrt(1+t*t));
        *S = 1/u;
        *C = *S*t;
        r = SB*u;
    }
    return r;
}
/*
 * SROTMG - setup modified Givens rotation
 *
 */

float srotmg(float SD1,float SD2,float SX1,float SY1,float SPARAM[5])
{

}

/*
 * SROT - apply Givens rotation
 *
 */




/*
 * SROTM - apply modified Givens rotation
 *
 */




/*
 * SSWAP - swap x and y
 *
 */


#endif // LEVEL1_H
