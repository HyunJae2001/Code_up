//
//  1098.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/08.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>
#define N 100

int main() {
    int w, h, n, A[N][N]={ };
    scanf("%d %d", &h, &w);
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        int l, d, x, y;
        scanf("%d %d %d %d", &l, &d, &y, &x);
        
        x--;
        y--;
        
        for(int j=0; j<l; j++) {
            if(d == 1) {
                A[y+j][x] = 1;
            }
            else{
                A[y][x+j] = 1;
            }
        }
    }
    
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
