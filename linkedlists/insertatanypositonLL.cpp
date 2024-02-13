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

    int arr[] = {2, 4, 6, 8, 10};

    head = CreateLinkedList(arr, 0, 5);

    //insert NOde at particular position

    int x =3; //position
    int value =30;

    Node*temp = head;
    x--;

    while(x--){
        temp = temp->next;
    }

    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;


    Node *temp3;
    temp3 = head;
    while (temp3 != NULL)
    {
        cout << temp3->data << " ";
        temp3 = temp3->next;
    }

    return 0;
}