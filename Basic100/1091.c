//
//  1091.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, m, d, n;
    long long int res;
    scanf("%d %d %d %d", &a, &m, &d, &n);
    
    res = a;
    
    for(int i=1; i<n; i++) {
        res = res*m+d;
    }
    
    printf("%lld", res);
    
    return 0;
}
