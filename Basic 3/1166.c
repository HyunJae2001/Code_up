//
//  1166.c
//  Code_Up
//
//  Created by HJ on 2020/08/16.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("yes");
    }
    else {
        printf("no");
    }
    
    return 0;
}
