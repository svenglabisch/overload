#include "vector.h"
#include "matrix.h"
#include <assert.h>
#include <iostream>

void test_construktior_matrix(){
    int n=3;
    Matrix m1(n);
    m1[1][2]=7;
    assert(n == m1.n);
    std::cout << "Matrix mit element[2][3]=7" << std::endl;
    m1.dump();
    std::cout << std::endl;
}

void test_copy_construktor_vektor(){
    std::cout << "copyvonstructor vector" << std::endl;
    Vector v(3);
    v[0]=1;
    v[1]=2;
    v[2]=3;
    assert(v[0] == 1);
    assert(v[1] == 2);
    assert(v[2] == 3);
    std::cout << "v=" ;
    v.dump();
    std::cout<< std::endl;
    
    Vector v2(v);
    assert(v2[0] == 1);
    assert(v2[1] == 2);
    assert(v2[2] == 3);
    std::cout << "v1(aus v copiert)=";
    v2.dump();
    std::cout<< std::endl;

}

void test_copy_construktior_matrix(){
    std::cout << "copyvonstructor matrix" << std::endl;
    Matrix m(3);
    m[0][0]= 0;
    m[1][0]= 10;
    m[2][0]= 20;
    m[0][1]= 1;
    m[1][1]= 11;
    m[2][1]= 21;
    m[0][2]= 2;
    m[1][2]= 12;
    m[2][2]= 22;
    
    assert(m[0][0] == 0);
    assert(m[1][0] == 10);
    assert(m[2][0] == 20);
    assert(m[0][1] == 1);
    assert(m[1][1] == 11);
    assert(m[2][1] == 21);
    assert(m[0][2] == 2);
    assert(m[1][2] == 12);
    assert(m[2][2] == 22);
    
    std::cout << "m=" ;
    m.dump();
    std::cout<< std::endl;
    
    Matrix m2(m);
    
    assert(m2[0][0] == 0);
    assert(m2[1][0] == 10);
    assert(m2[2][0] == 20);
    assert(m2[0][1] == 1);
    assert(m2[1][1] == 11);
    assert(m2[2][1] == 21);
    assert(m2[0][2] == 2);
    assert(m2[1][2] == 12);
    assert(m2[2][2] == 22);
    
    std::cout << "m2(aus m)=" ;
    m2.dump();
    std::cout<< std::endl;
}

void test_matrix_plus_matrix(){
    Matrix m(2);
    Matrix n(2);
    m[0][0]= 3;
    m[0][1]= 4;
    m[1][0]= 7;
    m[1][1]=-3;
    n[0][0]= 12;
    n[0][1]= 44;
    n[1][0]= 3;
    n[1][1]= -1;
    std::cout << "matrix addition" << std::endl;
    std::cout << "matrix m" << std::endl;
    m.dump();
    std::cout << "matrix n" << std::endl;
    n.dump();
    Matrix x = m + n;
    std::cout << "matrix m+n" << std::endl;
    x.dump();
    
    assert(x[0][0] == 15);
    assert(x[0][1] == 48);
    assert(x[1][0] == 10);
    assert(x[1][1] == -4);
}

void test_matrix_plus_matrix_2(){
    Matrix m(3);
    Matrix n(3);
    m[0][0]= 3;
    m[0][1]= 4;
    m[1][0]= 7;
    m[1][1]=-3;
    n[0][0]= 12;
    n[0][1]= 44;
    n[1][0]= 3;
    n[1][1]= -1;
    
    Matrix x = m + n;
    
    assert(x[0][0] == 15);
    assert(x[0][1] == 48);
    assert(x[1][0] == 10);
    assert(x[1][1] == -4);
}

void test_matrix_munis_matrix(){
    Matrix m(2);
    Matrix n(2);
    m[0][0]= 3;
    m[0][1]= 4;
    m[1][0]= 7;
    m[1][1]=-3;
    n[0][0]= 12;
    n[0][1]= 44;
    n[1][0]= 3;
    n[1][1]= -1;
    std::cout << "matrix subtration" << std::endl;
    std::cout << "matrix m" << std::endl;
    m.dump();
    std::cout << "matrix n" << std::endl;
    n.dump();
    
    Matrix x = m - n;
    std::cout << "matrix m-n" << std::endl;
    x.dump();
    
    assert(x[0][0] == -9);
    assert(x[0][1] == -40);
    assert(x[1][0] == 4);
    assert(x[1][1] == -2);
}

void test_vektor_minus(){
    Vector x(2);
    Vector y(2);
    x[0]=1;
    x[1]=4;
    y[0]=1;
    y[1]=12;
    std::cout << "vector subtration" << std::endl;
    std::cout << "vector x" << std::endl;
    x.dump();
    std::cout << "vector y" << std::endl;
    y.dump();
    
    Vector tmp = x - y;
    std::cout << "vector x-y" << std::endl;
    
    tmp.dump();
    assert(tmp[0] == 0);
    assert(tmp[1] == -8);
}

void test_vektor_plus(){
    Vector x(2);
    Vector y(2);
    x[0]=1;
    x[1]=4;
    y[0]=1;
    y[1]=12;
    std::cout << "vector addition" << std::endl;
    std::cout << "vector x" << std::endl;
    x.dump();
    std::cout << "vector y" << std::endl;
    y.dump();
    
    Vector tmp = x + y;
    std::cout << "vector x+y" << std::endl;
    
    tmp.dump();
    assert(tmp[0] == 2);
    assert(tmp[1] == 16);
}

void test_vektor_mul(){
    Vector x(2);
    Vector y(2);
    x[0]=1;
    x[1]=4;
    y[0]=8;
    y[1]=12;
    std::cout << "vector skalar" << std::endl;
    std::cout << "vector x" << std::endl;
    x.dump();
    std::cout << "vector y" << std::endl;
    y.dump();
    
    assert(x * y == 56);
    std::cout << "skalar= " << x*y << std::endl;
}

void test_vektor_mul_double(){
    Vector x(2);
    x[0]=1;
    x[1]=4;
    std::cout << "vector multiplikation double" << std::endl;
    std::cout << "vector x" << std::endl;
    x.dump();
    std::cout << "mit dem double 2" << std::endl;
    
    Vector tmp = x * 2.0;
    
    assert(tmp[0] == 2.0);
    assert(tmp[1] == 8.0);
    tmp.dump();
}

void test_matrix_mul_vektor() {
    Matrix m(2);
    m[0][0] = 2;
    m[0][1] = 3;
    m[1][0] = 4;
    m[1][1] = 5;
    std::cout << "matrix multiplikation vector" << std::endl << "matrix" << std::endl;
    m.dump();
    
    Vector v(2);
    v[0] = 2;
    v[1] = 4;
    std::cout << "vector" << std::endl;
    
    Vector tmp = m * v;
    std::cout << "matrix multiplikation vector" << std::endl;
    tmp.dump();
    
    assert(tmp[0] == 16);
    assert(tmp[1] == 28);
}

void test_norm_vector(){
    std::cout << "norm vom vektor" << std::endl;
    Vector v(4);
    v[0]=2;
    v[1]=2;
    v[2]=2;
    v[3]=2;
    v.dump();
    assert(Vector::norm(v)==4);
    std::cout << "norm" << std::endl << Vector::norm(v) << std::endl;
    

}

void test_norm_matrix(){
    std::cout << "norm vom matrix" << std::endl;
    Matrix m(2);
    m[0][0]=2;
    m[0][1]=2;
    m[1][0]=2;
    m[1][1]=2;
    m.dump();
    assert(Matrix::norm(m)==4);
    std::cout << "norm" << std::endl << Matrix::norm(m) << std::endl;

}

int main() {
    test_matrix_munis_matrix();
    test_matrix_plus_matrix_2();
    test_matrix_plus_matrix();
    test_vektor_minus();
    test_vektor_plus();
    test_vektor_mul();
    test_vektor_mul_double();
    test_matrix_mul_vektor();
    test_norm_vector();
    test_norm_matrix();
    test_copy_construktor_vektor();
    test_copy_construktior_matrix();
    test_construktior_matrix();
    return 0;
}
