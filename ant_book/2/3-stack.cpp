// stackサンプル
#include <stack>
#include <cstdio>
#include <iostream>

int main(){
    std::stack<int> s;
    s.push(1);
    std::cout << s.top() << std::endl;
}