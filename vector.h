#ifndef __overload__vector__
#define __overload__vector__

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
    double operator*(const Vector& x);
    Vector operator*(double dx);
    double& operator[](const int i);
    void dump() const;

};

#endif /* defined(__overload__vector__) */
