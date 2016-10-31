//
//  intersect.cpp
//  blingbling
//
//  Created by blingbling on 25/8/16.
//  Copyright © 2016年 blingbling. All rights reserved.
//

#include "intersect.hpp"
struct Node{
    int data;
    Node *next;
};
bool isintersect(Node *head1,Node *head2 )
{
    if( hascircle(head1,circlenode)
    
    if(head1==NULL||head2==NULL)
        return false;
    while(head1!=NULL)
        head1=head1->next;
    while(head2!=NULL)
        head2=head2->next;
    if(head1==head2)
        return true;
    else return false;
        
}
