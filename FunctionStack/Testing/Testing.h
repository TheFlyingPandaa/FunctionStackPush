#pragma once
#include "../FunctionPush/FunctionQueue.h"
#include "../FunctionPush/FunctionStack.h"

class Testing
{
private:
	FunctionPush::Queue<Testing, void> q;
	FunctionPush::Stack<Testing, void> s;
	void testing();
public:
	Testing();
	~Testing();

	void Update();
};
