//
//  lastknode.cpp
//  blingbling
//
//  Created by blingbling on 25/8/16.
//  Copyright © 2016年 blingbling. All rights reserved.
//

#include "lastknode.hpp"
struct Node{
    int data;
    Node *next;
};
Node * lastknode(Node *head,int k)
{
   if(k<0)
       return NULL;
    Node *fast =head,*slow=head;
    int i=k;
    for(;i>0&&fast!=NULL;i--)
    {
        fast=fast->next;
        
    }
    if(i>0)
        return NULL;
    while(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
    
}
