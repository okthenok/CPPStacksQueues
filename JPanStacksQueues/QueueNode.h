#pragma once
#include <memory>
using std::shared_ptr;

template <typename T>
class QueueNode {
public:
	shared_ptr<QueueNode<T>> Previous;
	shared_ptr<QueueNode<T>> Next;
	T Item;
	QueueNode(T);
	QueueNode(T, shared_ptr<QueueNode<T>>, shared_ptr<QueueNode<T>>)
};

template <typename T>
QueueNode<T>::QueueNode(T item) {
	Item = item;
}

template <typename T>
QueueNode<T>::QueueNode(T item, shared_ptr<QueueNodeT<T> previous, shared_ptr<QueueNode<T> next) {
	Item = item;
	Previous = previous;
	Next = next;
}