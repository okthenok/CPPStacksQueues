#include <iostream>
#include "Stack.h"
#include "StackNode.h"

int main() {
	Stack<int> stack;
	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Peek();
	stack.Pop();
	return 0;
}