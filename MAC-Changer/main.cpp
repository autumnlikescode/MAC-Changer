#include <iostream>
#include <limits>
#include "MyMACAddr.h"

// Mac Address Randomiser modified by autumn
// Original - https://github.com/saeedirha/MAC-Changer/blob/master/MAC-Changer/MyMACAddr.cpp

int main(int argc, char **argv)
{
	MyMACAddr* ptr = new MyMACAddr();

	ptr->AssingRndMAC();

	return EXIT_SUCCESS;
}
