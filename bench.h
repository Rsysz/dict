#ifndef BENCH_H
#define BENCH_H
#include "bloom.h"
#include "tst.h"

double tvgetf();


int bench_test(const tst_node *root, char *out_file, const int max);
int bloom_bench_test(const tst_node *root,
                     char *out_file,
                     const int max,
                     bloom_t *bloom);

#endif
