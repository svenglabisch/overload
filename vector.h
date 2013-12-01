#ifndef __overload__vector__
#define __overload__vector__

#include "matrix.h"

class Vector{
public:
    int n;
    double *x;
    
    Vector(int n);
    ~Vector();
    Vector(const Vector& y);
    Vector& operator=(const Vector& y);
    Vector& operator=(double y);
    Vector operator+(const Vector y);
    Vector operator-(const Vector y);
    //float operator*(const Vector& x, const Vector& y);
    Vector operator*(double dx);
    Vector operator*(Matrix& m);
    double& operator[](const int i);
    void dump() const;

};

#endif /* defined(__overload__vector__) */
