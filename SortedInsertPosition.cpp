//
//  SortedInsertPosition.cpp
//  Week3PreSession
//
//  Created by Pooja Chowdhary on 7/23/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(A.size() == 0) {
        return 0;
    }
    
    int low = 0;
    int high = A.size() - 1;
    int mid;
    while(low <= high) {
        mid = (low + high)/2;
        if(A[mid] == B) {
            return mid;
        }
        if(A[mid] > B) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
    
}
