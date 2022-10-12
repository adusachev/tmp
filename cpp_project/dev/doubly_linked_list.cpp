#include <iostream>
#include "doubly_linked_list.h"



void DoublyLinkedList::push_front(const int value) {

	Node* newNode = new Node;
	newNode->value = value;
	newNode->next = first;

	if (size_ == 0) {
		last = newNode;
	}
	else {
		first->prev = newNode;
	}
	first = newNode;
	size_++;
}

