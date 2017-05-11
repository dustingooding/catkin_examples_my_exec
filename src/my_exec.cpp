#include "my_library/my_library.hpp"

int main(int argc, char** argv)
{
    MyLibrary ml;

    ml.hello();
    std::cout << "4*4 = " << ml.square(4) << std::endl;

    return 0;
};