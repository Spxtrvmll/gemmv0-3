#include <time.h>
#include <stdio.h>
#include <stdlib.h>


#include "gemm_v0.h"
#include "gemm_v1.h"
#include "gemm_v2.h"
#include "gemm_v3.h"


void test()
{
    const float A[] = {
        #include "Amtrx.txt"
    };

    const float B[] = {
        #include "Bmtrx.txt"
    };

	float *C = (float*)malloc(576*576 * sizeof(float));


    clock_t start0 = clock();
    gemm_v0(576, 576, 576, A, B, C); 
    clock_t end0 = clock();
    double cpu_time_used0 = ((double) (end0 - start0)) / CLOCKS_PER_SEC;
    printf("Время работы gemm_v0: %f секунд\n", cpu_time_used0);

    clock_t start1 = clock();
    gemm_v1(576, 576, 576, A, B, C); 
    clock_t end1 = clock();
    double cpu_time_used1 = ((double) (end1 - start1)) / CLOCKS_PER_SEC;
    printf("Время работы gemm_v1: %f секунд\n", cpu_time_used1);

    clock_t start2 = clock();
    gemm_v2(576, 576, 576, A, B, C); 
    clock_t end2 = clock();
    double cpu_time_used2 = ((double) (end2 - start2)) / CLOCKS_PER_SEC;
    printf("Время работы gemm_v2: %f секунд\n", cpu_time_used2);

    clock_t start3 = clock();
    gemm_v3(576, 576, 576, A, B, C); 
    clock_t end3 = clock();
    double cpu_time_used3 = ((double) (end3 - start3)) / CLOCKS_PER_SEC;
    printf("Время работы gemm_v3: %f секунд\n", cpu_time_used3);
}
