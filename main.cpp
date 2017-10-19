#include <vector>
#include <stdio.h>

using std::vector;

int main()
{
auto glambda = [](auto a, auto&& b) { return a < b; };
    bool b = glambda(3, 3.14); // ok

printf("Hello World! Git git git!\n");

    return 0;
}
