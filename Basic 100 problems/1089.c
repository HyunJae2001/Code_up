//
//  1089.c
//  Code_Up
//
//  Created by HJ on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, d, n;
    scanf("%d %d %d", &a, &d, &n);
    
    for(int i=1; i<n; i++) {
        a += d;
    }
    
    printf("%d", a);
    
    return 0;
}
