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
    
Matrix::~Matrix() {

    for(int i=0; i < this->n; i++){
        delete this->x[i];
    }
    
    delete[] this->x;
    
}