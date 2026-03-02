#pragma once

void micro_6x16(int K, const float * A, int lda, int step, 
    const float * B, int ldb, float * C, int ldc);

void init_c(int M, int N, float * C, int ldc);

void gemm_v3(int M, int N, int K, const float * A, const float * B, float * C);