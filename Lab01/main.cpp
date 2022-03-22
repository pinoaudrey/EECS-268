#include <iostream>
#include "Executive.h"

int main(int argc, char** argv)
{
	std::string fileName = argv[1];
	Executive exec(fileName);
	exec.run();
	return 0;
}
