//
//  1090.c
//  Code_Up
//
//  Created by HJ on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, r, n;
    long long int res;
    scanf("%d %d %d", &a, &r, &n);
    
    res = a;
    
    for(int i=1; i<n; i++) {
        res *= r;
    }
    
    printf("%lld", res);
    
    return 0;
}
