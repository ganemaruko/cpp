// section2で便利だと思った関数を書いておく
#include <utility>
#include <cstddef>
#include <algorithm>
// P.44 pairはkeyの辞書順に整理される
void pairSort(int keys[], int values[])
{
    const int N = 100;
    // 入力

    std::pair<int, int> pair[N];
    for (size_t i = 0; i < N; i++)
    {
        pair[i].first = keys[i];
        pair[i].second = values[i];
    }
    std::sort(pair, pair + N);
};