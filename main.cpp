#include "vector.h"
#include "matrix.h"
#include <assert.h>

void test_construktior_matrix(){
    int n=3;
    Matrix m1(n);
    Matrix m2(n);
    assert(n == m1.n);
    assert(n == m2.n);
}

void test_copy_construktor_vektor(){
    Vector v(3);
    v[0]=1;
    v[1]=2;
    v[2]=3;
    assert(v[0] == 1);
    assert(v[1] == 2);
    assert(v[2] == 3);
    
    Vector v2(v);
    assert(v2[0] == 1);
    assert(v2[1] == 2);
    assert(v2[2] == 3);
    
}

void test_copy_construktior_matrix(){
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
    
    Matrix x = m + n;
    
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

int main()
{
    //test_Matrix_operator();
    //test_Vektor_operator();
    //test_Vektor_plus_operstor();
    //test_Vektor_minus_operstor();
    //test_Vektor_skalar_operstor();
    //test_Vektor_double_skalar_operstor();
    test_matrix_plus_matrix_2();
    test_matrix_plus_matrix();
    test_copy_construktor_vektor();
    test_copy_construktior_matrix();
    test_construktior_matrix();
    return 0;
}

