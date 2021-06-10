#include <bits/stdc++.h>
using namespace std;

#ifndef NODE_H
#define NODE_H

template<class T>
class Node {
    private:
    Node<T> * next;
    public:
    T data;

    Node(const T &data, Node<T> * next = 0);
    void insertAfter (Node<T> * p);
    Node<T> * deleteAfter();
    Node<T> * nextNode();
    const Node<T> * nextNode() const;
};

template<class T>
Node<T>::Node(const T& data, Node<T> * next /* =0 */):data(data),next(next){}

template<class T>
Node<T>*Node<T>::nextNode(){
    return next;
}

template<class T>
const Node<T>