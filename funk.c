#include "main.h"

vector* sum_double(vector* a, vector* b){
    vector_double* res = malloc(sizeof(vector_double));
    res->x = ((vector_double*)a)->x + ((vector_double*)b)->x ;
    res->y = ((vector_double*)a)->y + ((vector_double*)b)->y ;
    res->z = ((vector_double*)a)->z + ((vector_double*)b)->z ;
    return (vector*)(res);
}
vector* sum_complex(vector* a, vector* b){
    vector_complex* res = malloc(sizeof(vector_complex));
    res->x = ((vector_complex*)a)->x + ((vector_complex*)b)->x ;
    res->y = ((vector_complex*)a)->y + ((vector_complex*)b)->y ;
    res->z = ((vector_complex*)a)->z + ((vector_complex*)b)->z ;
    res->xi = ((vector_complex*)a)->xi + ((vector_complex*)b)->xi ;
    res->yi = ((vector_complex*)a)->yi + ((vector_complex*)b)->yi ;
    res->zi = ((vector_complex*)a)->zi + ((vector_complex*)b)->zi ;
    return (vector*)(res);
}
vector* sum(vector* a, vector* b, vector* (*fun)(vector* , vector* )){
    vector* result = malloc(sizeof(vector*));
    result = fun(a, b);
    return (vector*)result;
}

scalar* mult_for_comp(double a1, double b1, double a2, double b2){
    scalar* res = malloc(sizeof(scalar));
    res->a = a1*a2 - b1*b2;
    res->b = a1*b2 + a2*b1;
    return res;
}
void* mult_double(vector* a, vector* b){
    double* res = malloc(sizeof(double));
    *res = ((vector_double*)a)->x * ((vector_double*)b)->x + ((vector_double*)a)->y * ((vector_double*)b)->y + ((vector_double*)a)->z * ((vector_double*)b)->z ;
    return (void*)res;
}
void* mult_complex(vector* a, vector* b){
    scalar* res = malloc(sizeof(scalar));
    res->a = (mult_for_comp( ((vector_complex*)a)->x, ((vector_complex*)a)->xi, ((vector_complex*)b)->x , ((vector_complex*)b)->xi ) )->a ;
    res->a += (mult_for_comp( ((vector_complex*)a)->y, ((vector_complex*)a)->yi, ((vector_complex*)b)->y , ((vector_complex*)b)->yi ) )->a ;
    res->a += (mult_for_comp( ((vector_complex*)a)->z, ((vector_complex*)a)->zi, ((vector_complex*)b)->z , ((vector_complex*)b)->zi ) )->a ;
    res->b = (mult_for_comp( ((vector_complex*)a)->x, ((vector_complex*)a)->xi, ((vector_complex*)b)->x , ((vector_complex*)b)->xi ) )->b ;
    res->b += (mult_for_comp( ((vector_complex*)a)->y, ((vector_complex*)a)->yi, ((vector_complex*)b)->y , ((vector_complex*)b)->yi ) )->b ;
    res->b += (mult_for_comp( ((vector_complex*)a)->z, ((vector_complex*)a)->zi, ((vector_complex*)b)->z , ((vector_complex*)b)->zi ) )->b ;
    return (void*)res;
}
void* mult(vector* a, vector* b, void* (*fun)(vector* , vector* )){
    void* result = malloc(sizeof(vector*));
    result = fun(a, b);
    return (void*)result;
}

void copy(vector** massive_vect){

}
