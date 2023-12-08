#include<iostream>
using namespace std;
template<typename t>
class Queue
{    
private:

    int size;
    int rear;
    int front;
    t*array;
    
public:

    Queue(int size)
    {
        this->size=size;
        this->front=this->rear=-1;
        array=new t[size];
    }

    ~Queue()
    {
        delete[] array;    
    }

    bool isFull()
    {
        if ((rear+1)%size==front)
        {
        return true;
        }
        else 
        {
        return false;
        }
    }

    bool IsEmpty()
    {
        if (front==-1 && rear==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(const t& item)
    {
        if (isFull()){
            return;
        }
        else if(IsEmpty())
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=(rear+1)%size;
        }
        array[rear]=item;
    }

    t dequeue()
    {
        if(IsEmpty())
        {
            return ;
        }
        t value=array[front];
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=(front+1)%size;
        }
        return value;
    };
};