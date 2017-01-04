#pragma once
#include <string>

template <typename DataType>
class List {
private:
	struct Node {
		Node* next;
		DataType data;
	} *head;
public:
	List();
	~List();
//	void insertNode(Node* newNode, int position);
	void addNode(DataType data);
//	void RemoveNode(int position);
	DataType getELement(int position);
//	void printList();
};

template <typename DataType>
List<Datatype>::List() {
	head = nullptr;
}

template <typename DataType>
List<Datatype>::~List() {
	Node* tmp;
	while (head) {
		tmp = head;
		head = head->next;
		detete tmp;
	}
}


template<typename DataType>
DataType List<DataType>::getELement(int position) {
	for (Node * cur = head, int curPosition = 0; cur != nullptr; cur = cur->next, curPosition++) {
		if (curPosition == position) {
			return cur->data;
		}
	}
	return{};
}

template<typename DataType>
void List<DataType>::addNode(DataType data) {
	Node *tmp = new Node();
	tmp->data = data;
	tmp->next = head;
	head = tmp;
}
