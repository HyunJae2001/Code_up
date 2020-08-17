//
//  1165.c
//  Code_Up
//
//  Created by HJ on 2020/08/16.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int time, score;
    scanf("%d %d", &time, &score);
    
    for (int i = time; i < 90; i += 5) {
        score++;
    }
    
    printf("%d", score);
    
    return 0;
}
