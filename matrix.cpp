#include "matrix.h"
#include "vector.h"
#include <cmath>
#include <assert.h>


Matrix::Matrix(int b){
    assert(b > 1);
    this->n = b;
    this->x = new Vector*[b];
    
    for (int i=  0; i < b; i++){
        this->x[i] = new Vector(b);
    }
     
}

Vector& Matrix::operator[](const int i) {
    assert(n>=i+1);
    return *this->x[i];
};
    
Matrix::Matrix(Matrix& m){
    this->n = m.n;
    this->x = new Vector*[this->n];
        
    for (int i =  0; i < this->n; i++){
        this->x[i] = new Vector(m[i]);
    } 
}

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

Matrix& Matrix::operator-(Matrix& y){
    assert(this->n == y.n);
    Matrix* m = new Matrix(y.n);
    for(int i=0 ; i < y.n ; i++) {
        for(int j=0 ; j < y.n ; j++) {
            m->operator[](i)[j] = this->operator[](i)[j] - y[i][j];
        }
    }
    
    return *m;
};

Matrix& Matrix::operator*(Matrix& y){
    assert(this->n == y.n);
    Matrix* m = new Matrix(y.n);
    for(int i=0 ; i < y.n ; i++) {
        for(int j=0 ; j < y.n ; j++) {
            m->operator[](i)[j] = this->operator[](i)[j] - y[i][j];
        }
    }
    
    return *m;
};


void Matrix::dump() {
    for (int i=0;i<n;i++)
        this->x[i]->dump();
}

Matrix::~Matrix() {

    if(this->n == 0)
        return;
    
    for(int i=0; i < this->n; i++){
        delete this->x[i];
    }
    
    delete[] this->x;
    
}