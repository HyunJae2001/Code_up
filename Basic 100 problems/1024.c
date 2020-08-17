//
//  1024.c
//  Code_Up
//
//  Created by HJ on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    char S[21];
    scanf("%s", S);
    
    for(int i=0; S[i]!='\0'; i++) {
        printf("'%c'\n", S[i]);
    }
    
    return 0;
}
