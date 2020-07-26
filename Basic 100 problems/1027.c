//
//  1027.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int y, m, d;
    scanf("%d.%d.%d", &y, &m, &d);
    
    printf("%02d-%02d-%04d", d, m, y);
    
    return 0;
}
