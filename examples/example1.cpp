#include <iostream>
#include <arageli/arageli.hpp>

using namespace Arageli;
int main()
{
    std::cout << "My first big_int: " << factorial(big_int(50)) << std::endl;
    return 0;
}
