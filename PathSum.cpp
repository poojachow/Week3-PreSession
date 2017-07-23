//
//  PathSum.cpp
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

int hasPathSum(TreeNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(A == nullptr) {
        return 0;
    }
    
    TreeNode *current = A;
    int sum = 0;
    vector<int> sumStack;
    vector<TreeNode*> tempStack;
    bool isLeftLeaf = false, isRightLeaf = false;
    
    tempStack.push_back(current);
    sumStack.push_back(current->val);
    
    while(tempStack.size() > 0) {
        current = tempStack.back();
        tempStack.pop_back();
        sum = sumStack.back();
        sumStack.pop_back();
        
        if(current->right != nullptr) {
            tempStack.push_back(current->right);
            sumStack.push_back((current->right)->val + sum);
            isRightLeaf = false;
        }
        else {
            isRightLeaf = true;
        }
        
        if(current->left != nullptr) {
            tempStack.push_back(current->left);
            sumStack.push_back((current->left)->val + sum);
            isLeftLeaf = false;
        }
        else {
            isLeftLeaf = true;
        }
        
        if (isRightLeaf && isLeftLeaf) {
            if (sum == B) {
                return 1;
            }
        }
    }
    return 0;
    
}
