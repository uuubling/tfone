//
//  middlenode.cpp
//  blingbling
//
//  Created by blingbling on 25/8/16.
//  Copyright © 2016年 blingbling. All rights reserved.
//

#include "middlenode.hpp"
struct Node{
    int data;
    Node *next;
};
Node * middlenode(Node *head)
{
    if(head==NULL||head->next==NULL)
        return head;
    
    Node *fast=head,*middle=head;
    
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        middle=middle->next;
    }
    
    return middle;
}