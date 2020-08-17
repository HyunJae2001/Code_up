//
//  1164.c
//  Code_Up
//
//  Created by HJ on 2020/08/16.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int car = 170, len;
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &len);
        
        if (len <= car) {
            printf("CRASH");
            return 0;
        }
    }
    
    printf("PASS");
    
    return 0;
}
