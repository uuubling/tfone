//
//  hascircle.cpp
//  blingbling
//
//  Created by blingbling on 25/8/16.
//  Copyright © 2016年 blingbling. All rights reserved.
//

#include "hascircle.hpp"
struct Node{
    int data;
    Node *next;
    
};
bool hascircle(Node *head,Node *circlenode)
{
    if(head==NULL||head->next==NULL)
        return false;
    Node *fast=head,*slow=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            circlenode=fast;
            return true;
        }
    }
        
        
    
    return false;
    
    
    
}