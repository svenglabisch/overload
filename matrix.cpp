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
/*
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
 * */


Vector& Matrix::operator*(Vector& m) {
    assert(this->n == m.n);
    Vector* c = new Vector(this->n);
    for(int zeile=0; zeile<this->n; zeile++){
        for(int spalte=0; spalte<this->n; spalte++){
            double vector_zeile = m[spalte];
            double matrix_foo = this->x[zeile]->operator[](spalte);
            c->operator[](zeile) = c->operator[](zeile) + (vector_zeile * matrix_foo);
        }
    }
    return *c;
}

double Matrix::norm(const Matrix& y){
    double n=0;
    for(int i=0; i<y.n; i++){
        for(int j=0; j<y.n; j++){
            double fuckyou=y.x[i]->operator[](j);
            n = n + fuckyou * fuckyou;
        }
    }
    n = sqrt(n);
    return n;
}

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