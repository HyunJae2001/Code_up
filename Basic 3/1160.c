//
//  1160.c
//  Code_Up
//
//  Created by HJ on 2020/08/16.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int partTime(int n) {
    if (n % 2 == 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (partTime(n)) {
        printf("oh my god");
    }
    else {
        printf("enjoy");
    }
    
    return 0;
}
