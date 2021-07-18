#include <iostream>

extern int g_Z; // GlobalVariableExample.cpp¿« g_Z
int main()
{
	extern int g_Y; // GlobalVariableExample.cpp¿« g_Y

	g_Z = 5;
	
	std::cout << g_Z << std::endl;
	std::cout << g_Y << std::endl;
}