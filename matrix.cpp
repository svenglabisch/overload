#include "matrix.h"
#include "vector.h"
#include <cmath>
#include <assert.h>


Matrix::Matrix(int n){
    assert(n > 1);
    this->n = n;
    this->x = new Vector*[n];
    for (int i=  0; i < n; i++){
        this->x[i];
    }
}
    
Matrix::~Matrix() {
    for(int i=0; i < this->n; i++){
        //delete this->x[i];
    }
    //delete this->x;
}

Matrix::Matrix(Matrix& m){
    this->n = m.n;
    this->x = new Vector*;
    for (int i=0; i<m.n; i++){
        this->x[i] = new Vector(int(m.n));
        for (int j=0; j<m.n; j++){
            this->operator[](i)[j] = m[i][j];
        }
    }
}

Vector& Matrix::operator[](const int i) {
    assert(n>=i+1);
    return *this->x[i];
};

Matrix& Matrix::operator+(Matrix& y){
    assert(this->n == y.n);
    Matrix* m = new Matrix(y.n);
    for(int i=0 ; i < y.n ; i++) {
        for(int j=0 ; j < y.n ; j++) {
            m->operator[](i)[j] = this->operator[](i)[j] + y[i][j];
        }
    }
    
    return *m;
};

Matrix Matrix::operator-(const Matrix y){
    assert(this->n==y.n);
    Matrix m(y.n);
    for(int i=0 ; i < y.n ; i++){
        for(int j=0 ; j < y.n ; j++){
            m.x[i][j]=this->x[i][j]-y.x[i][j];
        }
    }
    return m;
};


void Matrix::dump() const {
    for (int i=0;i<n;i++)
        this->x[i]->dump();
}