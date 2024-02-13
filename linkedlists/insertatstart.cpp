#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{

    Node *Head;
    Head = new Node(4);

    //  cout<<Head->data<<endl;
    //  cout<<Head->next<<endl;

    int arr[] = {2, 4, 6, 8, 10};

    // insert the node at the beginning

    // Linked list doesnt exist
    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }
        // linked list exist krti hai
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    // print the value

    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }

    return 0;
}