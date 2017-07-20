#include <stdio.h>
#include"utility.h"
#include"level1.h"

int main(int argc, char *argv[])
{
    {
        float c,s,r;
        r=srotg(3,4,&c,&s);
        printf("%f,%f,%f",c,s,r);
    }
    return 0;
}
