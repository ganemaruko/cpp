// 便利なコードを書いておく
#include <stack>
#include <cstdio>
#include <iostream>

int cout_iter()
{
    std::stack<int> stack;
    for (std::stack<int> dump = stack; !dump.empty(); dump.pop())
    {
        std::cout << dump.top() << '\n';
    };
};