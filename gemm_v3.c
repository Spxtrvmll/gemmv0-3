#include "micro_6x16.h"
#include "init_c.h"

void gemm_v3(int M, int N, int K, const float * A, const float * B, float * C)
{
    for (int i = 0; i < M; i += 6)
    {
        for (int j = 0; j < N; j += 16)
        {
            init_c(6, 16, C + i*N + j, N);
            micro_6x16(K, A + i*K, K, 1, B + j, N, C + i*N + j, N);
        }
    }
}