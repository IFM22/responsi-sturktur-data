#pragma once

#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>
#include <string>

using namespace std;

struct node
{
    string judul;
    string penulis;
    node *next;
};

class LinkedList
{
private:
    node *head;
    int listLength;

public:
    LinkedList();
    bool insertNode(node *newnode, int position);
    bool removeNode(int position);
    void printList();
    ~LinkedList();
};

#endif
