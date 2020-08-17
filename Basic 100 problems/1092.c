//
//  1092.c
//  Code_Up
//
//  Created by HJ on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int return_small(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);
    
    t = return_small(a, return_small(b, c));
    
    for(int i=t; ; i+=t) {
        if(i%a == 0 && i%b == 0 && i%c ==0) {
            printf("%d", i);
            break;
        }
    }
    
    return 0;
}
