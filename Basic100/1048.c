//
//  1048.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if(b == 0) {
        printf("%d", a);
        return 0;
    }
    
    b = 2<<(b-1);
    a *= b;
    
    printf("%d", a);
    
    return 0;
}
