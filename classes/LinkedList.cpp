#include "headers/LinkedList.h"
#include<iostream>
using namespace std;

Node::Node()
{
    Next=nullptr;
}

Node::Node(int newitem)
{
    this->Value=newitem;
    Next=nullptr;
}

int Node::GetValue() 
{
    return Value;
}

Node* Node::GetNext() 
{
    return Next;
}

void Node::SetValue(int data)
{ 
    this->Value=data;
};

void Node::SetNext(Node* ptr)
{
    this->Next=ptr;
};

LinkedList::LinkedList()
{
    head=nullptr;
}

bool  LinkedList::IsEmpty()
{
    if(head==nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void LinkedList::PrintList(Node* TempPtr)
{
    TempPtr=head;
    while(TempPtr!=nullptr)
    {
        cout<<TempPtr->GetValue();
        TempPtr = TempPtr->GetNext();
    }
}

void LinkedList::InsertValueFirst(int value)
{
    Node* newnode=new Node(value);
    if (IsEmpty())
    {
        head=newnode;
    }
    else
    {
        Node* temp=head;
        while (temp->GetNext()!=nullptr)
        {
            temp=temp->GetNext();
        }
        temp->SetNext(newnode);
    }
}

void LinkedList::InsertValueEnd(int value)
{
    Node* newnode=new Node(value);
    Node* temp=head;
    while (temp->GetNext()!=nullptr)
    {
            temp=temp->GetNext();
    }
    temp->SetNext(newnode);
}

void LinkedList::InsertValueBefore(int item,int NewValue)
{
    Node* newnode=new Node(NewValue);
    Node*temp=head;
    while(temp!=nullptr && temp->GetNext()->GetValue()!=item)
    {
        temp=temp->GetNext();
    }
    newnode->SetNext(temp->GetNext());
    temp->SetNext(newnode);
}

void LinkedList::DeleteFirstValue()
{
    if (IsEmpty())
    {
        return;
    }
     else if((head->GetNext() == nullptr))
    {
        delete head;
        head=nullptr;
    }
    else
    {
        Node* delptr=head;
        head=head->GetNext();
        delete delptr;
    }
}

void LinkedList::DeleteLastValue()
{ 
    if (IsEmpty())
    {
        return;
    }
    else if((head->GetNext() == nullptr))
    {
        delete head;
        head=nullptr;
    }
    else
    {
        Node* prev=nullptr;
        Node* current=head;
        while (current->GetNext()!=nullptr)
        {
            prev=current;
            current=current->GetNext();
        }
        delete current;
        
    }
}

void LinkedList::DeleteValueBefore(int item)
{
    if(IsEmpty())
    {
        return;
    }
    else
    {
        Node* prev=nullptr;
        Node* current=head;
        while(current->GetNext()!=nullptr && current->GetValue()!=item)
        {
            prev=current;
            current=current->GetNext();
        }
        prev->SetNext(current->GetNext());
        delete current;
    }
}

bool LinkedList::SearchValue(int value)
{
    bool isFound;
    Node*temp=head;
    if(IsEmpty)
    {
        isFound =true;
    }
    else
    {
        while(temp!=nullptr)
        {

            if(temp->GetValue()==value)
            {
                isFound=true;
            }
            else
            {
                temp=temp->GetNext();
            }
            return isFound;
        }   
    }
}
