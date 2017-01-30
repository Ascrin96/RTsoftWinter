#ifndef MYList_H
#define MYList_H

template <class DataType>
class MyList {
private:
    struct Node {
        Node* next;
        DataType* data;
    } *head;
    int sizeList;

public:
    MyList();
    ~MyList();
//	void insertNode(Node* newNode, int position);
    void addNode(DataType* data);
//	void RemoveNode(int position);
    DataType* getELement(int position);
    int size();
};

template <typename DataType>
MyList<DataType>::MyList() : head(nullptr) {}

template <class DataType>
MyList<DataType>::~MyList() {
    Node* tmp;
    while (head) {
        tmp = head;
        head = head->next;
        delete tmp;
    }
}


template<class DataType>
DataType* MyList<DataType>::getELement(int position) {
    int i = 0;
    Node* tmp;

    tmp = head;
    while(i < position && head) {
        tmp = tmp->next;
        i++;
    }
    return tmp->data;
}


template<class DataType>
int MyList<DataType>::size() {
    return sizeList;
}

template<class DataType>
void MyList<DataType>::addNode(DataType* data) {
    Node *tmp = new Node();
    tmp->data = data;
    tmp->next = head;
    head = tmp;
}


#endif // MYList_H
