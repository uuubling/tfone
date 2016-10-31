//
//  intersectpoint.cpp
//  blingbling
//
//  Created by blingbling on 25/8/16.
//  Copyright © 2016年 blingbling. All rights reserved.
//

#include "intersectpoint.hpp"
struct Node{
    int data;
    Node *next;
};
int length(Node *head)
{
    int length=0;
    while(head!=NULL)
    {
        length++;
        head=head->next;
    }
    return length;
}
Node * intersectpoint(Node *h1,Node *h2)
{
    int l1=length(h1);
    int l2=length(h2);
    if(l1>=l2)
    {
        int k=l1-l2;
        for(;k>0;k--)
        {
            h1=h1->next;
        }
    
    }
    else
    {
        int k=l2-l1;
        for(;k>0;k--)
            h2=h2->next;
    }
    
    while(h1!=NULL)
    {
        if (h1==h2)return h1;
        h1=h1->next;
        h2=h2->next;
    }
    return NULL;
    
   
}