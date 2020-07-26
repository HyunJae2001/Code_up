//
//  1078.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int n, sum=0;
    scanf("%d", &n);
    
    for(int i=2; i<=n; i+=2) {
        sum += i;
    }
    
    printf("%d", sum);
    
    return 0;
}
