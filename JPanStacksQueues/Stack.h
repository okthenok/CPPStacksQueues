#pragma once
#include <memory>
#include "StackNode.h"
using namespace std;

template <typename T>
class Stack {
public:
	shared_ptr<StackNode<T>> head;
	Stack();
	void Push(T);
	T Pop();
	T Peek();
	bool IsEmpty();
	int Count;
};

template <typename T>
Stack<T>::Stack() {
	head = nullptr;
	Count = 0;
}

template <typename T>
void Stack<T>::Push(T value) {
	head = make_unique<StackNode<T>>(value, head);
	Count++;
}

template <typename T>
T Stack<T>::Pop() {
	if (Count == 0) {
		return NULL;
	}
	T temp = head->Item;
	head = head->Next;
	Count--;
	return temp;
}

template <typename T>
T Stack<T>::Peek() {
	return head->Item;
}

template <typename T>
bool Stack<T>::IsEmpty() {
	if (Count == 0) {
		return true;
	}
	return false;
}