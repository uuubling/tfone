//
//  reverseListbyrecursion.cpp
//  blingbling
//
//  Created by blingbling on 24/8/16.
//  Copyright © 2016年 blingbling. All rights reserved.
//

#include "reverseListbyrecursion.hpp"
struct Node{
    int data;
    Node* next;
};
Node* reverseByRecursion(Node *head)
{
    //第一个条件是判断异常，第二个条件是结束判断
    if(head == NULL || head->next == NULL)
        return head;
    
    Node *newHead = reverseByRecursion(head->next);
    
    head->next->next = head;
    head->next = NULL;
    
    return newHead;    //返回新链表的头指针
}