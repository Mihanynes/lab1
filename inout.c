#include "main.h"

vector** enter_massive( vector* (*fun)(int n), int n){
    vector** M = malloc(n*sizeof(vector));
    for(int k = 1; k < n + 1; k++){
        M[k] = fun(k);
    }
    return M;
}

vector* enter_double( int i ){
vector_double* v1 = malloc( sizeof( vector(double) ) );
printf("¬ведите координаты xyz %d-го вектора(через пробел):  ", i);
scanf("%lf",&v1->x);
scanf("%lf",&v1->y);
scanf("%lf",&v1->z);
return (vector*)v1;
}

vector* enter_complex( int i ){
vector_complex* v1 = malloc( sizeof( vector(double) ) );
printf("¬ведите координату x %d-го вектора вида (a + bi) - через пробел:  ", i);
scanf("%lf",&v1->x);
scanf("%lf",&v1->xi);
printf("¬ведите координату y %d-го вектора вида (a + bi) - через пробел:  ", i);
scanf("%lf",&v1->y);
scanf("%lf",&v1->yi);
printf("¬ведите координату z %d-го вектора вида (a + bi) - через пробел:  ", i);
scanf("%lf",&v1->z);
scanf("%lf",&v1->zi);
return (vector*)v1;
}

void out_double(vector_double* v1,vector_double* v2){
    vector_double* res = malloc(sizeof(vector_double));
    res = (vector_double*)sum(v1,v2,sum_double);
    printf("–езультат векторного суммировани€:\n");
    printf("x: %lf\n",res->x);
    printf("y: %lf\n",res->y);
    printf("z: %lf\n",res->z);
    double result = *((double*)mult(v1,v2,mult_double));
    printf("–езультат скал€рного произведени€:\n");
    printf("%lf   ", result);
}
void out_complex(vector_double* v1, vector_double* v2){
    vector_complex* res = malloc(sizeof(vector_complex));
    res = (vector_complex*)sum(v1,v2,sum_complex);
    printf("–езультат векторного суммировани€:\n");
    printf("x: %lf+",res->x);
    printf("%lfi\n",res->xi);
    printf("y: %lf+",res->y);
    printf("%lfi\n",res->yi);
    printf("z: %lf+",res->z);
    printf("%lfi\n",res->zi);
    scalar* res_mult = malloc(sizeof(scalar));
    res_mult = (scalar*)mult(v1,v2,mult_complex);
    printf("–езультат скал€рного произведени€:\n");
    printf("%lf + ", res_mult->a );
    printf("%lfi\n", res_mult->b );
}
