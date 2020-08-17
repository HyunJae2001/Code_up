//
//  1094.c
//  Code_Up
//
//  Created by HJ on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>
#define N 10000

int main() {
    int n, A[N]={ };
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        
        A[i] = t;
    }
    
    for(int i=n-1; i>=0; i--) {
        printf("%d ", A[i]);
    }
    
    return 0;
}
