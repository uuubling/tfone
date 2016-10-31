//
//  reverseListbyloop.cpp
//  blingbling
//
//  Created by blingbling on 24/8/16.
//  Copyright © 2016年 blingbling. All rights reserved.
//

#include "reverseListbyloop.hpp"
struct Node{
    int data;
    Node* next;
};


Node *reversebyloop(Node *head)
{
    if(head==NULL||head->next==NULL)
    {
        
        return head;
        
    }
    
    Node *pre=NULL,*next=NULL;
    while(head!=NULL)
    {
    
        next=head->next;
        head->next=pre;
        pre=head;
        head=next;
    
    }
    return pre;


}