#ifndef VERSION_H
#define VERSION_H

#define TINYBLAS_VERSION_MAX 1
#define TINYBLAS_VERSION_MIN 0
#define TINYBLAS_CURRENT_VERSION "0.1.1"


#define COREAPI


#if defined __GNUC__
#define TINYBLAS_INLINE __inline__
#else
#define TINYBLAS_INLINE
#endif


#endif // VERSION_H
