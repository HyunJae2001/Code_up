//
//  1045.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b, add, sub, mul, quo, rem;
    float div;
    scanf("%d %d", &a, &b);
    
    add = a+b;
    sub = a-b;
    mul = a*b;
    quo = a/b;
    rem = a%b;
    div = (float)a/b;
    
    printf("%d\n%d\n%d\n%d\n%d\n%.2f", add, sub, mul, quo, rem, div);
    
    return 0;
}
