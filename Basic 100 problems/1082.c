//
//  1082.c
//  Code_Up
//
//  Created by HJ on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%X", &n);
    
    for(int i=1; i<16; i++) {
        printf("%X*%X=%X\n", n, i, n*i);
    }
    
    return 0;
}
