#include "vector.h"
#include "matrix.h"
#include <assert.h>

void test_Vektor_operator(){
    Vector v(2);
    assert(v[0] = 12);
    assert(v[0] == 12);
}

void test_Matrix_operator(){
    Matrix m(2);
    assert(m[0][0] = 12);
    assert(m[0][0] == 12);
}

void test_Vektor_plus_operstor(){
    Vector v(2);
    Vector c(2);
    v[0]=1;
    v[1]=4;
    c[0]=1;
    c[1]=12;
    (v+c).dump();
}

void test_Vektor_minus_operstor(){
    Vector v(2);
    Vector c(2);
    Vector d(2);
    v[0]=1;
    v[1]=4;
    c[0]=1;
    c[1]=12;
    d=(v-c);
    d.dump();
}

void test_Vektor_skalar_operstor(){
    Vector v(2);
    Vector c(2);
    v[0]=1;
    v[1]=4;
    c[0]=1;
    c[1]=12;
    c*v;
}

void test_Vektor_double_skalar_operstor(){
    Vector v(3);
    v[0]=1;
    v[1]=4;
    v[2]=7;
    Vector c(3);
    double d=5.0;
    c=v*d;
    c.dump();
}

void test_matrix_plus_matrix(){
    Matrix m(2);
    Matrix n(2);
    m[0][0]=3;
    m[0][1]=4;
    m[1][0]=7;
    m[1][1]=-3;
    n[0][0]=12;
    n[0][1]=44;
    n[1][0]=3;
    n[1][1]=-1;
    (m+n).dump();
}

void test_copy_construktor_vektor(){
    Vector v(3);
    v[0]=1;
    v[1]=2;
    v[2]=3;
    Vector v1(v);
    Vector v2(v1);
    Vector v3(v2);
    Vector v4(v3);
    Vector v5(v4);
    Vector v6(v5);
}

void test_copy_construktior_matrix(){
    Matrix m(3);
    m[0][0]=1;
    assert(m[0][0] == 1);
    m[1][0]=2;
    m[0][1]=1;
    m[1][1]=2;
    m[2][2]=4;
    Matrix m1(m);
    Matrix m2(m1);
    Matrix m3(m2);
    Matrix m4(m3);
    Matrix m5(m4);
    assert(m5[2][2] == 4);
    assert(m5[1][1] == 2);
    assert(m5[0][0] == 1);
    assert(m5[1][0] == 2);
}

void test_construktior_matrix(){
    int n=3;
    Matrix m1(n);
    //assert(n==m1.n);
}

int main()
{
    //test_Matrix_operator();
    //test_Vektor_operator();
    //test_Vektor_plus_operstor();
    //test_Vektor_minus_operstor();
    //test_Vektor_skalar_operstor();
    //test_Vektor_double_skalar_operstor();
    //test_matrix_plus_matrix();
    //test_copy_construktor_vektor();
    //test_copy_construktior_matrix();
    test_construktior_matrix();
    return 0;
}

