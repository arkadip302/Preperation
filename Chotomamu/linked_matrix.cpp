#include <bits/stdc++.h>
#define MAX 20
using namespace std;

struct Node
{
    int data;
    Node *right, *down;

    Node(int x)
    {
        data = x;
        right = NULL;
        down = NULL;
    }
};

void display(Node *head)
{
    Node *Rp;
    Node *Dp = head;
    while (Dp)
    {
        Rp = Dp;
        while (Rp)
        {
            cout << Rp->data << " ";
            Rp = Rp->right;
        }

        Dp = Dp->down;
    }
}

Node *constructLinkedMatrix(int mat[MAX][MAX], int n);

// driver program
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mat[MAX][MAX];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> mat[i][j];
        Node *head = constructLinkedMatrix(mat, n);
        if (!head)
            cout << "-1";
        else
            display(head);
        cout << "\n";
    }
    return 0;
}
Node *constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    Node *head = new Node(mat[0][0]);
    Node *ptr = head;
    int j = 0;
    Node *arr[n];
    arr[0] = head;
    while (j < n)
    {
        int i = 1;
        Node *ptr1 = ptr;
        while (i < n)
        {
            ptr1->down = new Node(mat[i][j]);
            ptr1 = ptr1->down;
            i++;
        }
        //ptr1->down=NULL;
        ptr->right = new Node(mat[0][++j]);
        ptr = ptr->right;
        arr[j] = ptr;
    }
    return head;
}