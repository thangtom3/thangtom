#ifndef SLIST_H_INCLUDED
#define SLIST_H_INCLUDED
#ifndef __SLIST_H
#define __SLIST_H

#include <string>
#include <iostream>

using namespace std;

/* Node of a singly linked list of strings */
struct SNode {
   string* element;
   SNode *next; // Pointer to the next node

   /* Creates a node. */
   SNode(string* e, SNode* n)  {
      element = e;
      next = n;
   }
   string* getElement() { return element; }
   void print() { cout << *element; }
};

class SList {
protected:		// data member
    SNode* head;
    long size;		// number of nodes in the list

public:
    /* Default constructor that creates an empty list */
    SList() {
        head = NULL;
        size = 0;
    }
    // ... update and search methods would go here ...
    long getSize() { return size; }
    int isEmpty() { return size<=0; }

    string* top(){
        return head->element;
    }

    void addFirst(string* s) {
        SNode* newNode = new SNode(s, head);
        head = newNode;
        size++;
        // return newNode;
    }

    void addLast(string* s){
        size++;
        SNode* newNode = new SNode(s, NULL);
        if(head == NULL) {
            head = newNode;
            return;
        }
        SNode* new2 = head;
        while(new2->next != NULL){
            new2 = new2->next;
        }
        new2->next = newNode;
        // delete new2;
        return;
    }


    string* removeFirst() {
        if (head==NULL) return NULL;
        string* s = head->element;
        SNode * t = head;
        head = head->next;
        delete t;
        size--;
        return s;
    }

    void print() {
        SNode* iter = head;
        while (iter!=NULL) {
            iter->print();
            cout << ", ";
            iter = iter->next;
        }
        cout << endl;
    }
};

/* sample client/text code
int main(void)
{
   SList* dl = new SList();
   string s1 = "1";
   SNode* p = dl->addFirst(&s1);
   dl->print();

   string s2 = "2";
   dl->addFirst(&s2);
   dl->print();

   string s3 = "3";
   dl->addFirst(&s3);
   dl->print();

   string s4 = "4";
   dl->addFirst(&s4);
   dl->print();

   string s5 = "5";
   dl->addFirst(&s5);
   dl->print();

   dl->removeFirst();
   dl->print();
   dl->removeFirst();
   dl->print();
   dl->removeFirst();
   dl->print();

   return 0;
}
*/
#endif


#endif // SLIST_H_INCLUDED
