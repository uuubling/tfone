//
//  DeletelistNode.cpp
//  blingbling
//
//  Created by blingbling on 24/8/16.
//  Copyright © 2016年 blingbling. All rights reserved.
//
/*
#include "DeletelistNode.hpp"
//#include  <assert.cpp>
struct Node{
    int data;
    Node* next;
};
void deleteRandomNode(Node *cur)
{
    assert(cur != NULL);
    assert(cur->next != NULL);    //不能是尾节点
    Node* pNext = cur->next;
    cur->data = pNext->data;
    cur->next = pNext->next;
    delete pNext;
}
*/