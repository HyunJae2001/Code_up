//
//  1155.c
//  Code_Up
//
//  Created by HJ on 2020/08/16.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n % 7 == 0) {
        printf("multiple");
    }
    else{
        printf("not multiple");
    }
    
    return 0;
}
