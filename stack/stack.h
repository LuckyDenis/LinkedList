#pragma once

template <class T>
class unList{
public:
    class RemoveItemException{};
    class InsertImemExcaption{};
    unList();
    ~unList();
    bool isEmpty() const;
    void pushBegin(const T& data);
    void pushEnd(const T& data);
    void removeBegin();
    void removeAll();
    void removeEnd();
    bool hasItem(const T& data) const;
    T getTop() const;
    T getEnd() const;
    int size() const;
private:
    template <class ITEM>
    struct Node{
        ITEM data;
        Node<ITEM> * next;
        Node(const ITEM& data, Node<ITEM> * next = nullptr){
            this->data = data;
            this->next = next;
        };
    };
    Node<T> * first;
    int size_ = 0;
};


#include "stack.tpp"
