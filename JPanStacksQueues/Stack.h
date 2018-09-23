#pragma once
#include <memory>
#include "StackNode.h"
using std::unique_ptr;

template <typename T>
class Stack {
public:
	Stack();
	void Push(T value);
	unique_ptr<StackNode<T>> head;
	T Pop();
	T Peek();
	bool IsEmpty();
	int Count();
};

template <typename T>
Stack<T>::Stack() { 
	head = nullptr;
}

template <typename T>
void Stack<T>::Push(T value) {
	if (Count() == 0) {
		head = make_unique<StackNode<T>>(value);
		return;
	}
	auto temp = head.get;

	while (temp->Next != nullptr) {
		temp = temp->Next.get;
	}
	temp->Next = make_unique<StackNode<T>>(value);
}

template <typename T>
T Stack<T>::Pop() {
	if (Count() == 0) {
		return NULL;
	}
	if (Count() == 1) {
		auto temp = head.get;
		head = nullptr;
		return temp->item;
	}
	auto move = head.get;
	while (move->Next->Next != nullptr) {
		move = move->Next.get;
	}
	auto temp = move->Next;
	move->Next = nullptr;
	return temp->item;
}

template <typename T>
T Stack<T>::Peek() {
	if (Count() == 0) {
		return NULL;
	}
	auto move = head.get;
	while (move->Next->Next != nullptr) {
		move = move->Next.get;
	}
	auto temp = move->Next;
	move->Next = nullptr;
	return temp->item;
}