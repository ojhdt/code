#include <iostream>
#include <malloc.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} node;

int Find(node *H, int e)
{
    int flag = 0;
    while (H->next)
    {
        H = H->next;
        if (H->data == e)
            flag = 1;
    }
    return flag;
}

void createnode(node *H, int &n)
{
    struct node *r = H;
    struct node *s;
    int e;
    int i;
    int m = 0;
    for (i = 0; i < n; i++)
    {
        cin >> e;
        if (Find(H, e) == 0)
        {
            node *s = new node;
            s->next = NULL;
            s->data = e;
            r->next = s;
            r = s;
        }
        else
            m++;
    }
    n = n - m;
}

void printnode(node *H)
{
    while (H)
    {
        H = H->next;
        cout << H->data << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    int n;
    node *H;
    cin >> t;
    while (t--)
    {
        H = new node;
        H->next = NULL;
        cin >> n;
        createnode(H, n);
        cout << n << " ";
        printnode(H);
        delete[] H;
        H = NULL;
    }
    return 0;
}