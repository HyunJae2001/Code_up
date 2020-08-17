//
//  1161.c
//  Code_Up
//
//  Created by HJ on 2020/08/16.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

char *f(int n) {
    if (n % 2 == 0) {
        return "짝수";
    }
    else {
        return "홀수";
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("%s+%s=%s", f(a), f(b), f(a+b));
        
    return 0;
}
