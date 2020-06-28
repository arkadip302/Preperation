#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    struct Node *next = NULL;
};
Node *start = NULL;
void nodecreate()
{
    int datas;
    cin >> datas;
    Node *n = new Node();
    n->data = datas;
    if (start == NULL)
    {
        start = n;
    }
    else
    {
        Node *ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = n;
    }
}
void display()
{
    cout << "Elements Presented :-\n";
    Node *ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
void removenode()
{
    cout << "Position !" << endl;
    int pos;
    cin >> pos;
    try
    {
        Node *ptr = start;
        if (pos == 1)
        {
            Node *temp = start;
            start = start->next;
            free(ptr);
        }
        else
        {
            for (int i = 0; i < pos - 2; i++)
            {
                ptr = ptr->next;
            }
            ptr->next = ptr->next->next;
        }
    }
    catch (exception e)
    {
        cout << "Entered a wrong number " << endl;
    }
}

int main()
{
    while (1)
    {
        int opt;
        cout << "\n 1. Enter an element \n 2.Display \n 3.Remove \n 4.Exit";
        cout << endl;
        cin >> opt;

        switch (opt)
        {
        case 1:
        {
            nodecreate();
            break;
        }

        case 2:
        {
            display();
            break;
        }
        case 3:
        {
            removenode();
            break;
        }

        case 4:
        {
            exit(0);
        }
        }
    }
}