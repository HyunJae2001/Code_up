//
//  1168.c
//  Code_Up
//
//  Created by HJ on 2020/08/19.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int main() {
    int birth, sexual;
    scanf("%d %d", &birth, &sexual);
    
    birth = birth / 10000;
    
    if (sexual == 1 || sexual == 2) {
        birth = 2012 - 1900 - birth;
    }
    else {
        birth = 2012 - 2000 - birth;
    }
    
    printf("%d", birth + 1);
    
    return 0;
}
