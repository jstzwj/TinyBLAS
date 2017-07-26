#ifndef TYPES_H
#define TYPES_H

#include"config.h"
#include"compiler.h"

struct complexf
{
    float real;
    float imag;
};
struct complexd
{
    double real;
    double imag;
};


#if defined(TINYBLAS_DEFAULT_TO_COL_MAJOR)
TINYBLAS_INLINE int mindex(int lda,int row,int col)
{
    return col*lda+row;
}
#elif defined(TINYBLAS_DEFAULT_TO_ROW_MAJOR)

TINYBLAS_INLINE int mindex(int lda,int row,int col)
{
    return row*lda+col;
}
#else
TINYBLAS_INLINE int mindex(int lda,int row,int col)
{
    return col*lda+row;
}
#endif



#endif // TYPES_H
