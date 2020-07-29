//
//  1122.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/29.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int sec, min = 0;
    scanf("%d", &sec);
    
    while (sec >= 60) {
        min++;
        sec -= 60;
    }
    
    printf("%d %d", min, sec);
    
    return 0;
}
