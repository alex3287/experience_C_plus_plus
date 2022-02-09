#include <iostream>

std::pair<int, int> divmod(int f, int s){
    std::pair<int, int> result;
    result.first = f / s;
    result.second = f % s;
    return result;
}

int main() {
    // распаковка на С++
    int A[3] = {2,4,1};
    auto [a, b] = divmod(45, 7);
    std::cout << "Hello, World! " << a << " " << b << std::endl;
    return 0;
}
