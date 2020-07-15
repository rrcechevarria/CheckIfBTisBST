#pragma once
#include<iostream>
#include<algorithm>
#include<list>
#include<map>
#include<concurrent_priority_queue.h>
#include<stack>
#include<string>
#include<vector>
#include "stdio.h"
#include "conio.h"

class node
{
public:
    int data;
    node* left;
    node* right;
   
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};