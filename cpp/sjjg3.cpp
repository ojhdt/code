#include <bits/stdc++.h>
using namespace std;
int main()
{
    void DeleteBetween(Node * head, int mink, int maxk)
    {
        Node *now = head;
        while (now->next != NULL)
        {
            if (now->next->data > mink || now->next->data < maxk)
            {
                Node *temp = now->next;
                now->next = temp->next;
                delete temp;
            }
        }
        now = now->next;
    }
}