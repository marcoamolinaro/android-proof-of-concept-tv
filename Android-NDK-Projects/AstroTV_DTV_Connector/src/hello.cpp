#include <iostream>
#include "hello.h"

int hello()
{
    std::cout << "Hello World! ('AstroTV_DTV_Connector')" << std::endl;
    return 0;
}

const char * stringFromJNI (void)
{
    const char * str = "Voce chegou ate a lib nativa.";
    return str;
}

