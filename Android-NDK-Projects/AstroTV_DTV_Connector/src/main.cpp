#include <stdio.h>
#include "hello.h"
#include "goodbye.h"
#include "tqtvd_astrotv_over_android.h"

int main (int c, char ** argv)
{
	int i = hello();
	int j = goodbye();

	load_middleware_android();

	initialize_middleware_android();

	return 0;
}


