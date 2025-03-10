// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    if (n == 0) return 1;
    else if (n % 2 == 0) return power(x * x, n / 2);
    else return x * power(x * x, (n - 1) / 2);
}
