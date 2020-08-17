//
//  1162.c
//  Code_Up
//
//  Created by HJ on 2020/08/16.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    
    if ((y - m + d) % 10 == 0) {
        printf("대박");
    }
    else {
        printf("그럭저럭");
    }
    
    return 0;
}
