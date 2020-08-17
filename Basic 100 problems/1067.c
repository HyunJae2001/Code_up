//
//  1067.c
//  Code_Up
//
//  Created by HJ on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

char* checkPM(int n) {
    if(n > 0) {
        return "plus";
    }
    return "minus";
}

char* checkOE(int n) {
    if(n%2 == 0) {
        return "even";
    }
    return "odd";
}

int main() {
    int n;
    scanf("%d", &n);
    
    printf("%s\n%s", checkPM(n), checkOE(n));
    
    return 0;
}
