//
//  1080.c
//  Code_Up
//
//  Created by HJ on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int n, sum=0, cnt=1;
    scanf("%d", &n);
    
    while(sum < n) {
        sum += cnt;
        cnt++;
    }
    
    printf("%d", cnt-1);
    
    return 0;
}
