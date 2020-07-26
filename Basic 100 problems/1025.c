//
//  1025.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>
#define N 5

int main() {
    int A[N];
    
    for(int i=0; i<N; i++) {
        scanf("%1d", &A[i]);
        
        for(int j=N-i; j>1; j--) {
            A[i] *= 10;
        }
        
        printf("[%d]\n", A[i]);
    }
    
    return 0;
}
