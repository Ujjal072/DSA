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

//delete a node at start

  if(head!=NULL){
    Node*temp = head;
    head= head->next;
    delete temp;
}

// delete node at end

   

Node *temp2 = head;
while(temp2 != NULL){
    cout<<temp2->data<<" ";
    temp2=temp2->next;
}

    return 0;
}