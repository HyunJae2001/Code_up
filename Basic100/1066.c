//
//  1066.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

char* check(int a) {
    if(a%2 == 0) {
        return "even";
    }
    return "odd";
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%s\n", check(a));
    printf("%s\n", check(b));
    printf("%s\n", check(c));
    
    return 0;
}
