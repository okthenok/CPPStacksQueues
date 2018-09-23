#pragma once
#include <memory>
using std::unique_ptr;

template <typename T>
class StackNode {
public:
	StackNode(T Item);
	unique_ptr<StackNode<T>> next;
	T item;
};

template <typename T>
StackNode<T>::StackNode(T Item) {
	next = Next;
}