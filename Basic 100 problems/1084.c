//
//  1084.c
//  Code_Up
//
//  Created by HJ on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int r, g, b, cnt=0;
    scanf("%d %d %d", &r, &g, &b);
    
    for(int i=0; i<r; i++) {
        for(int j=0; j<g; j++) {
            for(int l=0; l<b; l++) {
                printf("%d %d %d\n", i, j, l);
                cnt++;
            }
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}
