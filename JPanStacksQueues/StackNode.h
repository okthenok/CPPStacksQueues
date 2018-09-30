#pragma once
#include <memory>
using std::shared_ptr;

template <typename T>
class StackNode {
public:
	StackNode(T);
	StackNode(T, shared_ptr<StackNode<T>>);
	shared_ptr<StackNode<T>> Next;
	T Item;
};

template <typename T>
StackNode<T>::StackNode(T item) {
	Item = item;
}

template <typename T>
StackNode<T>::StackNode(T item, shared_ptr<StackNode<T>> next) {
	Item = item;
	Next = next;
}
