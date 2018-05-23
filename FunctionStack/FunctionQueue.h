#pragma once
#include <queue>

template <class t, typename r>
class FúnctionQueue
{
private:
	//Python and so on has support for this. C++ don't
	//So to execute a function we need to use this function

	r _Execute(void (t::*func)(), t* c)
	{
		return (*c.*func)();
	}

	//Queue of functions.
	//This will handle the functions
	std::queue<r(t::*)()> queue;
public:

	r Execute(t * type)
	{
		if (!Empty())
		{
			return _Execute(queue.front(), type);
		}
		return r();
	}
	bool Empty()
	{
		return queue.empty();
	}
	void Push(void (t::*func)())
	{
		queue.push(func);
	}
	void Pop()
	{
		queue.pop();
	}
	size_t Size()
	{
		return queue.size();
	}


};