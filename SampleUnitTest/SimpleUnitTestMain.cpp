// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "test.h"
#include "Sample.h"
#include <iostream>
#include "GUnitTest.h"

int divice(int x, int y){
	return x/y;
}

int main(int argc, char* argv[])
{
	// Sample sp;
	// std::cout << "Back to Testing " << divice(15,3) << "; " << sp.multiple(2, 4) << std::endl;
	runTest(argc, argv);
	return 0;
}

