#pragma once
#include <memory>
#include "QueueNode.h"
using namespace std;

template <typename T>
class Queue {
public:
	shared_ptr<QueueNode<T>> head;
	Queue(T);
	void Enqueue(T);
	T Dequeue();
	bool IsEmpty();
	int Count;
};

template <typename T>
Queue<T>::Queue(T item) {
	head = nullptr;
	Item = item;
}

template <typename T>
void Queue<T>::Enqueue(T item) {
	if (head == nullptr) {
		head = make_shared<QueueNode<T>>(item);
		head->Next = head;
		head->Previous = head;
	}
	shared_ptr<QueueNode<T>> insert = make_shared(item);
	insert->Next = head;
	head->Previous->Next = insert;
	insert->Previous = head->Previous;
	head->Previous = insert;
	head = insert;
}

template <typename T>
T Queue<T>::Dequeue() {
	if (head == nullptr)
	{
		return NULL;
	}
	if (head->Next == head)
	{
		auto temp = head->Item;
		head == nullptr;
		return temp;
	}
	head->Previous->Previous->Next = head;
	head->Previous = head->Previous->Previous;
	return true;
}

template <typename T>
bool Queue<T>::IsEmpty() {

}