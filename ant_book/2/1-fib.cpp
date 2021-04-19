// 全探索
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
};

// dp
const int MAX_N = 100;
int memo[MAX_N + 1];

int fibMemo(int n)
{
    if (n <= 1)
        return n;
    if (memo[n] != 0)
        return memo[n];
    return memo[n] = fibMemo(n - 1) + fibMemo(n - 2);
};


