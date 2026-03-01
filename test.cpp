#include <time.h>
#include <stdio.h>
#include <stdlib.h>


#include "gemm_v0.h"
#include "gemm_v1.h"
#include "gemm_v2.h"
#include "gemm_v3.h"
#include "test.h"

using namespace std;

void test()
{
    const float A[] = {
        #include "Amtrx.txt"
    };

    const float B[] = {
        #include "Bmtrx.txt"
    };

	float *C = (float*)malloc(576*576 * sizeof(float));


    clock_t start = clock();
    gemm_v0(576, 576, 576, A, B, C); 
    clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Время работы: %f секунд\n", cpu_time_used);
}
