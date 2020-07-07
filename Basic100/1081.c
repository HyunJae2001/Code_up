//
//  1081.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            printf("%d %d\n", i, j);
        }
    }
    
    return 0;
}
