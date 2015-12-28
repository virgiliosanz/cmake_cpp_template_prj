#include <iostream>
#include <thelibrary.h>
#include <config.h>


int main(int argc, char *argv[])
{
    std::cout << argv[0] << "-" << theprojectname::version() << std::endl;
    theprojectname::say_hello();

    return 1;
}
