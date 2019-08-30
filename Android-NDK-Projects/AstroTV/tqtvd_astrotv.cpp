#include <iostream>

extern "C" int load_middleware ()
{
	std::cout << "<< AstroTV >> load_middleware()  IN" << std::endl;
	std::cout << "<< AstroTV >> load_middleware() OUT" << std::endl;
	return 0;
}

