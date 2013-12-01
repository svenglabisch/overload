#include "vector.h"
#include <iostream>
#include <assert.h>
#include <cmath>


Vector::Vector(int n) {
    this->n = n;
    this->x = new double[n];
    
    for (int i=0; i < this->n; i++)
        this->x[i] = 0;
}
    
Vector::~Vector() {
    delete[] this->x;
}
    
Vector::Vector(const Vector& y) {
    return;
    this->n = y.n;
    this->x = new double[this->n];
    for (int i=0; i < this->n; i++)
        this->operator[](i) = y.x[i];
}
    
Vector& Vector::operator=(const Vector& y) {
    if (&y != this) {
        assert(n == y.n);
        for (int i=0; i < n; i++)
            this->x[i] = y.x[i];
    }
        
    return *this;
}

Vector Vector::operator+(const Vector y){
    assert(this->n==y.n);
    Vector c(y.n);
    for(int i=0;i<n;i++){
        c[i]=this->x[i]+y.x[i];
    }
    return c;
}

Vector Vector::operator*(const Vector y){
    assert(this->n==y.n);
    Vector c(y.n);
    double d=0;
    for(int i=0; i<n;i++){
        c[i]=this->x[i]*y.x[i];
        d=d+c[i];
    }
    std::cout << d << std::endl;
    return d;
}

Vector Vector::operator*(double y){
    for(int i=0 ; i < this->n; i++){
        this->x[i]=x[i]*y;
    }
    return *this;
}

Vector Vector::operator-(const Vector y){
    assert(this->n==y.n);
    Vector c(y.n);
    for(int i=0;i<n;i++){
        c[i]=this->x[i]-y.x[i];
    }
    return c;
}

Vector& Vector::operator=(double y) {   //noch net gebaut, was soll das machen?
    return *this;
}


double& Vector::operator[](const int i) {
    assert(this->n >= i+1);
    return this->x[i];
};
    
void Vector::dump() const {
    for (int i=0; i < this->n; i++)
        std::cout << x[i] << std::endl;
}