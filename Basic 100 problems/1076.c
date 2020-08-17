//
//  1076.c
//  Code_Up
//
//  Created by HJ on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    
    for(int i=0; i<=c-'a'; i++) {
        printf("%c ", 'a'+i);
    }
    
    return 0;
}
