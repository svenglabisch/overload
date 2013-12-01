#ifndef __overload__matrix__
#define __overload__matrix__
#include "vector.h"

class Matrix {
public:
    int n;
    Vector** x;
    Matrix(int n);
    ~Matrix();
};

#endif /* defined(__overload__matrix__) */
