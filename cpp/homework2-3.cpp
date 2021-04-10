#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    void show();
    void ins(long long int iid,string ibookname,string iauthor,string ipublisher);
    void del();
    Node * nextNode();
private:
    long long int id;
    string bookname;
    string author;
    string publisher;
    Node *next;
};

void Node::show(){
    cout << "ID:" << id << endl; 
    cout << "BookName:" << bookname << endl; 
    cout << "Author:" << author << endl; 
    cout << "Publisher:" << publisher << endl; 
};

void Node::ins(long long int iid,string ibookname,string iauthor,string ipublisher){
    Node insNode;
    id = iid;
    bookname = ibookname;
    author = iauthor;
    publisher = ipublisher;
    next = &insNode;
};

Node * Node::nextNode(){
    return next;
}

void del();


int main(){
    Node a;
    a.ins(0001,"Book1","Author1","Publisher1");
    a.nextNode()->ins(0002,"Book2","Author2","Publisher2");
    a.show();
    return 0;
}