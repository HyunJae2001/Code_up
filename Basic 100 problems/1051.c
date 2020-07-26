//
//  1051.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    
    if(b >= a) {
        printf("1");
    }
    else {
        printf("0");
    }
    
    return 0;
}
