#include <iostream>
#include "../Queue/FunctionQueue.h"
#include "Testing.h"
#include <thread>

void test()
{
	std::cout << "cout" << std::endl;
}

int main()
{
	Testing test;
	using namespace std::chrono_literals;
	while (true)
	{
		test.Update();
		std::this_thread::sleep_for(10ms);
	}


}