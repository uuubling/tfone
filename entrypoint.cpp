//
//  entrypoint.cpp
//  blingbling
//
//  Created by blingbling on 25/8/16.
//  Copyright © 2016年 blingbling. All rights reserved.
//

#include "entrypoint.hpp"
struct Node{
    int data;
    Node *next;
};
Node *entrypoint(Node *head)
{
    if(head==NULL||head->next==NULL)
        return NULL;
    Node *fast=head,*slow=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
            break;
    }
    if(fast!=slow)
        return NULL;
    
    fast=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
        if (fast==slow)
            break;
    }
    return fast;
    
}