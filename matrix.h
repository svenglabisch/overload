
#ifndef __overload__matrix__
#define __overload__matrix__
#include "vector.h"

class Matrix {
public:
    int n;
    Vector** x;
    Matrix(int n);
    Matrix(Matrix& m);
    Vector& operator[](const int i);
    Matrix& operator+(Matrix& y);
    Matrix& operator-(Matrix& y);
    //Matrix& operator*(Matrix& y);
    Vector& operator*(Vector& m);
    ~Matrix();
    void dump();
};

#endif /* defined(__overload__matrix__) */
