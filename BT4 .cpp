
#include <string>
#include <iostream>
#include "slist.h"

using namespace std;

class Stack {
private:
    SList* slist;

public:
    Stack() { slist = new SList(); }
    bool isEmpty() { return slist->isEmpty(); }
    long getSize() { return slist->getSize(); }
    void push(string* s) {
        return slist->addFirst(s);
    }
    string* pop() {
        return slist->removeFirst();
    }
    string* top() {
        return slist->top();
    }
    void print() {
         slist->print();
    }
};

class Queue {
private:
    SList* slist;

public:
    Queue() { slist = new SList(); }
    bool isEmpty() { return slist->isEmpty(); }
    long getSize() { return slist->getSize(); }
    void enqueue(string* s) {
        return slist->addLast(s);
    }
    string* dequeue() {
        return slist->removeFirst();
    }
    string* front_() {
        return slist->top();
    }
    void print() {
         slist->print();
    }
};
int main(){
    Queue* q = new Queue();
    Stack* s = new Stack();
    string s1 = "1", s2 = "2", s3 = "3", s4 = "4";
  
    s->push(&s1);
    
    s->push(&s2);
  
    s->push(&s3);

    s->push(&s4);
    s->print();
    //Pop cac phan tu khoi Stack sang Queue
    while(!s->isEmpty()){
        string* str = s->pop();
        q->enqueue(str);
    }

    //Dequeue cac phan tu cua Queue push nguoc lai vao Stack
    while(!q->isEmpty()){
        string* str = q->dequeue();
        s->push(str);
    }
    s->print();
   
    return 0;
}
