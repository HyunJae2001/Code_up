//
//  1052.c
//  Code_Up
//
//  Created by HJ on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    
    if(a != b) {
        printf("1");
    }
    else{
        printf("0");
    }
    
    return 0;
}
