//
//  1064.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int comp(int a, int b) {
    if(a < b) {
        return a;
    }
    return b;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d", comp(a, comp(b, c)));
    
    return 0;
}
