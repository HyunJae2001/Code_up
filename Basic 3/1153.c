//
//  1153.c
//  Code_Up
//
//  Created by HJ on 2020/08/16.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

char compare(int a, int b) {
    if (a > b) {
        return '>';
    }
    else if (a < b) {
        return '<';
    }
    else {
        return '=';
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("%c", compare(a, b));
    
    return 0;
}
