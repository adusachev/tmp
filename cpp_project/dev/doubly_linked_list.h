#pragma once


#pragma once


struct Node {
	int value = 0;
	Node* next = nullptr;
	Node* prev = nullptr;
};


struct DoublyLinkedList {
	Node* first = nullptr;
	Node* last = nullptr;
	int size_ = 0;

	/**
	* ������� � ������ ������
	**/
	void push_front(const int value);
};
