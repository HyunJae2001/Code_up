//
//  1096.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/08.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>
#define N 19

int main() {
    int n, A[N][N]={ };
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        A[x-1][y-1] = 1;
    }
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
