//
//  tree.cpp
//  blingbling
//
//  Created by blingbling on 25/8/16.
//  Copyright © 2016年 blingbling. All rights reserved.
//

#include "tree.hpp"
#include <iostream>
using namespace std;
struct Binarytree{
    int mvalue;
    Binarytree * left_node;
    Binarytree *right_node;
};

int countnode(Binarytree *root)
{
    //int count=0;
    if(root==NULL)
        return 0;
    
    return countnode(root->left_node)+countnode(root->right_node)+1;
    
}
Binarytree *root()

{
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
    return &a;

}



