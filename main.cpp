//
//  main.cpp
//  blingbling
//
//  Created by blingbling on 23/8/16.
//  Copyright © 2016年 blingbling. All rights reserved.
//

#include <iostream>
using namespace std;
struct Binarytree{
    int mvalue;
    Binarytree * left_node;
    Binarytree *right_node;
};
extern Binarytree *root();
extern int countnode(Binarytree *root);

//#include "quick_sort.cpp"
//#include"quick_sort.hpp"
//struct Node{
//    int data;
//    Node* next;
//};
//extern Node *reversebyloop(Node *head);
//
//using namespace std;
//void print(Node *head)
//{
//    while(head!=NULL)
//        
//    {
//        cout<<head->data;
//        head=head->next;
//    }
//}
//
int main() {
    // insert code here...
    
//   
//    Node a,b ,c,d;
//    a.data=1;
//    b.data=2;
//    c.data=3;
//    d.data=4;
//    a.next=&b;
//    b.next=&c;
//    c.next=&d;
//    d.next=NULL;
//   //Node* hhead= reversebyloop(head);
//    print(&a);
    Binarytree a,b,c,d,e;
    a.mvalue=1;
    a.left_node=&b;
    a.right_node=&c;
    b.mvalue=2;
    c.mvalue=3;
    b.left_node=&d;
    b.right_node=NULL;
    d.mvalue=4;
    e.mvalue=5;
    c.left_node=NULL;
    c.right_node=&e;

    cout<<countnode(&a);
    
    
    
    
    
    
    
    
    return 0;
}
