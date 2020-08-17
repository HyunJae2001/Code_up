//
//  1150.c
//  Code_Up
//
//  Created by HJ on 2020/07/29.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < b) {
        if (a < c) {
            printf("%d", a);
        }
        else {
            printf("%d", c);
        }
    }
    else {
        if (b < c) {
            printf("%d", b);
        }
        else {
            printf("%d", c);
        }
    }
    
    return 0;
}
