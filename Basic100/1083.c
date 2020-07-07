//
//  1083.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) {
        if(i%3 == 0) {
            printf("X ");
        }
        else{
            printf("%d ", i);
        }
    }
    
    return 0;
}
