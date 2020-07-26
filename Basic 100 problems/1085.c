//
//  1085.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int h, b, c, s;
    double res;
    scanf("%d %d %d %d", &h, &b, &c, &s);
    
    res = (double)h*b*c*s/8/1024/1024;
    
    printf("%.1lf MB", res);
    
    return 0;
}
