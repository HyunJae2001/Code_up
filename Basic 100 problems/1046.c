//
//  1046.c
//  Code_Up
//
//  Created by HJ on 2020/07/07.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b, c;
    long long int sum;
    float avr;
    scanf("%d %d %d", &a, &b, &c);
    
    sum = a+b+c;
    avr = (float)sum/3;
    
    printf("%lld\n%.1f", sum, avr);
    
    return 0;
}
