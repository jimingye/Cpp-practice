#include <iostream>
#include "loop.h"

using namespace::std;

int fact(int val)
{
	int ret = 1;
	while (val > 1)
	{
		ret *= val;
		--val;
	}
	return ret;
}

