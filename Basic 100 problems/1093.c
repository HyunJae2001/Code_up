//
//  1093.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>
#define N 23

int main() {
    int n, A[N] = { };
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        
        A[t-1]++;
    }
    
    for(int i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    
    return 0;
}
