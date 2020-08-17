//
//  1068.c
//  Code_Up
//
//  Created by HJ on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

char* check_grade(int n) {
    if(n >= 90) {
        return "A";
    }
    else if(n >= 70) {
        return "B";
    }
    else if(n >= 40) {
        return "C";
    }
    return "D";
}

int main() {
    int n;
    scanf("%d", &n);
    
    printf("%s", check_grade(n));
    
    return 0;
}
