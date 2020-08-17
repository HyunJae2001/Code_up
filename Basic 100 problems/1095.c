//
//  1095.c
//  Code_Up
//
//  Created by HJ on 2020/07/08.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int n, min=987654321;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        
        if(min > t) {
            min = t;
        }
    }
    
    printf("%d", min);
    
    return 0;
}
