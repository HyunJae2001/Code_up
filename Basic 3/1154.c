//
//  1154.c
//  Code_Up
//
//  Created by HJ on 2020/08/16.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int calculate(int a, int b) {
    if (a > b) {
        return a - b;
    }
    else {
        return b - a;
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("%d", calculate(a, b));
    
    return 0;
}
