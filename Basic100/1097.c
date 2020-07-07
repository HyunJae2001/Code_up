//
//  1097.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/08.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>
#define N 19

int main() {
    int A[N][N], n;
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        int x, y;
        scanf("%d %d", &y, &x);
        
        x--;
        y--;
        
        for(int j=0; j<N; j++) {
            if(A[j][x] == 0) {
                A[j][x] = 1;
            }
            else {
                A[j][x] = 0;
            }
            
            if(A[y][j] == 0) {
                A[y][j] = 1;
            }
            else {
                A[y][j] = 0;
            }
        }
    }
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
