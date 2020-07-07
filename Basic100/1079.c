//
//  1079.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    while(1) {
        char c;
        scanf(" %c", &c);
        
        printf("%c\n", c);
        
        if(c == 'q') {
            break;
        }
    }
    
    return 0;
}
