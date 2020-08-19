//
//  1169.c
//  Code_Up
//
//  Created by HyunJae_K on 2020/08/19.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int age, year;
    scanf("%d", &age);
    
    year = 2012 - age + 1;
    
    if (year < 2000) {
        printf("%d %d", year % 100, 1);
    }
    else{
        printf("%d %d", year % 100, 3);
    }
    
    return 0;
}
