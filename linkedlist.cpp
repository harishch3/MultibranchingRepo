#include<iostream>

using namespace std;

struct singleNode
{
    int value;
    singleNode* next;
    singleNode(int value)
    {
        this->value= value;
        next = NULL;
    } 
};

struct SingleLinkedList
{
    singleNode *head;

    void displayHeadData()
    {
        cout<<"\n head data"<<head->value<<endl;
    }

    SingleLinkedList()
    {
        head = NULL;
    }

    void push(int data)
    {
        singleNode *temp= new singleNode(data);
        temp->next=head;
        head = temp;
    }

    void display()
    {
        singleNode *temp= head;
        while (temp !=NULL)
        {
            cout<<"data:"<<temp->value<<endl;
            temp = temp->next;
        } 
    }

    void reverse()
    {
        singleNode* current = head;
        singleNode *previous=NULL,*next=NULL;

        while ( current !=NULL )
        {
            next = current->next;
            current->next = previous;

            previous = current;
            current=next; 
        }
        head = previous;
    }
};

int main()
{
    SingleLinkedList mylist;
    mylist.push(1);
    mylist.push(2);
    mylist.push(3);
    mylist.push(4);
    mylist.push(5);

    mylist.displayHeadData();
    cout<<"-----------------Display---------------"<<endl;
    mylist.display();
    mylist.displayHeadData();
    cout<<"-----------------Display---------------"<<endl;

    cout<<"-----------------Reverse---------------"<<endl;
    mylist.reverse();
    mylist.display();
    cout<<"-----------------Reverse---------------"<<endl;

    mylist.displayHeadData();
    return 0;
}
