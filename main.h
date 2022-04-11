#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

typedef struct vector{
    void* x;
    void* xi;
    void* y;
    void* yi;
    void* z;
    void* zi;
}vector;
typedef struct vector_double{
    double x;
    double y;
    double z;
}vector_double;
typedef struct vector_complex{
    double x;
    double y;
    double z;
    double xi;
    double yi;
    double zi;
}vector_complex;
typedef struct scalar{
    double a;
    double b;
}scalar;

vector** enter_massive( vector* (*fun)(int n), int n);
vector* enter_double( int i );
vector* enter_complex( int i );
void out_double(vector_double* v1,vector_double* v2);
void out_complex(vector_double* v1, vector_double* v2);
vector* sum_double(vector* a, vector* b);
vector* sum_complex(vector* a, vector* b);
vector* sum(vector* a, vector* b, vector* (*fun)(vector* , vector* ));
scalar* mult_for_comp(double a1, double b1, double a2, double b2);
void* mult_double(vector* a, vector* b);
void* mult_complex(vector* a, vector* b);
void* mult(vector* a, vector* b, void* (*fun)(vector* , vector* ));


#endif // MAIN_H_INCLUDED
