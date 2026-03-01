#pragma once

#include <immintrin.h>

void gemm_v2(int M, int N, int K, const float * A, const float * B, float * C);