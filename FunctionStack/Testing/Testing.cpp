#include "Testing.h"
#include <ostream>
#include <iostream>

Testing::Testing()
{
	q.Push(&Testing::testing);

	s.Push(&Testing::testing);
}

Testing::~Testing()
{
	
}

void Testing::Update()
{
	q.Execute(this);
}

void Testing::testing()
{
	std::cout << "update" << std::endl;
}