//
//  main.cpp
//  Week3PreSession
//
//  Created by Pooja Chowdhary on 7/23/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>

int sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if (A <= 1) {
        return A;
    }
    int low = 0;
    int high = A;
    long mid;
    long answer = 0;
    int prevMid;
    
    while(low<=high) {
        mid = (low+high)/2;
        answer = mid*mid;
        if(answer == A) {
            return mid;
        }
        if (answer < A) {
            low = mid + 1;
            prevMid = mid;
        }
        else {
            high = mid -1;
        }
        
    }
    return prevMid;
}
