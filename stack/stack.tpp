# include "stack.h"


template <class T>
unList<T>::unList() {
    first = nullptr;
    return;
}


template <class T>
unList<T>::~unList() {
    if(!isEmpty()){
        removeAll();
    }
    return;
}

template <class T>
bool unList<T>::isEmpty() const {
    return first == nullptr;
}

template <class T>
void unList<T>::pushBegin(const T& data) {
    Node<T> * item = new Node<T>(data, first);
    first = item;
    size_++;
    return;
}

template <class T>
void unList<T>::pushEnd(const T& data) {
    Node<T> * item = new Node<T>(data);
    if(first == nullptr){
        first = item;
    }else{
        Node<T> * current = first;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = item;
    }
    size_++;
    return;
}

template <class T>
void unList<T>::removeBegin() {
    if(first == nullptr){
        RemoveItemException();
    }else{
        Node<T> * delNode = first;
        first = delNode->next;
        delete delNode;
        size_--;
    }
    return;
}

template <class T>
void unList<T>::removeAll() {
    if(first == nullptr){
        RemoveItemException();
    }else{
        while(first == nullptr){
            removeBegin();
            size_--;
        }
    }
    return;
}

template <class T>
void unList<T>::removeEnd() {
    if(first == nullptr){
        RemoveItemException();
    }else{
        Node<T> * current = first;
        while(!current->next->next != nullptr){
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
        size_--;
    }
    return;
}

template <class T>
bool unList<T>::hasItem(const T &data) const {
    Node<T> * current = first;
    while(current != nullptr){
        if(current->data == data){
            return true;
        }
    }
    return false;
}

template <class T>
T unList<T>::getTop() const {
    return first->data;
}

template <class T>
T unList<T>::getEnd() const {
    Node<T> * current = first;
    while(current->next != nullptr){
        current = current->next;
    }
    return current->data;
}

template <class T>
int unList<T>::size() const {
    return this->size_;
}
