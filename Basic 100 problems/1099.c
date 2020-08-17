//
//  1099.c
//  Code_Up
//
//  Created by HJ on 2020/07/08.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>
#define N 10

int main() {
    int A[N][N], x, y;
    
    x = 1;
    y = 1;
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    while(1) {
        if((A[y+1][x] == 1 && A[y][x+1] == 1) || A[y][x] == 2) {
            A[y][x] = 9;
            break;
        }
        
        A[y][x] = 9;
        
        if(A[y][x+1] != 1) {
            x++;
        }
        else if(A[y+1][x] != 1) {
            y++;
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
