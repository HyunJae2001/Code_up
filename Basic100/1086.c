//
//  1086.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int w, h, b;
    double res;
    scanf("%d %d %d", &w, &h, &b);
    
    res = (double)w*h*b/8/1024/1024;
    
    printf("%.2lf MB", res);
    
    return 0;
}
