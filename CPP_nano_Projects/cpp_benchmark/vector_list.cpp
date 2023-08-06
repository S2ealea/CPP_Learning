#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <random>
#include <benchmark/benchmark.h>

//Test the std::vector inserting speed
static void BM_vectorInsert(benchmark::State& state) {
    for (auto _ : state) {
        std::vector<int> v;
        for (size_t i = 0; i < state.range(0); ++i) {
            v.insert(v.begin() + i, i);
        }
        benchmark::DoNotOptimize(v);
    }
}

//Test std::list inserting speed
static void BM_listInsert(benchmark::State& state) {
    for (auto _ : state) {
        std::list<int> l;
        for (size_t i = 0; i < state.range(0); ++i) {
            l.insert(l.begin(), i);
        }
        benchmark::DoNotOptimize(l);
    }
}

//Define benchmark  test
BENCHMARK(BM_vectorInsert)->Range(8, 8<<10);
BENCHMARK(BM_listInsert)->Range(8, 8<<10);

//Run the benchmark test
BENCHMARK_MAIN();
