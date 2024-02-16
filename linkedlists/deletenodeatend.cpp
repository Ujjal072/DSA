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

Node *CreateLinkedList(int arr[], int index, int size)
{

    // base case
    if (index == size)
        return NULL;

    Node *temp;
    temp = new Node(arr[index]);

    temp->next = CreateLinkedList(arr, index + 1, size);

    return temp;
}

int main()
{

    Node *head;
    head = NULL;
    int arr[] = {2, 4, 6, 1, 7};

    head = CreateLinkedList(arr, 0, 5);

    // delete a node at end

    if (head != NULL)
    {

        // Only one node is present
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        // more than one node present
        else
        {

            Node *curr = head;
            Node *prev = NULL;
            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }

            prev->next = curr->next;
            delete curr;
        }
    }
    // printing a LL
    
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}