//
//  PostOrderTraversal.cpp
//  Week3PreSession
//
//  Created by Pooja Chowdhary on 7/23/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

//Definition for binary tree
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

vector<int> postorderTraversal(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<int> answer;
    if(A == nullptr) {
        return answer;
    }
    TreeNode *current = A;
    vector<TreeNode*> temp;
    temp.push_back(A);
    while(temp.size() > 0) {
        current = temp.back();
        temp.pop_back();
        answer.insert(answer.begin(), 1, current->val);
        
        if(current->left != nullptr) {
            temp.push_back(current->left);
        }
        if(current->right != nullptr) {
            temp.push_back(current->right);
        }
    }
    return answer;
}
