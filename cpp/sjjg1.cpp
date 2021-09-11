#include <iostream>
using namespace std;

template <class T>
class Node
{
public:
	Node(T x);
	~Node();
	T GetData();
	void SetData(T x);

private:
	T data;
	Node *next;
};

template <class T>
Node<T>::Node(T x)
{
	data = x;
	next = 0;
}

template <class T>
Node<T>::~Node()
{
}

template <class T>
T Node<T>::GetData()
{
	return data;
}

template <class T>
void Node<T>::SetData(T x)
{
	data = x;
}

int main()
{
	Node<double> s(3.14);
	Node<int> t(5);
	cout << s.GetData() << endl;
	t.SetData(10);
	cout << t.GetData() << endl;
}