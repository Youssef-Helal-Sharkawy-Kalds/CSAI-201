#include <iostream>
class Node 
{
public:
    Node();
    Node(int newitem);
    int GetValue();
    Node* GetNext();
    void SetValue(int data);
    void SetNext(Node* ptr);

private:
    int Value;
    Node* Next;
};

class LinkedList
{
private:
    Node* head;
public:
    LinkedList();
    void PrintList(Node* TempPtr);
    void InsertValueFirst(int value);
    void InsertValueEnd(int value);
    void InsertValueBefore(int item,int NewValue);
    void DeleteFirstValue();
    void DeleteLastValue();
    void DeleteValueBefore(int item);
    bool SearchValue(int value);
    bool IsEmpty();

};